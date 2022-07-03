// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoDataUpdater/Public/AutoDataObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoDataObject() {}
// Cross Module References
	AUTODATAUPDATER_API UClass* Z_Construct_UClass_UAutoDataObject_NoRegister();
	AUTODATAUPDATER_API UClass* Z_Construct_UClass_UAutoDataObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutoDataUpdater();
	AUTODATAUPDATER_API UClass* Z_Construct_UClass_UAutoDataNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAutoDataObject::execGetRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RowNumber);
		P_GET_TARRAY_REF(UAutoDataNode*,Z_Param_Out_OutNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRow(Z_Param_RowNumber,Z_Param_Out_OutNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoDataObject::execGetNumberOfRows)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfRows();
		P_NATIVE_END;
	}
	void UAutoDataObject::StaticRegisterNativesUAutoDataObject()
	{
		UClass* Class = UAutoDataObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumberOfRows", &UAutoDataObject::execGetNumberOfRows },
			{ "GetRow", &UAutoDataObject::execGetRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics
	{
		struct AutoDataObject_eventGetNumberOfRows_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoDataObject_eventGetNumberOfRows_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get the number of rows the data object contains\n" },
		{ "ModuleRelativePath", "Public/AutoDataObject.h" },
		{ "ToolTip", "Get the number of rows the data object contains" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDataObject, nullptr, "GetNumberOfRows", nullptr, nullptr, sizeof(AutoDataObject_eventGetNumberOfRows_Parms), Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoDataObject_GetRow_Statics
	{
		struct AutoDataObject_eventGetRow_Parms
		{
			int32 RowNumber;
			TArray<UAutoDataNode*> OutNodes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowNumber;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutNodes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNodes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_RowNumber = { "RowNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoDataObject_eventGetRow_Parms, RowNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_OutNodes_Inner = { "OutNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAutoDataNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_OutNodes = { "OutNodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoDataObject_eventGetRow_Parms, OutNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutoDataObject_eventGetRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutoDataObject_eventGetRow_Parms), &Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_RowNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_OutNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_OutNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get data nodes from specific row number\n" },
		{ "ModuleRelativePath", "Public/AutoDataObject.h" },
		{ "ToolTip", "Get data nodes from specific row number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDataObject, nullptr, "GetRow", nullptr, nullptr, sizeof(AutoDataObject_eventGetRow_Parms), Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDataObject_GetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoDataObject_GetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutoDataObject_NoRegister()
	{
		return UAutoDataObject::StaticClass();
	}
	struct Z_Construct_UClass_UAutoDataObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileOrigin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataHeader_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataHeader;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoDataObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoDataUpdater,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoDataObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoDataObject_GetNumberOfRows, "GetNumberOfRows" }, // 224735432
		{ &Z_Construct_UFunction_UAutoDataObject_GetRow, "GetRow" }, // 2442494885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n *\x09Object representing one data sheet\n */" },
		{ "IncludePath", "AutoDataObject.h" },
		{ "ModuleRelativePath", "Public/AutoDataObject.h" },
		{ "ToolTip", "*     Object representing one data sheet" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataObject_Statics::NewProp_FileOrigin_MetaData[] = {
		{ "Category", "AutoDataObject" },
		{ "Comment", "// Original name of the data sheet, for logging purposes\n" },
		{ "ModuleRelativePath", "Public/AutoDataObject.h" },
		{ "ToolTip", "Original name of the data sheet, for logging purposes" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoDataObject_Statics::NewProp_FileOrigin = { "FileOrigin", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoDataObject, FileOrigin), METADATA_PARAMS(Z_Construct_UClass_UAutoDataObject_Statics::NewProp_FileOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataObject_Statics::NewProp_FileOrigin_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataHeader_Inner = { "DataHeader", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataHeader_MetaData[] = {
		{ "Category", "AutoDataObject" },
		{ "Comment", "// Array containing the data sheet header\n" },
		{ "ModuleRelativePath", "Public/AutoDataObject.h" },
		{ "ToolTip", "Array containing the data sheet header" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataHeader = { "DataHeader", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoDataObject, DataHeader), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataHeader_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataNodes_Inner = { "DataNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAutoDataNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataNodes_MetaData[] = {
		{ "Category", "AutoDataObject" },
		{ "Comment", "// Array containing the data nodes, stored continuously in a single array\n" },
		{ "ModuleRelativePath", "Public/AutoDataObject.h" },
		{ "ToolTip", "Array containing the data nodes, stored continuously in a single array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataNodes = { "DataNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoDataObject, DataNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataObject_Statics::NewProp_FileOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataHeader_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataObject_Statics::NewProp_DataNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoDataObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoDataObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoDataObject_Statics::ClassParams = {
		&UAutoDataObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoDataObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoDataObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoDataObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoDataObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoDataObject, 2011046409);
	template<> AUTODATAUPDATER_API UClass* StaticClass<UAutoDataObject>()
	{
		return UAutoDataObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoDataObject(Z_Construct_UClass_UAutoDataObject, &UAutoDataObject::StaticClass, TEXT("/Script/AutoDataUpdater"), TEXT("UAutoDataObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoDataObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
