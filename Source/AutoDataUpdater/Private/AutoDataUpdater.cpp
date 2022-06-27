// Copyright (c) 2022 Nicodemus Eka Gunawan

#include "AutoDataUpdater.h"
#include "AutoDataUpdaterStyle.h"
#include "AutoDataUpdaterCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

// Asset registry
#include <Misc/Paths.h>
#include "AssetRegistry/AssetRegistryModule.h"

// Settings
#include "ISettingsModule.h"

#include <AutoDataSettings.h>
#include <AutoDataObject.h>
#include "Engine/SCS_Node.h"
#include "UObject/UnrealType.h"

static const FName AutoDataUpdaterTabName("AutoDataUpdater");

#define LOCTEXT_NAMESPACE "FAutoDataUpdaterModule"

void FAutoDataUpdaterModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FAutoDataUpdaterStyle::Initialize();
	FAutoDataUpdaterStyle::ReloadTextures();

	FAutoDataUpdaterCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FAutoDataUpdaterCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FAutoDataUpdaterModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FAutoDataUpdaterModule::RegisterMenus));
}

void FAutoDataUpdaterModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Clean up setting registry
	if (UObjectInitialized())
	{
		UnregisterSettings();
	}

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FAutoDataUpdaterStyle::Shutdown();

	FAutoDataUpdaterCommands::Unregister();
}

void FAutoDataUpdaterModule::PluginButtonClicked()
{
	// String for message dialog
	FString MessageString = TEXT("");

	const TArray<FString> FilesToLoad = GetDefault<UAutoDataSettings>()->DataFilepaths;
	const bool bAppendProjectPath = GetDefault<UAutoDataSettings>()->bAutoAppendProjectPath;

	// Checks if the file loading is all good
	bool bIsAllSuccess = true;

	if (FilesToLoad.Num() > 0)
	{
		for (FString It : FilesToLoad)
		{
			UAutoDataObject* SourceDataObject = NewObject<UAutoDataObject>();
			if (SourceDataObject &&
				SourceDataObject->ParseCsv(bAppendProjectPath ? AppendProjectPath(It) : It))
			{
				bIsAllSuccess &= ParseDataObjectAndUpdate(SourceDataObject);
			}
		}

		MessageString = bIsAllSuccess ? TEXT("Update successful!") :
			TEXT("Found some error, check logs for more details.");
	}
	else
	{
		MessageString = TEXT("No filepaths added. Add the files to load in the Project Settings.");
	}

	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(MessageString));
}

void FAutoDataUpdaterModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("General");
			Section.AddMenuEntryWithCommandList(FAutoDataUpdaterCommands::Get().PluginAction, PluginCommands);
		}
	}

	RegisterSettings();
}

void FAutoDataUpdaterModule::RegisterSettings()
{
	// Register settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "Auto Data Updater",
			LOCTEXT("RuntimeSettingsName", "Auto Data Updater"),
			LOCTEXT("RuntimeSettingsDescription", "Configure the Auto Data Updater plugin"),
			GetMutableDefault<UAutoDataSettings>());
	}
}

void FAutoDataUpdaterModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "MET Data Parser");
	}
}

UClass* FAutoDataUpdaterModule::FindClassByName(const FName& ClassName)
{
	if (ClassName.IsNone())
		return nullptr;

	// Get asset registry
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(FName("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	TArray<FAssetData> AssetsList;
	AssetRegistry.GetAssetsByPath("/Game/", AssetsList, true);

	for (FAssetData It : AssetsList)
	{
		if (!It.IsValid())
		{
			continue;
		}

		// Get with matching name
		if (It.AssetName == ClassName)
		{
			// If the object is a BP class, get the BP generated class instead
			const UBlueprint* BlueprintClass = Cast<UBlueprint>(It.GetAsset());
			if (BlueprintClass)
			{
				return BlueprintClass->GeneratedClass;
			}

			return It.GetAsset()->GetClass();
		}
	}

	return nullptr;
}

FString FAutoDataUpdaterModule::AppendProjectPath(const FString& FilePath)
{
	// Don't do anything if the specified file path is empty
	if (FilePath.IsEmpty())
	{
		return "";
	}

	// Project path to append
	const FString ProjectPath = FPaths::ProjectDir();

	// If specified file path already has the project path, return as is; else return with the project path appended
	return (FilePath.StartsWith(ProjectPath)) ? FilePath : (ProjectPath + FilePath);
}

bool FAutoDataUpdaterModule::ParseDataObjectAndUpdate(UAutoDataObject* DataSource)
{
	if (!DataSource)
		return false;

	bool bHasError = false;

	// Iterate through the data object by rows of data
	for (int32 i = 0; i < DataSource->GetNumberOfRows(); i++)
	{
		TArray<UAutoDataNode*> CurrentNodes;
		if (DataSource->GetRow(i, CurrentNodes) && CurrentNodes.Num() > 0)
		{
			// Assume first node as the object name
			UClass* AssetClass = FindClassByName(CurrentNodes[0]->GetValueAsName());
			if (!AssetClass)
			{
				UE_LOG(LogDataParser, Error, TEXT("Can't find object %s."), *CurrentNodes[0]->GetValueAsString());
				bHasError = true;
				continue;
			}

			// Iterate through the remaining nodes and try to find the variable as property and update its value
			for (int32 j = 1; j < CurrentNodes.Num(); j++)
			{
				// Property name
				const FName PropertyName = *DataSource->DataHeader[j];

				FProperty* PropertyToChange = nullptr;
				UObject* DefaultObject = nullptr;

				if (FindPropertyFromClass(AssetClass, PropertyName, PropertyToChange, DefaultObject))
				{
					// This is the hacky part, since we can't convert string into variable type, we just have to check one by one
					const FString VariableType = PropertyToChange->GetCPPType();

					if (VariableType == TEXT("float"))
					{
						UpdateProperty<float>(DefaultObject, PropertyToChange, CurrentNodes[j]->GetValueAsFloat());
					}
					else if (VariableType == TEXT("int32"))
					{
						UpdateProperty<int32>(DefaultObject, PropertyToChange, CurrentNodes[j]->GetValueAsInteger());
					}
					else if (VariableType == TEXT("FString"))
					{
						UpdateProperty<FString>(DefaultObject, PropertyToChange, CurrentNodes[j]->GetValueAsString());
					}
					else if (VariableType == TEXT("FName"))
					{
						UpdateProperty<FName>(DefaultObject, PropertyToChange, CurrentNodes[j]->GetValueAsName());
					}
					else if (VariableType == TEXT("bool"))
					{
						UpdateProperty<bool>(DefaultObject, PropertyToChange, CurrentNodes[j]->GetValueAsBool());
					}
					else
					{
						UE_LOG(LogDataParser, Error, TEXT("Variable %s is not supported."), *PropertyName.ToString());
						bHasError = true;
					}
				}
				else
				{
					UE_LOG(LogDataParser, Error, TEXT("Variable %s not found on %s."),
						*PropertyName.ToString(), *AssetClass->GetFName().ToString());
					bHasError = true;
				}
			}

			// Mark package dirty so save prompt can appear
			AssetClass->MarkPackageDirty();
		}
	}

	return !bHasError;
}

template<typename ValueType>
bool FAutoDataUpdaterModule::UpdateProperty(UObject* DefaultObject, FProperty* PropertyToUpdate, const ValueType PropertyValue)
{
	if (!DefaultObject || !PropertyToUpdate)
		return false;
	
	// Update property value
	ValueType* PropertyValuePtr = PropertyToUpdate->ContainerPtrToValuePtr<ValueType>(DefaultObject);
	if (PropertyValuePtr)
	{
		*PropertyValuePtr = PropertyValue;
		return true;
	}


	return false;
}

bool FAutoDataUpdaterModule::FindPropertyFromClass(UClass* ObjectClass, const FName& PropertyName, FProperty*& OutProperty, UObject*& OutDefaultObject)
{
	if (!ObjectClass || PropertyName.IsNone())
		return false;

	// Find the property on the class
	OutProperty = GetProperty(ObjectClass, PropertyName);

	if (OutProperty)
	{
		OutDefaultObject = ObjectClass->GetDefaultObject<UObject>();
		return true;
	}
	else
	{
		// If property is not found, iterate through components in Blueprint
		UBlueprintGeneratedClass* BpClass = Cast<UBlueprintGeneratedClass>(ObjectClass);
		while (BpClass)
		{
			for (USCS_Node* NodeIt : BpClass->SimpleConstructionScript->GetAllNodes())
			{
				// Look for property in the component class
				OutProperty = GetProperty(NodeIt->ComponentClass, PropertyName);
				if (OutProperty)
				{
					// Set default object as the component from the original class, not the super
					OutDefaultObject = NodeIt->GetActualComponentTemplate(Cast<UBlueprintGeneratedClass>(ObjectClass));
					return true;
				}
			}

			// Get super class since the SCS Node can only get immediate components
			BpClass = Cast<UBlueprintGeneratedClass>(BpClass->GetSuperClass());
		}
	}

	return false;
}

FProperty* FAutoDataUpdaterModule::GetProperty(UClass* ObjectClass, const FName& PropertyName)
{
	if (!ObjectClass || PropertyName.IsNone())
		return nullptr;

	for (TFieldIterator<FProperty> PropertyItr(ObjectClass); PropertyItr; ++PropertyItr)
	{
		FProperty* Property = *PropertyItr;
		if (Property && Property->GetFName() == PropertyName)
		{
			return Property;
		}
	}

	return nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAutoDataUpdaterModule, AutoDataUpdater)