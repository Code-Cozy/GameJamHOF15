// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Public/PackagesImport.h"
#include "ArticyEditor/Public/ArticyTexts.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackagesImport() {}

// Begin Cross Module References
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyModelDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyPackageDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyPackageDefs();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyTexts();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin ScriptStruct FArticyModelDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyModelDef;
class UScriptStruct* FArticyModelDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyModelDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyModelDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyModelDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyModelDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyModelDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyModelDef>()
{
	return FArticyModelDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyModelDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a model definition in Articy with properties for asset reference, category, and JSON strings for properties and templates.\n */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a model definition in Articy with properties for asset reference, category, and JSON strings for properties and templates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The original type of the model as read in from json. */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The original type of the model as read in from json." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The TechnicalName of the model, extracted from the PropertiesJsonString. */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The TechnicalName of the model, extracted from the PropertiesJsonString." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Id of the model, extracted from the PropertiesJsonString. */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id of the model, extracted from the PropertiesJsonString." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameAndId_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TechnicalName(Id) */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TechnicalName(Id)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Id of the parent of this model, extracted from the PropertiesJsonString. */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id of the parent of this model, extracted from the PropertiesJsonString." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetRef_MetaData[] = {
		{ "Category", "Model Meta" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The asset reference, if this is an asset. */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The asset reference, if this is an asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCategory_MetaData[] = {
		{ "Category", "Model Meta" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The asset category, if this is an asset. */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The asset category, if this is an asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesJsonString_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateJsonString_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameAndId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetRef;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertiesJsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TemplateJsonString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyModelDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_NameAndId = { "NameAndId", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, NameAndId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameAndId_MetaData), NewProp_NameAndId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, Parent), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) }; // 4167114503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_AssetRef = { "AssetRef", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, AssetRef), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetRef_MetaData), NewProp_AssetRef_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_AssetCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_AssetCategory = { "AssetCategory", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, AssetCategory), Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCategory_MetaData), NewProp_AssetCategory_MetaData) }; // 1736237018
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_PropertiesJsonString = { "PropertiesJsonString", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, PropertiesJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertiesJsonString_MetaData), NewProp_PropertiesJsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_TemplateJsonString = { "TemplateJsonString", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyModelDef, TemplateJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateJsonString_MetaData), NewProp_TemplateJsonString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyModelDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_NameAndId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_AssetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_AssetCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_AssetCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_PropertiesJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewProp_TemplateJsonString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyModelDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyModelDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyModelDef",
	Z_Construct_UScriptStruct_FArticyModelDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyModelDef_Statics::PropPointers),
	sizeof(FArticyModelDef),
	alignof(FArticyModelDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyModelDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyModelDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyModelDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyModelDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyModelDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyModelDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyModelDef.InnerSingleton;
}
// End ScriptStruct FArticyModelDef

// Begin ScriptStruct FArticyPackageDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyPackageDef;
class UScriptStruct* FArticyPackageDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPackageDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyPackageDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyPackageDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyPackageDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyPackageDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyPackageDef>()
{
	return FArticyPackageDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyPackageDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a package definition in Articy with properties for ID, name, description, and models.\n */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a package definition in Articy with properties for ID, name, description, and models." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDefaultPackage_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Models_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texts_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageObjectsHash_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageTextsHash_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptFragmentHash_MetaData[] = {
		{ "Category", "Package" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_IsDefaultPackage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDefaultPackage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Models_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Models;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texts_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Texts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Texts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageObjectsHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageTextsHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptFragmentHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyPackageDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_IsDefaultPackage_SetBit(void* Obj)
{
	((FArticyPackageDef*)Obj)->IsDefaultPackage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_IsDefaultPackage = { "IsDefaultPackage", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyPackageDef), &Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_IsDefaultPackage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDefaultPackage_MetaData), NewProp_IsDefaultPackage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Models_Inner = { "Models", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyModelDef, METADATA_PARAMS(0, nullptr) }; // 2562903419
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Models = { "Models", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, Models), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Models_MetaData), NewProp_Models_MetaData) }; // 2562903419
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Texts_ValueProp = { "Texts", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyTexts, METADATA_PARAMS(0, nullptr) }; // 1599701377
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Texts_Key_KeyProp = { "Texts_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Texts = { "Texts", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, Texts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texts_MetaData), NewProp_Texts_MetaData) }; // 1599701377
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_PackageObjectsHash = { "PackageObjectsHash", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, PackageObjectsHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageObjectsHash_MetaData), NewProp_PackageObjectsHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_PackageTextsHash = { "PackageTextsHash", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, PackageTextsHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageTextsHash_MetaData), NewProp_PackageTextsHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_ScriptFragmentHash = { "ScriptFragmentHash", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDef, ScriptFragmentHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptFragmentHash_MetaData), NewProp_ScriptFragmentHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyPackageDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_IsDefaultPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Models_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Models,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Texts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Texts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_Texts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_PackageObjectsHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_PackageTextsHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewProp_ScriptFragmentHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPackageDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyPackageDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyPackageDef",
	Z_Construct_UScriptStruct_FArticyPackageDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPackageDef_Statics::PropPointers),
	sizeof(FArticyPackageDef),
	alignof(FArticyPackageDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPackageDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyPackageDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyPackageDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPackageDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyPackageDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyPackageDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyPackageDef.InnerSingleton;
}
// End ScriptStruct FArticyPackageDef

// Begin ScriptStruct FArticyPackageDefs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyPackageDefs;
class UScriptStruct* FArticyPackageDefs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPackageDefs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyPackageDefs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyPackageDefs, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyPackageDefs"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyPackageDefs.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyPackageDefs>()
{
	return FArticyPackageDefs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyPackageDefs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains information about all imported packages and provides methods for importing, validating, and generating package assets.\n */" },
#endif
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains information about all imported packages and provides methods for importing, validating, and generating package assets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Packages_MetaData[] = {
		{ "Category", "Packages" },
		{ "ModuleRelativePath", "Public/PackagesImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Packages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Packages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyPackageDefs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::NewProp_Packages_Inner = { "Packages", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyPackageDef, METADATA_PARAMS(0, nullptr) }; // 1969814317
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::NewProp_Packages = { "Packages", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPackageDefs, Packages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Packages_MetaData), NewProp_Packages_MetaData) }; // 1969814317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::NewProp_Packages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::NewProp_Packages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyPackageDefs",
	Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::PropPointers),
	sizeof(FArticyPackageDefs),
	alignof(FArticyPackageDefs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyPackageDefs()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPackageDefs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyPackageDefs.InnerSingleton, Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyPackageDefs.InnerSingleton;
}
// End ScriptStruct FArticyPackageDefs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_PackagesImport_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyModelDef::StaticStruct, Z_Construct_UScriptStruct_FArticyModelDef_Statics::NewStructOps, TEXT("ArticyModelDef"), &Z_Registration_Info_UScriptStruct_ArticyModelDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyModelDef), 2562903419U) },
		{ FArticyPackageDef::StaticStruct, Z_Construct_UScriptStruct_FArticyPackageDef_Statics::NewStructOps, TEXT("ArticyPackageDef"), &Z_Registration_Info_UScriptStruct_ArticyPackageDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyPackageDef), 1969814317U) },
		{ FArticyPackageDefs::StaticStruct, Z_Construct_UScriptStruct_FArticyPackageDefs_Statics::NewStructOps, TEXT("ArticyPackageDefs"), &Z_Registration_Info_UScriptStruct_ArticyPackageDefs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyPackageDefs), 1560444548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_PackagesImport_h_1714647270(TEXT("/Script/ArticyEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_PackagesImport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_PackagesImport_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
