// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoDataUpdater/Public/AutoDataNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoDataNode() {}
// Cross Module References
	AUTODATAUPDATER_API UClass* Z_Construct_UClass_UAutoDataNode_NoRegister();
	AUTODATAUPDATER_API UClass* Z_Construct_UClass_UAutoDataNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutoDataUpdater();
// End Cross Module References
	DEFINE_FUNCTION(UAutoDataNode::execGetValueAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueAsBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoDataNode::execGetValueAsName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetValueAsName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoDataNode::execGetValueAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValueAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoDataNode::execGetValueAsInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueAsInteger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoDataNode::execGetValueAsFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueAsFloat();
		P_NATIVE_END;
	}
	void UAutoDataNode::StaticRegisterNativesUAutoDataNode()
	{
		UClass* Class = UAutoDataNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValueAsBool", &UAutoDataNode::execGetValueAsBool },
			{ "GetValueAsFloat", &UAutoDataNode::execGetValueAsFloat },
			{ "GetValueAsInteger", &UAutoDataNode::execGetValueAsInteger },
			{ "GetValueAsName", &UAutoDataNode::execGetValueAsName },
			{ "GetValueAsString", &UAutoDataNode::execGetValueAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics
	{
		struct AutoDataNode_eventGetValueAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutoDataNode_eventGetValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutoDataNode_eventGetValueAsBool_Parms), &Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*\x09""Converts the raw value of the node as boolean\n\x09*\x09Will return true if numeric value bigger than 0, or string value of \"true\" (case insensitive)\n\x09*\x09@return value as boolean\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutoDataNode.h" },
		{ "ToolTip", "*       Converts the raw value of the node as boolean\n*       Will return true if numeric value bigger than 0, or string value of \"true\" (case insensitive)\n*       @return value as boolean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDataNode, nullptr, "GetValueAsBool", nullptr, nullptr, sizeof(AutoDataNode_eventGetValueAsBool_Parms), Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDataNode_GetValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoDataNode_GetValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics
	{
		struct AutoDataNode_eventGetValueAsFloat_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoDataNode_eventGetValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*\x09""Converts the raw value of the node as float\n\x09*\x09@return: converted value if successful, else 0.0f\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutoDataNode.h" },
		{ "ToolTip", "*       Converts the raw value of the node as float\n*       @return: converted value if successful, else 0.0f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDataNode, nullptr, "GetValueAsFloat", nullptr, nullptr, sizeof(AutoDataNode_eventGetValueAsFloat_Parms), Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics
	{
		struct AutoDataNode_eventGetValueAsInteger_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoDataNode_eventGetValueAsInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*\x09""Converts the raw value of the node as integer, if raw value is a float it will be truncated\n\x09*\x09@return: converted value if successful, else 0\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutoDataNode.h" },
		{ "ToolTip", "*       Converts the raw value of the node as integer, if raw value is a float it will be truncated\n*       @return: converted value if successful, else 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDataNode, nullptr, "GetValueAsInteger", nullptr, nullptr, sizeof(AutoDataNode_eventGetValueAsInteger_Parms), Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics
	{
		struct AutoDataNode_eventGetValueAsName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoDataNode_eventGetValueAsName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*\x09Returns the value as FName, can be empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutoDataNode.h" },
		{ "ToolTip", "*       Returns the value as FName, can be empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDataNode, nullptr, "GetValueAsName", nullptr, nullptr, sizeof(AutoDataNode_eventGetValueAsName_Parms), Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDataNode_GetValueAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoDataNode_GetValueAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics
	{
		struct AutoDataNode_eventGetValueAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoDataNode_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*\x09Returns the value as string, can be empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutoDataNode.h" },
		{ "ToolTip", "*       Returns the value as string, can be empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDataNode, nullptr, "GetValueAsString", nullptr, nullptr, sizeof(AutoDataNode_eventGetValueAsString_Parms), Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDataNode_GetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoDataNode_GetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutoDataNode_NoRegister()
	{
		return UAutoDataNode::StaticClass();
	}
	struct Z_Construct_UClass_UAutoDataNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RawValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoDataNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoDataUpdater,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoDataNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoDataNode_GetValueAsBool, "GetValueAsBool" }, // 563359615
		{ &Z_Construct_UFunction_UAutoDataNode_GetValueAsFloat, "GetValueAsFloat" }, // 3729603396
		{ &Z_Construct_UFunction_UAutoDataNode_GetValueAsInteger, "GetValueAsInteger" }, // 2444890897
		{ &Z_Construct_UFunction_UAutoDataNode_GetValueAsName, "GetValueAsName" }, // 2622822624
		{ &Z_Construct_UFunction_UAutoDataNode_GetValueAsString, "GetValueAsString" }, // 917050614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Object containing one cell of data\n *\x09(we don't really care about data size (array of array of array) since this is intended for editor use only)\n */" },
		{ "IncludePath", "AutoDataNode.h" },
		{ "ModuleRelativePath", "Public/AutoDataNode.h" },
		{ "ToolTip", "Object containing one cell of data\n(we don't really care about data size (array of array of array) since this is intended for editor use only)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDataNode_Statics::NewProp_RawValue_MetaData[] = {
		{ "Category", "AutoDataNode" },
		{ "Comment", "// Single cell value\n" },
		{ "ModuleRelativePath", "Public/AutoDataNode.h" },
		{ "ToolTip", "Single cell value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoDataNode_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoDataNode, RawValue), METADATA_PARAMS(Z_Construct_UClass_UAutoDataNode_Statics::NewProp_RawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataNode_Statics::NewProp_RawValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoDataNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDataNode_Statics::NewProp_RawValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoDataNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoDataNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoDataNode_Statics::ClassParams = {
		&UAutoDataNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoDataNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoDataNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDataNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoDataNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoDataNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoDataNode, 2810714884);
	template<> AUTODATAUPDATER_API UClass* StaticClass<UAutoDataNode>()
	{
		return UAutoDataNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoDataNode(Z_Construct_UClass_UAutoDataNode, &UAutoDataNode::StaticClass, TEXT("/Script/AutoDataUpdater"), TEXT("UAutoDataNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoDataNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
