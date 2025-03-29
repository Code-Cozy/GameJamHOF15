// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyFunctionLibrary.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
#include "ArticyRuntime/Public/ArticyFlowPlayer.h"
#include "ArticyRuntime/Public/ArticyGlobalVariables.h"
#include "ArticyRuntime/Public/ArticyRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyFunctionLibrary() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFunctionLibrary();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFunctionLibrary_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyBranch();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyGvName();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyRef();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyFunctionLibrary Function ArticyGvName_MakeFromFullName
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics
{
	struct ArticyFunctionLibrary_eventArticyGvName_MakeFromFullName_Parms
	{
		FName FullName;
		FArticyGvName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates an ArticyGvName from a full name.\n     * @param FullName The full name to use.\n     * @return The corresponding ArticyGvName.\n     */" },
#endif
		{ "DisplayName", "Make ArticyGvName from full name" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an ArticyGvName from a full name.\n@param FullName The full name to use.\n@return The corresponding ArticyGvName." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FullName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyGvName_MakeFromFullName_Parms, FullName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullName_MetaData), NewProp_FullName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyGvName_MakeFromFullName_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::NewProp_FullName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyGvName_MakeFromFullName", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::ArticyFunctionLibrary_eventArticyGvName_MakeFromFullName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::ArticyFunctionLibrary_eventArticyGvName_MakeFromFullName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyGvName_MakeFromFullName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FullName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyGvName*)Z_Param__Result=UArticyFunctionLibrary::ArticyGvName_MakeFromFullName(Z_Param_Out_FullName);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyGvName_MakeFromFullName

// Begin Class UArticyFunctionLibrary Function ArticyGvName_MakeFromVariableAndNamespace
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics
{
	struct ArticyFunctionLibrary_eventArticyGvName_MakeFromVariableAndNamespace_Parms
	{
		FName Variable;
		FName Namespace;
		FArticyGvName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates an ArticyGvName from a variable and namespace.\n     * @param Variable The variable name.\n     * @param Namespace The namespace name.\n     * @return The corresponding ArticyGvName.\n     */" },
#endif
		{ "DisplayName", "Make ArticyGvName from namespace & variable" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an ArticyGvName from a variable and namespace.\n@param Variable The variable name.\n@param Namespace The namespace name.\n@return The corresponding ArticyGvName." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Variable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyGvName_MakeFromVariableAndNamespace_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyGvName_MakeFromVariableAndNamespace_Parms, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyGvName_MakeFromVariableAndNamespace_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyGvName_MakeFromVariableAndNamespace", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::ArticyFunctionLibrary_eventArticyGvName_MakeFromVariableAndNamespace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::ArticyFunctionLibrary_eventArticyGvName_MakeFromVariableAndNamespace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyGvName_MakeFromVariableAndNamespace)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Variable);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Namespace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyGvName*)Z_Param__Result=UArticyFunctionLibrary::ArticyGvName_MakeFromVariableAndNamespace(Z_Param_Out_Variable,Z_Param_Out_Namespace);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyGvName_MakeFromVariableAndNamespace

// Begin Class UArticyFunctionLibrary Function ArticyId_Equal
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics
{
	struct ArticyFunctionLibrary_eventArticyId_Equal_Parms
	{
		FArticyId A;
		FArticyId B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Checks if two ArticyIds are equal.\n     * @param A The first ArticyId.\n     * @param B The second ArticyId.\n     * @return True if the IDs are equal.\n     */" },
#endif
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (ArticyId)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if two ArticyIds are equal.\n@param A The first ArticyId.\n@param B The second ArticyId.\n@return True if the IDs are equal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_Equal_Parms, A), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_Equal_Parms, B), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 4167114503
void Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyFunctionLibrary_eventArticyId_Equal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFunctionLibrary_eventArticyId_Equal_Parms), &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyId_Equal", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::ArticyFunctionLibrary_eventArticyId_Equal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::ArticyFunctionLibrary_eventArticyId_Equal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyId_Equal)
{
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_A);
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArticyFunctionLibrary::ArticyId_Equal(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyId_Equal

// Begin Class UArticyFunctionLibrary Function ArticyId_FromString
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics
{
	struct ArticyFunctionLibrary_eventArticyId_FromString_Parms
	{
		FString hex;
		FArticyId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates an ArticyId from a hex string.\n     * @param hex The hex string to convert.\n     * @return The ArticyId corresponding to the hex string.\n     */" },
#endif
		{ "DisplayName", "To Articy Id" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an ArticyId from a hex string.\n@param hex The hex string to convert.\n@return The ArticyId corresponding to the hex string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_hex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::NewProp_hex = { "hex", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_FromString_Parms, hex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hex_MetaData), NewProp_hex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_FromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::NewProp_hex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyId_FromString", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::ArticyFunctionLibrary_eventArticyId_FromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::ArticyFunctionLibrary_eventArticyId_FromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyId_FromString)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_hex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyId*)Z_Param__Result=UArticyFunctionLibrary::ArticyId_FromString(Z_Param_Out_hex);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyId_FromString

// Begin Class UArticyFunctionLibrary Function ArticyId_GetObject
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics
{
	struct ArticyFunctionLibrary_eventArticyId_GetObject_Parms
	{
		FArticyId Id;
		TSubclassOf<UArticyObject> CastTo;
		const UObject* WorldContext;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Converts an ArticyId to an object.\n     * @param Id The ArticyId to convert.\n     * @param CastTo The subclass type to cast the object to.\n     * @param WorldContext The context within which the object is retrieved.\n     * @return The UArticyObject referenced by the ArticyId.\n     */" },
#endif
		{ "DefaultToSelf", "WorldContext" },
		{ "DeterminesOutputType", "CastTo" },
		{ "DisplayName", "Get Object" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an ArticyId to an object.\n@param Id The ArticyId to convert.\n@param CastTo The subclass type to cast the object to.\n@param WorldContext The context within which the object is retrieved.\n@return The UArticyObject referenced by the ArticyId." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_GetObject_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_GetObject_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_GetObject_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_GetObject_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyId_GetObject", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::ArticyFunctionLibrary_eventArticyId_GetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::ArticyFunctionLibrary_eventArticyId_GetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyId_GetObject)
{
	P_GET_STRUCT(FArticyId,Z_Param_Id);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=UArticyFunctionLibrary::ArticyId_GetObject(Z_Param_Id,Z_Param_CastTo,Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyId_GetObject

// Begin Class UArticyFunctionLibrary Function ArticyId_IsValid
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics
{
	struct ArticyFunctionLibrary_eventArticyId_IsValid_Parms
	{
		FArticyId Id;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Checks if an ArticyId is valid.\n     * @param Id The ArticyId to check.\n     * @return True if the ID is valid.\n     */" },
#endif
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if an ArticyId is valid.\n@param Id The ArticyId to check.\n@return True if the ID is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_IsValid_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
void Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyFunctionLibrary_eventArticyId_IsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFunctionLibrary_eventArticyId_IsValid_Parms), &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyId_IsValid", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::ArticyFunctionLibrary_eventArticyId_IsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::ArticyFunctionLibrary_eventArticyId_IsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyId_IsValid)
{
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArticyFunctionLibrary::ArticyId_IsValid(Z_Param_Out_Id);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyId_IsValid

// Begin Class UArticyFunctionLibrary Function ArticyId_NotEqual
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics
{
	struct ArticyFunctionLibrary_eventArticyId_NotEqual_Parms
	{
		FArticyId A;
		FArticyId B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Checks if two ArticyIds are not equal.\n     * @param A The first ArticyId.\n     * @param B The second ArticyId.\n     * @return True if the IDs are not equal.\n     */" },
#endif
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (ArticyId)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if two ArticyIds are not equal.\n@param A The first ArticyId.\n@param B The second ArticyId.\n@return True if the IDs are not equal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_NotEqual_Parms, A), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_NotEqual_Parms, B), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 4167114503
void Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyFunctionLibrary_eventArticyId_NotEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFunctionLibrary_eventArticyId_NotEqual_Parms), &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyId_NotEqual", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::ArticyFunctionLibrary_eventArticyId_NotEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::ArticyFunctionLibrary_eventArticyId_NotEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyId_NotEqual)
{
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_A);
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArticyFunctionLibrary::ArticyId_NotEqual(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyId_NotEqual

// Begin Class UArticyFunctionLibrary Function ArticyId_ToString
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics
{
	struct ArticyFunctionLibrary_eventArticyId_ToString_Parms
	{
		FArticyId Id;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the HEX string from an ID.\n     * @param Id The ArticyId to convert.\n     * @return The hex string representation of the ID.\n     */" },
#endif
		{ "DisplayName", "To Hex String" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the HEX string from an ID.\n@param Id The ArticyId to convert.\n@return The hex string representation of the ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_ToString_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyId_ToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyId_ToString", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::ArticyFunctionLibrary_eventArticyId_ToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::ArticyFunctionLibrary_eventArticyId_ToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyId_ToString)
{
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UArticyFunctionLibrary::ArticyId_ToString(Z_Param_Out_Id);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyId_ToString

// Begin Class UArticyFunctionLibrary Function ArticyRef_GetObject
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics
{
	struct ArticyFunctionLibrary_eventArticyRef_GetObject_Parms
	{
		FArticyRef Ref;
		TSubclassOf<UArticyObject> CastTo;
		const UObject* WorldContext;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyRef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Converts an ArticyRef to an object.\n     * @param Ref The ArticyRef to convert.\n     * @param CastTo The subclass type to cast the object to.\n     * @param WorldContext The context within which the object is retrieved.\n     * @return The UArticyObject referenced by the ArticyRef.\n     */" },
#endif
		{ "DefaultToSelf", "WorldContext" },
		{ "DeterminesOutputType", "CastTo" },
		{ "DisplayName", "Get Object" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an ArticyRef to an object.\n@param Ref The ArticyRef to convert.\n@param CastTo The subclass type to cast the object to.\n@param WorldContext The context within which the object is retrieved.\n@return The UArticyObject referenced by the ArticyRef." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_GetObject_Parms, Ref), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(0, nullptr) }; // 321074496
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_GetObject_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_GetObject_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_GetObject_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyRef_GetObject", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::ArticyFunctionLibrary_eventArticyRef_GetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::ArticyFunctionLibrary_eventArticyRef_GetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyRef_GetObject)
{
	P_GET_STRUCT(FArticyRef,Z_Param_Ref);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=UArticyFunctionLibrary::ArticyRef_GetObject(Z_Param_Ref,Z_Param_CastTo,Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyRef_GetObject

// Begin Class UArticyFunctionLibrary Function ArticyRef_GetObjectId
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics
{
	struct ArticyFunctionLibrary_eventArticyRef_GetObjectId_Parms
	{
		FArticyRef Ref;
		FArticyId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutoCast", "" },
		{ "Category", "ArticyRef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Converts an ArticyRef to an FArticyId.\n     * @param Ref The ArticyRef to convert.\n     * @return The FArticyId of the referenced object.\n     */" },
#endif
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "Get Object Id" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an ArticyRef to an FArticyId.\n@param Ref The ArticyRef to convert.\n@return The FArticyId of the referenced object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_GetObjectId_Parms, Ref), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(0, nullptr) }; // 321074496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_GetObjectId_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyRef_GetObjectId", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::ArticyFunctionLibrary_eventArticyRef_GetObjectId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::ArticyFunctionLibrary_eventArticyRef_GetObjectId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyRef_GetObjectId)
{
	P_GET_STRUCT(FArticyRef,Z_Param_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyId*)Z_Param__Result=UArticyFunctionLibrary::ArticyRef_GetObjectId(Z_Param_Ref);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyRef_GetObjectId

// Begin Class UArticyFunctionLibrary Function ArticyRef_SetObject
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics
{
	struct ArticyFunctionLibrary_eventArticyRef_SetObject_Parms
	{
		FArticyRef Ref;
		UArticyObject* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyRef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the referenced object of an ArticyRef.\n     * @param Ref The ArticyRef to modify.\n     * @param Object The UArticyObject to set as the reference.\n     */" },
#endif
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "Set Object" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the referenced object of an ArticyRef.\n@param Ref The ArticyRef to modify.\n@param Object The UArticyObject to set as the reference." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_SetObject_Parms, Ref), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(0, nullptr) }; // 321074496
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_SetObject_Parms, Object), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyRef_SetObject", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::ArticyFunctionLibrary_eventArticyRef_SetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::ArticyFunctionLibrary_eventArticyRef_SetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyRef_SetObject)
{
	P_GET_STRUCT_REF(FArticyRef,Z_Param_Out_Ref);
	P_GET_OBJECT_REF(UArticyObject,Z_Param_Out_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArticyFunctionLibrary::ArticyRef_SetObject(Z_Param_Out_Ref,Z_Param_Out_Object);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyRef_SetObject

// Begin Class UArticyFunctionLibrary Function ArticyRef_SetObjectId
struct Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics
{
	struct ArticyFunctionLibrary_eventArticyRef_SetObjectId_Parms
	{
		FArticyRef Ref;
		FArticyId Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutoCast", "" },
		{ "Category", "ArticyRef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the referenced object ID of an ArticyRef.\n     * @param Ref The ArticyRef to modify.\n     * @param Id The FArticyId to set.\n     */" },
#endif
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "Set Object Id" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the referenced object ID of an ArticyRef.\n@param Ref The ArticyRef to modify.\n@param Id The FArticyId to set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_SetObjectId_Parms, Ref), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(0, nullptr) }; // 321074496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventArticyRef_SetObjectId_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "ArticyRef_SetObjectId", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::ArticyFunctionLibrary_eventArticyRef_SetObjectId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::ArticyFunctionLibrary_eventArticyRef_SetObjectId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execArticyRef_SetObjectId)
{
	P_GET_STRUCT_REF(FArticyRef,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArticyFunctionLibrary::ArticyRef_SetObjectId(Z_Param_Out_Ref,Z_Param_Out_Id);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function ArticyRef_SetObjectId

// Begin Class UArticyFunctionLibrary Function GetBranchTarget
struct Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics
{
	struct ArticyFunctionLibrary_eventGetBranchTarget_Parms
	{
		FArticyBranch Branch;
		TScriptInterface<IArticyFlowObject> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyBranch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the last object in a branch.\n     * @param Branch The branch to analyze.\n     * @return The target of the branch.\n     */" },
#endif
		{ "DisplayName", "Get Target" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the last object in a branch.\n@param Branch The branch to analyze.\n@return The target of the branch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventGetBranchTarget_Parms, Branch), Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) }; // 4044271609
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventGetBranchTarget_Parms, ReturnValue), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::NewProp_Branch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "GetBranchTarget", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::ArticyFunctionLibrary_eventGetBranchTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::ArticyFunctionLibrary_eventGetBranchTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execGetBranchTarget)
{
	P_GET_STRUCT_REF(FArticyBranch,Z_Param_Out_Branch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IArticyFlowObject>*)Z_Param__Result=UArticyFunctionLibrary::GetBranchTarget(Z_Param_Out_Branch);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function GetBranchTarget

// Begin Class UArticyFunctionLibrary Function GetNodeSeenCounter
struct Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics
{
	struct ArticyFunctionLibrary_eventGetNodeSeenCounter_Parms
	{
		TScriptInterface<IArticyFlowObject> Node;
		const UObject* WorldContext;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the seen counter for a specific node.\n     * @param Node The node to query.\n     * @param WorldContext The context within which the counter is retrieved.\n     * @return The seen counter value.\n     */" },
#endif
		{ "DisplayName", "Get Seen Counter" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the seen counter for a specific node.\n@param Node The node to query.\n@param WorldContext The context within which the counter is retrieved.\n@return The seen counter value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventGetNodeSeenCounter_Parms, Node), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventGetNodeSeenCounter_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventGetNodeSeenCounter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "GetNodeSeenCounter", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::ArticyFunctionLibrary_eventGetNodeSeenCounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::ArticyFunctionLibrary_eventGetNodeSeenCounter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execGetNodeSeenCounter)
{
	P_GET_TINTERFACE(IArticyFlowObject,Z_Param_Node);
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UArticyFunctionLibrary::GetNodeSeenCounter(Z_Param_Node,Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function GetNodeSeenCounter

// Begin Class UArticyFunctionLibrary Function MatchesEffective
struct Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics
{
	struct ArticyFunctionLibrary_eventMatchesEffective_Parms
	{
		FArticyRef A;
		FArticyRef B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArtiycRef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Compares two ArticyRefs for effective equality.\n     * @param A The first ArticyRef.\n     * @param B The second ArticyRef.\n     * @return True if they are effectively equal.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compares two ArticyRefs for effective equality.\n@param A The first ArticyRef.\n@param B The second ArticyRef.\n@return True if they are effectively equal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventMatchesEffective_Parms, A), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 321074496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventMatchesEffective_Parms, B), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 321074496
void Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyFunctionLibrary_eventMatchesEffective_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFunctionLibrary_eventMatchesEffective_Parms), &Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "MatchesEffective", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::ArticyFunctionLibrary_eventMatchesEffective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::ArticyFunctionLibrary_eventMatchesEffective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execMatchesEffective)
{
	P_GET_STRUCT_REF(FArticyRef,Z_Param_Out_A);
	P_GET_STRUCT_REF(FArticyRef,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArticyFunctionLibrary::MatchesEffective(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function MatchesEffective

// Begin Class UArticyFunctionLibrary Function MatchesRaw
struct Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics
{
	struct ArticyFunctionLibrary_eventMatchesRaw_Parms
	{
		FArticyRef A;
		FArticyRef B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArtiycRef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Compares two ArticyRefs for raw equality.\n     * @param A The first ArticyRef.\n     * @param B The second ArticyRef.\n     * @return True if they are raw-equal.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compares two ArticyRefs for raw equality.\n@param A The first ArticyRef.\n@param B The second ArticyRef.\n@return True if they are raw-equal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventMatchesRaw_Parms, A), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 321074496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventMatchesRaw_Parms, B), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 321074496
void Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyFunctionLibrary_eventMatchesRaw_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFunctionLibrary_eventMatchesRaw_Parms), &Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "MatchesRaw", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::ArticyFunctionLibrary_eventMatchesRaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::ArticyFunctionLibrary_eventMatchesRaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execMatchesRaw)
{
	P_GET_STRUCT_REF(FArticyRef,Z_Param_Out_A);
	P_GET_STRUCT_REF(FArticyRef,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArticyFunctionLibrary::MatchesRaw(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function MatchesRaw

// Begin Class UArticyFunctionLibrary Function SetNodeSeenCounter
struct Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics
{
	struct ArticyFunctionLibrary_eventSetNodeSeenCounter_Parms
	{
		TScriptInterface<IArticyFlowObject> Node;
		int32 Value;
		const UObject* WorldContext;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the seen counter for a specific node.\n     * @param Node The node to modify.\n     * @param Value The new seen counter value.\n     * @param WorldContext The context within which the counter is set.\n     * @return The updated seen counter value.\n     */" },
#endif
		{ "DisplayName", "Set Seen Counter" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the seen counter for a specific node.\n@param Node The node to modify.\n@param Value The new seen counter value.\n@param WorldContext The context within which the counter is set.\n@return The updated seen counter value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Node;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventSetNodeSeenCounter_Parms, Node), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventSetNodeSeenCounter_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventSetNodeSeenCounter_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFunctionLibrary_eventSetNodeSeenCounter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFunctionLibrary, nullptr, "SetNodeSeenCounter", nullptr, nullptr, Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::ArticyFunctionLibrary_eventSetNodeSeenCounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::ArticyFunctionLibrary_eventSetNodeSeenCounter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFunctionLibrary::execSetNodeSeenCounter)
{
	P_GET_TINTERFACE(IArticyFlowObject,Z_Param_Node);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UArticyFunctionLibrary::SetNodeSeenCounter(Z_Param_Node,Z_Param_Value,Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class UArticyFunctionLibrary Function SetNodeSeenCounter

// Begin Class UArticyFunctionLibrary
void UArticyFunctionLibrary::StaticRegisterNativesUArticyFunctionLibrary()
{
	UClass* Class = UArticyFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ArticyGvName_MakeFromFullName", &UArticyFunctionLibrary::execArticyGvName_MakeFromFullName },
		{ "ArticyGvName_MakeFromVariableAndNamespace", &UArticyFunctionLibrary::execArticyGvName_MakeFromVariableAndNamespace },
		{ "ArticyId_Equal", &UArticyFunctionLibrary::execArticyId_Equal },
		{ "ArticyId_FromString", &UArticyFunctionLibrary::execArticyId_FromString },
		{ "ArticyId_GetObject", &UArticyFunctionLibrary::execArticyId_GetObject },
		{ "ArticyId_IsValid", &UArticyFunctionLibrary::execArticyId_IsValid },
		{ "ArticyId_NotEqual", &UArticyFunctionLibrary::execArticyId_NotEqual },
		{ "ArticyId_ToString", &UArticyFunctionLibrary::execArticyId_ToString },
		{ "ArticyRef_GetObject", &UArticyFunctionLibrary::execArticyRef_GetObject },
		{ "ArticyRef_GetObjectId", &UArticyFunctionLibrary::execArticyRef_GetObjectId },
		{ "ArticyRef_SetObject", &UArticyFunctionLibrary::execArticyRef_SetObject },
		{ "ArticyRef_SetObjectId", &UArticyFunctionLibrary::execArticyRef_SetObjectId },
		{ "GetBranchTarget", &UArticyFunctionLibrary::execGetBranchTarget },
		{ "GetNodeSeenCounter", &UArticyFunctionLibrary::execGetNodeSeenCounter },
		{ "MatchesEffective", &UArticyFunctionLibrary::execMatchesEffective },
		{ "MatchesRaw", &UArticyFunctionLibrary::execMatchesRaw },
		{ "SetNodeSeenCounter", &UArticyFunctionLibrary::execSetNodeSeenCounter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyFunctionLibrary);
UClass* Z_Construct_UClass_UArticyFunctionLibrary_NoRegister()
{
	return UArticyFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UArticyFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Function library for handling Articy objects and IDs in Unreal Engine.\n */" },
#endif
		{ "IncludePath", "ArticyFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ArticyFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function library for handling Articy objects and IDs in Unreal Engine." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromFullName, "ArticyGvName_MakeFromFullName" }, // 2347827489
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyGvName_MakeFromVariableAndNamespace, "ArticyGvName_MakeFromVariableAndNamespace" }, // 190979272
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_Equal, "ArticyId_Equal" }, // 1087364096
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_FromString, "ArticyId_FromString" }, // 497783590
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_GetObject, "ArticyId_GetObject" }, // 1190837646
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_IsValid, "ArticyId_IsValid" }, // 1629660744
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_NotEqual, "ArticyId_NotEqual" }, // 2893022127
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyId_ToString, "ArticyId_ToString" }, // 766175579
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObject, "ArticyRef_GetObject" }, // 507718422
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_GetObjectId, "ArticyRef_GetObjectId" }, // 1899931282
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObject, "ArticyRef_SetObject" }, // 51097013
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_ArticyRef_SetObjectId, "ArticyRef_SetObjectId" }, // 3375270309
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_GetBranchTarget, "GetBranchTarget" }, // 3193542516
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_GetNodeSeenCounter, "GetNodeSeenCounter" }, // 2907679507
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_MatchesEffective, "MatchesEffective" }, // 4083669068
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_MatchesRaw, "MatchesRaw" }, // 237654697
		{ &Z_Construct_UFunction_UArticyFunctionLibrary_SetNodeSeenCounter, "SetNodeSeenCounter" }, // 2110836394
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyFunctionLibrary_Statics::ClassParams = {
	&UArticyFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UArticyFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyFunctionLibrary.OuterSingleton, Z_Construct_UClass_UArticyFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyFunctionLibrary.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyFunctionLibrary>()
{
	return UArticyFunctionLibrary::StaticClass();
}
UArticyFunctionLibrary::UArticyFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyFunctionLibrary);
UArticyFunctionLibrary::~UArticyFunctionLibrary() {}
// End Class UArticyFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyFunctionLibrary, UArticyFunctionLibrary::StaticClass, TEXT("UArticyFunctionLibrary"), &Z_Registration_Info_UClass_UArticyFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyFunctionLibrary), 1213106695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_3828646513(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
