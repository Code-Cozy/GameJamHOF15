// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyPackage.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyPackage() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPackage();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPackage_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyPackage Function AssetNum
struct Z_Construct_UFunction_UArticyPackage_AssetNum_Statics
{
	struct ArticyPackage_eventAssetNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyPackage_eventAssetNum_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyPackage, nullptr, "AssetNum", nullptr, nullptr, Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::ArticyPackage_eventAssetNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::ArticyPackage_eventAssetNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyPackage_AssetNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyPackage_AssetNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyPackage::execAssetNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AssetNum();
	P_NATIVE_END;
}
// End Class UArticyPackage Function AssetNum

// Begin Class UArticyPackage Function Clear
struct Z_Construct_UFunction_UArticyPackage_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyPackage_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyPackage, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyPackage_Clear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArticyPackage_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyPackage_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyPackage::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// End Class UArticyPackage Function Clear

// Begin Class UArticyPackage Function GetAssetById
struct Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics
{
	struct ArticyPackage_eventGetAssetById_Parms
	{
		FArticyId Id;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyPackage_eventGetAssetById_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyPackage_eventGetAssetById_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyPackage, nullptr, "GetAssetById", nullptr, nullptr, Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::ArticyPackage_eventGetAssetById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::ArticyPackage_eventGetAssetById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyPackage_GetAssetById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyPackage_GetAssetById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyPackage::execGetAssetById)
{
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetAssetById(Z_Param_Out_Id);
	P_NATIVE_END;
}
// End Class UArticyPackage Function GetAssetById

// Begin Class UArticyPackage Function GetAssetByTechnicalName
struct Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics
{
	struct ArticyPackage_eventGetAssetByTechnicalName_Parms
	{
		FName TechnicalName;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyPackage_eventGetAssetByTechnicalName_Parms, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyPackage_eventGetAssetByTechnicalName_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyPackage, nullptr, "GetAssetByTechnicalName", nullptr, nullptr, Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::ArticyPackage_eventGetAssetByTechnicalName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::ArticyPackage_eventGetAssetByTechnicalName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyPackage::execGetAssetByTechnicalName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TechnicalName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetAssetByTechnicalName(Z_Param_Out_TechnicalName);
	P_NATIVE_END;
}
// End Class UArticyPackage Function GetAssetByTechnicalName

// Begin Class UArticyPackage Function GetAssets
struct Z_Construct_UFunction_UArticyPackage_GetAssets_Statics
{
	struct ArticyPackage_eventGetAssets_Parms
	{
		TArray<UArticyObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyPackage_eventGetAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyPackage, nullptr, "GetAssets", nullptr, nullptr, Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::ArticyPackage_eventGetAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::ArticyPackage_eventGetAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyPackage_GetAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyPackage_GetAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyPackage::execGetAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyObject*>*)Z_Param__Result=P_THIS->GetAssets();
	P_NATIVE_END;
}
// End Class UArticyPackage Function GetAssets

// Begin Class UArticyPackage Function GetAssetsDict
struct Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics
{
	struct ArticyPackage_eventGetAssetsDict_Parms
	{
		TMap<FName,TSoftObjectPtr<UArticyObject> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyPackage_eventGetAssetsDict_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyPackage, nullptr, "GetAssetsDict", nullptr, nullptr, Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::ArticyPackage_eventGetAssetsDict_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::ArticyPackage_eventGetAssetsDict_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyPackage_GetAssetsDict()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyPackage_GetAssetsDict_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyPackage::execGetAssetsDict)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,TSoftObjectPtr<UArticyObject> >*)Z_Param__Result=P_THIS->GetAssetsDict();
	P_NATIVE_END;
}
// End Class UArticyPackage Function GetAssetsDict

// Begin Class UArticyPackage
void UArticyPackage::StaticRegisterNativesUArticyPackage()
{
	UClass* Class = UArticyPackage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssetNum", &UArticyPackage::execAssetNum },
		{ "Clear", &UArticyPackage::execClear },
		{ "GetAssetById", &UArticyPackage::execGetAssetById },
		{ "GetAssetByTechnicalName", &UArticyPackage::execGetAssetByTechnicalName },
		{ "GetAssets", &UArticyPackage::execGetAssets },
		{ "GetAssetsDict", &UArticyPackage::execGetAssetsDict },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyPackage);
UClass* Z_Construct_UClass_UArticyPackage_NoRegister()
{
	return UArticyPackage::StaticClass();
}
struct Z_Construct_UClass_UArticyPackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyPackage.h" },
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetsByTechnicalName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetsById_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultPackage_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/ArticyPackage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetsByTechnicalName_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetsByTechnicalName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetsByTechnicalName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetsById_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetsById;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_bIsDefaultPackage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultPackage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyPackage_AssetNum, "AssetNum" }, // 618676525
		{ &Z_Construct_UFunction_UArticyPackage_Clear, "Clear" }, // 44373684
		{ &Z_Construct_UFunction_UArticyPackage_GetAssetById, "GetAssetById" }, // 2220625362
		{ &Z_Construct_UFunction_UArticyPackage_GetAssetByTechnicalName, "GetAssetByTechnicalName" }, // 1992533971
		{ &Z_Construct_UFunction_UArticyPackage_GetAssets, "GetAssets" }, // 1601271680
		{ &Z_Construct_UFunction_UArticyPackage_GetAssetsDict, "GetAssetsDict" }, // 2067332434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyPackage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPackage, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assets_MetaData), NewProp_Assets_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsByTechnicalName_ValueProp = { "AssetsByTechnicalName", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsByTechnicalName_Key_KeyProp = { "AssetsByTechnicalName_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsByTechnicalName = { "AssetsByTechnicalName", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPackage, AssetsByTechnicalName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetsByTechnicalName_MetaData), NewProp_AssetsByTechnicalName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsById_ValueProp = { "AssetsById", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsById_Key_KeyProp = { "AssetsById_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsById = { "AssetsById", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPackage, AssetsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetsById_MetaData), NewProp_AssetsById_MetaData) }; // 4167114503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPackage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPackage, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UClass_UArticyPackage_Statics::NewProp_bIsDefaultPackage_SetBit(void* Obj)
{
	((UArticyPackage*)Obj)->bIsDefaultPackage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPackage_Statics::NewProp_bIsDefaultPackage = { "bIsDefaultPackage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPackage), &Z_Construct_UClass_UArticyPackage_Statics::NewProp_bIsDefaultPackage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefaultPackage_MetaData), NewProp_bIsDefaultPackage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsByTechnicalName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsByTechnicalName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsByTechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_AssetsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPackage_Statics::NewProp_bIsDefaultPackage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPackage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyPackage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPackage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyPackage_Statics::ClassParams = {
	&UArticyPackage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyPackage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPackage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPackage_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyPackage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyPackage()
{
	if (!Z_Registration_Info_UClass_UArticyPackage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyPackage.OuterSingleton, Z_Construct_UClass_UArticyPackage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyPackage.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyPackage>()
{
	return UArticyPackage::StaticClass();
}
UArticyPackage::UArticyPackage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyPackage);
UArticyPackage::~UArticyPackage() {}
// End Class UArticyPackage

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyPackage, UArticyPackage::StaticClass, TEXT("UArticyPackage"), &Z_Registration_Info_UClass_UArticyPackage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyPackage), 1485141211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_1747756896(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
