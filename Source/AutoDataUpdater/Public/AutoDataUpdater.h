// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;
class UAutoDataObject;
class UAutoDataNode;

class FAutoDataUpdaterModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	
private:

	void RegisterMenus();

	// Register plugin settings to the settings module
	void RegisterSettings();

	// Clean plugin setting registry
	void UnregisterSettings();

private:
	TSharedPtr<class FUICommandList> PluginCommands;

protected:

	/*
	*	Gets the the UClass of the first asset with the specified name
	*	@param ClassName: Name of the asset to find
	*/
	UClass* FindClassByName(const FName& ClassName);

	/* 
	*	Checks and appends if the specified path has the project path
	*	@return modified filepath with the project path appended, will return empty if the given string is empty
	*/
	FString AppendProjectPath(const FString& FilePath);

	/*
	*	Reads from data object and update the game assets
	*	This function assumes the first row as the variable names, and the first column as the asset name in the Content Browser
	*	@return true if data is successfully read and updated
	*/
	bool ParseDataObjectAndUpdate(UAutoDataObject* DataSource);

	/*
	*	Updates the value of the specified FProperty from the UObject
	*	@return true if value is successfully changed
	*/
	template<typename ValueType>
	bool UpdateProperty(UObject* DefaultObject, FProperty* PropertyToUpdate, const ValueType PropertyValue);

	/*
	*	Gets the property from the specified class and its component, alongside the default object (if it's a component)
	*	@return true if property is found
	*/
	bool FindPropertyFromClass(UClass* ObjectClass, const FName& PropertyName, FProperty*& OutProperty, UObject*& OutDefaultObject);

	/*
	*	Property iterator, look for the property with the matching name in the given class
	*/
	FProperty* GetProperty(UClass* ObjectClass, const FName& PropertyName);
};