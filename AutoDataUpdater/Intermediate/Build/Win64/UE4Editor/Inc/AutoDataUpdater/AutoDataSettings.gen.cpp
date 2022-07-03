// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoDataUpdater/Public/AutoDataSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoDataSettings() {}
// Cross Module References
	AUTODATAUPDATER_API UClass* Z_Construct_UClass_UAutoDataSettings_NoRegister();
	AUTODATAUPDATER_API UClass* Z_Construct_UClass_UAutoDataSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutoDataUpdater();
// End Cross Module References
	void UAutoDataSettings::StaticRegisterNativesUAutoDataSettings()
	{
	}
	UClass* Z_Construct_UClass_UAutoDataSettings_NoRegister()
	{
		return UAutoDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutoDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataFilepaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataFilepaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataFilepaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoAppendProjectPath_MetaData[];
#endif
		static void NewProp_bAutoAppendProjectPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoAppendProjectPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoDataUpdater,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Plugin settings for AutoDataUpdater\n */" },
		{ "IncludePath", "AutoDataSettings.h" },
		{ "ModuleRelativePath", "Public/AutoDataSettings.h" },
		{ "ToolTip", "Plugin settings for AutoDataUpdater" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_DataFilepaths_Inner = { "DataFilepaths", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_DataFilepaths_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/*\n\x09*\x09""Filepath of the csv files to load\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutoDataSettings.h" },
		{ "ToolTip", "*       Filepath of the csv files to load" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_DataFilepaths = { "DataFilepaths", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoDataSettings, DataFilepaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_DataFilepaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_DataFilepaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_bAutoAppendProjectPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/*\n\x09*\x09If set to true, will automatically append the project path before the specified filepaths\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutoDataSettings.h" },
		{ "ToolTip", "*       If set to true, will automatically append the project path before the specified filepaths" },
	};
#endif
	void Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_bAutoAppendProjectPath_SetBit(void* Obj)
	{
		((UAutoDataSettings*)Obj)->bAutoAppendProjectPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_bAutoAppendProjectPath = { "bAutoAppendProjectPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoDataSettings), &Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_bAutoAppendProjectPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_bAutoAppendProjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_bAutoAppendProjectPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoDataSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_DataFilepaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_DataFilepaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataSettings_Statics::NewProp_bAutoAppendProjectPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoDataSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoDataSettings_Statics::ClassParams = {
		&UAutoDataSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutoDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoDataSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoDataSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoDataSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoDataSettings, 3214384983);
	template<> AUTODATAUPDATER_API UClass* StaticClass<UAutoDataSettings>()
	{
		return UAutoDataSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoDataSettings(Z_Construct_UClass_UAutoDataSettings, &UAutoDataSettings::StaticClass, TEXT("/Script/AutoDataUpdater"), TEXT("UAutoDataSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoDataSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
