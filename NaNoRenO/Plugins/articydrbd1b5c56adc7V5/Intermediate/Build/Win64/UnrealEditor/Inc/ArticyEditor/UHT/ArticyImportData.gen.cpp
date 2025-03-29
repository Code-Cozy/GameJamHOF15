// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Public/ArticyImportData.h"
#include "ArticyEditor/Public/ObjectDefinitionsImport.h"
#include "ArticyEditor/Public/PackagesImport.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyImportData() {}

// Begin Cross Module References
ARTICYEDITOR_API UClass* Z_Construct_UClass_UADIHierarchyObject();
ARTICYEDITOR_API UClass* Z_Construct_UClass_UADIHierarchyObject_NoRegister();
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyImportData();
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyImportData_NoRegister();
ARTICYEDITOR_API UEnum* Z_Construct_UEnum_ArticyEditor_EArticyType();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FADIHierarchy();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAdiSettings();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAIDScriptMethod();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAIDScriptMethodParameter();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAIDUserMethods();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyExpressoFragment();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyGVar();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyGVInfo();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyGVNamespace();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyIdArray();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyImportDataStruct();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyLanguageDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyLanguages();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyObjectDefinitions();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyPackageDefs();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyProjectDef();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPackage_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin ScriptStruct FAdiSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdiSettings;
class UScriptStruct* FAdiSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdiSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdiSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdiSettings, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("AdiSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AdiSettings.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FAdiSettings>()
{
	return FAdiSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAdiSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Settings object in the .json file.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Settings object in the .json file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_set_TextFormatter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_set_UseScriptSupport_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this is false, no ExpressoScripts class is generated, and script fragments are not evaluated/executed. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is false, no ExpressoScripts class is generated, and script fragments are not evaluated/executed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_set_IncludedNodes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleSetId_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportVersion_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariablesHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDefinitionsHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDefinitionsTextHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptFragmentsHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptMethodsHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_set_Localization_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//unused in the UE plugin\n" },
#endif
		{ "DisplayName", "set_Localization - unused in UE" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "unused in the UE plugin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_set_TextFormatter;
	static void NewProp_set_UseScriptSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_set_UseScriptSupport;
	static const UECodeGen_Private::FStrPropertyParams NewProp_set_IncludedNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuleSetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExportVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalVariablesHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectDefinitionsHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectDefinitionsTextHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptFragmentsHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HierarchyHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptMethodsHash;
	static void NewProp_set_Localization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_set_Localization;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdiSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_TextFormatter = { "set_TextFormatter", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, set_TextFormatter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_set_TextFormatter_MetaData), NewProp_set_TextFormatter_MetaData) };
void Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_UseScriptSupport_SetBit(void* Obj)
{
	((FAdiSettings*)Obj)->set_UseScriptSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_UseScriptSupport = { "set_UseScriptSupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAdiSettings), &Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_UseScriptSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_set_UseScriptSupport_MetaData), NewProp_set_UseScriptSupport_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_IncludedNodes = { "set_IncludedNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, set_IncludedNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_set_IncludedNodes_MetaData), NewProp_set_IncludedNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_RuleSetId = { "RuleSetId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, RuleSetId), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleSetId_MetaData), NewProp_RuleSetId_MetaData) }; // 4167114503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ExportVersion = { "ExportVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, ExportVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportVersion_MetaData), NewProp_ExportVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_GlobalVariablesHash = { "GlobalVariablesHash", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, GlobalVariablesHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariablesHash_MetaData), NewProp_GlobalVariablesHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ObjectDefinitionsHash = { "ObjectDefinitionsHash", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, ObjectDefinitionsHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDefinitionsHash_MetaData), NewProp_ObjectDefinitionsHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ObjectDefinitionsTextHash = { "ObjectDefinitionsTextHash", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, ObjectDefinitionsTextHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDefinitionsTextHash_MetaData), NewProp_ObjectDefinitionsTextHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ScriptFragmentsHash = { "ScriptFragmentsHash", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, ScriptFragmentsHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptFragmentsHash_MetaData), NewProp_ScriptFragmentsHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_HierarchyHash = { "HierarchyHash", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, HierarchyHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchyHash_MetaData), NewProp_HierarchyHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ScriptMethodsHash = { "ScriptMethodsHash", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdiSettings, ScriptMethodsHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptMethodsHash_MetaData), NewProp_ScriptMethodsHash_MetaData) };
void Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_Localization_SetBit(void* Obj)
{
	((FAdiSettings*)Obj)->set_Localization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_Localization = { "set_Localization", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAdiSettings), &Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_Localization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_set_Localization_MetaData), NewProp_set_Localization_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdiSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_TextFormatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_UseScriptSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_IncludedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_RuleSetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ExportVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_GlobalVariablesHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ObjectDefinitionsHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ObjectDefinitionsTextHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ScriptFragmentsHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_HierarchyHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_ScriptMethodsHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdiSettings_Statics::NewProp_set_Localization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdiSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdiSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"AdiSettings",
	Z_Construct_UScriptStruct_FAdiSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdiSettings_Statics::PropPointers),
	sizeof(FAdiSettings),
	alignof(FAdiSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdiSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAdiSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAdiSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AdiSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdiSettings.InnerSingleton, Z_Construct_UScriptStruct_FAdiSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AdiSettings.InnerSingleton;
}
// End ScriptStruct FAdiSettings

// Begin ScriptStruct FArticyProjectDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyProjectDef;
class UScriptStruct* FArticyProjectDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyProjectDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyProjectDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyProjectDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyProjectDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyProjectDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyProjectDef>()
{
	return FArticyProjectDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyProjectDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Project object in the .json file.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Project object in the .json file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailName_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DetailName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyProjectDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyProjectDef, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_DetailName = { "DetailName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyProjectDef, DetailName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailName_MetaData), NewProp_DetailName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyProjectDef, Guid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyProjectDef, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyProjectDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_DetailName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewProp_TechnicalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyProjectDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyProjectDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyProjectDef",
	Z_Construct_UScriptStruct_FArticyProjectDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyProjectDef_Statics::PropPointers),
	sizeof(FArticyProjectDef),
	alignof(FArticyProjectDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyProjectDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyProjectDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyProjectDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyProjectDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyProjectDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyProjectDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyProjectDef.InnerSingleton;
}
// End ScriptStruct FArticyProjectDef

// Begin Enum EArticyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArticyType;
static UEnum* EArticyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArticyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArticyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArticyEditor_EArticyType, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("EArticyType"));
	}
	return Z_Registration_Info_UEnum_EArticyType.OuterSingleton;
}
template<> ARTICYEDITOR_API UEnum* StaticEnum<EArticyType>()
{
	return EArticyType_StaticEnum();
}
struct Z_Construct_UEnum_ArticyEditor_EArticyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ADT_Boolean.Name", "EArticyType::ADT_Boolean" },
		{ "ADT_Integer.Name", "EArticyType::ADT_Integer" },
		{ "ADT_MultiLanguageString.Name", "EArticyType::ADT_MultiLanguageString" },
		{ "ADT_String.Name", "EArticyType::ADT_String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumeration for Articy data types.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration for Articy data types." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArticyType::ADT_Boolean", (int64)EArticyType::ADT_Boolean },
		{ "EArticyType::ADT_Integer", (int64)EArticyType::ADT_Integer },
		{ "EArticyType::ADT_String", (int64)EArticyType::ADT_String },
		{ "EArticyType::ADT_MultiLanguageString", (int64)EArticyType::ADT_MultiLanguageString },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArticyEditor_EArticyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	"EArticyType",
	"EArticyType",
	Z_Construct_UEnum_ArticyEditor_EArticyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyEditor_EArticyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyEditor_EArticyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArticyEditor_EArticyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArticyEditor_EArticyType()
{
	if (!Z_Registration_Info_UEnum_EArticyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArticyType.InnerSingleton, Z_Construct_UEnum_ArticyEditor_EArticyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArticyType.InnerSingleton;
}
// End Enum EArticyType

// Begin ScriptStruct FArticyGVar
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyGVar;
class UScriptStruct* FArticyGVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyGVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyGVar, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyGVar"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyGVar.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyGVar>()
{
	return FArticyGVar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyGVar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single global variable definition.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single global variable definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyGVar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVar, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVar, Type), Z_Construct_UEnum_ArticyEditor_EArticyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4157931227
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVar, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FArticyGVar*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyGVar), &Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVar, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVar, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyGVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVar_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyGVar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyGVar",
	Z_Construct_UScriptStruct_FArticyGVar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVar_Statics::PropPointers),
	sizeof(FArticyGVar),
	alignof(FArticyGVar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyGVar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyGVar()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGVar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyGVar.InnerSingleton, Z_Construct_UScriptStruct_FArticyGVar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyGVar.InnerSingleton;
}
// End ScriptStruct FArticyGVar

// Begin ScriptStruct FArticyGVNamespace
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyGVNamespace;
class UScriptStruct* FArticyGVNamespace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGVNamespace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyGVNamespace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyGVNamespace, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyGVNamespace"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyGVNamespace.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyGVNamespace>()
{
	return FArticyGVNamespace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyGVNamespace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A namespace containing global variables.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A namespace containing global variables." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "Namespace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of this namespace */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this namespace" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Namespace" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Category", "Namespace" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CppTypename_MetaData[] = {
		{ "Category", "Namespace" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CppTypename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyGVNamespace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVNamespace, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVNamespace, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyGVar, METADATA_PARAMS(0, nullptr) }; // 3214220148
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVNamespace, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 3214220148
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_CppTypename = { "CppTypename", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVNamespace, CppTypename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CppTypename_MetaData), NewProp_CppTypename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewProp_CppTypename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyGVNamespace",
	Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::PropPointers),
	sizeof(FArticyGVNamespace),
	alignof(FArticyGVNamespace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyGVNamespace()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGVNamespace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyGVNamespace.InnerSingleton, Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyGVNamespace.InnerSingleton;
}
// End ScriptStruct FArticyGVNamespace

// Begin ScriptStruct FArticyGVInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyGVInfo;
class UScriptStruct* FArticyGVInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGVInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyGVInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyGVInfo, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyGVInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyGVInfo.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyGVInfo>()
{
	return FArticyGVInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyGVInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Information about global variables.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about global variables." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespaces_MetaData[] = {
		{ "Category", "GlobalVariables" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Namespaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Namespaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyGVInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyGVInfo_Statics::NewProp_Namespaces_Inner = { "Namespaces", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyGVNamespace, METADATA_PARAMS(0, nullptr) }; // 923130243
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyGVInfo_Statics::NewProp_Namespaces = { "Namespaces", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGVInfo, Namespaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespaces_MetaData), NewProp_Namespaces_MetaData) }; // 923130243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyGVInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVInfo_Statics::NewProp_Namespaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGVInfo_Statics::NewProp_Namespaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyGVInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyGVInfo",
	Z_Construct_UScriptStruct_FArticyGVInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVInfo_Statics::PropPointers),
	sizeof(FArticyGVInfo),
	alignof(FArticyGVInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGVInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyGVInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyGVInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGVInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyGVInfo.InnerSingleton, Z_Construct_UScriptStruct_FArticyGVInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyGVInfo.InnerSingleton;
}
// End ScriptStruct FArticyGVInfo

// Begin ScriptStruct FAIDScriptMethodParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter;
class UScriptStruct* FAIDScriptMethodParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDScriptMethodParameter, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("AIDScriptMethodParameter"));
	}
	return Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FAIDScriptMethodParameter>()
{
	return FAIDScriptMethodParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A parameter for a script method.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A parameter for a script method." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ScriptMethods" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ScriptMethods" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDScriptMethodParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethodParameter, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethodParameter, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"AIDScriptMethodParameter",
	Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::PropPointers),
	sizeof(FAIDScriptMethodParameter),
	alignof(FAIDScriptMethodParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDScriptMethodParameter()
{
	if (!Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter.InnerSingleton, Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter.InnerSingleton;
}
// End ScriptStruct FAIDScriptMethodParameter

// Begin ScriptStruct FAIDScriptMethod
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDScriptMethod;
class UScriptStruct* FAIDScriptMethod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDScriptMethod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDScriptMethod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDScriptMethod, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("AIDScriptMethod"));
	}
	return Z_Registration_Info_UScriptStruct_AIDScriptMethod.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FAIDScriptMethod>()
{
	return FAIDScriptMethod::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDScriptMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A script method definition.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A script method definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ScriptMethods" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintName_MetaData[] = {
		{ "Category", "ScriptMethods" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverloadedFunction_MetaData[] = {
		{ "Category", "ScriptMethods" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterList_MetaData[] = {
		{ "Category", "ScriptMethods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A list of parameters (type + parameter name), to be used in a method declaration. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of parameters (type + parameter name), to be used in a method declaration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentList_MetaData[] = {
		{ "Category", "ScriptMethods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A list of arguments (values), including a leading comma, to be used when calling a method. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of arguments (values), including a leading comma, to be used when calling a method." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalParameterTypes_MetaData[] = {
		{ "Category", "ScriptMethods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A list of parameters (original types), used for generating the blueprint function display name. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of parameters (original types), used for generating the blueprint function display name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnType_MetaData[] = {
		{ "Category", "ScriptMethods" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintName;
	static void NewProp_bIsOverloadedFunction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverloadedFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArgumentList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArgumentList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalParameterTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalParameterTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDScriptMethod>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethod, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_BlueprintName = { "BlueprintName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethod, BlueprintName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintName_MetaData), NewProp_BlueprintName_MetaData) };
void Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_bIsOverloadedFunction_SetBit(void* Obj)
{
	((FAIDScriptMethod*)Obj)->bIsOverloadedFunction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_bIsOverloadedFunction = { "bIsOverloadedFunction", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAIDScriptMethod), &Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_bIsOverloadedFunction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOverloadedFunction_MetaData), NewProp_bIsOverloadedFunction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ParameterList_Inner = { "ParameterList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIDScriptMethodParameter, METADATA_PARAMS(0, nullptr) }; // 2540606192
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ParameterList = { "ParameterList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethod, ParameterList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterList_MetaData), NewProp_ParameterList_MetaData) }; // 2540606192
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ArgumentList_Inner = { "ArgumentList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ArgumentList = { "ArgumentList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethod, ArgumentList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArgumentList_MetaData), NewProp_ArgumentList_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_OriginalParameterTypes_Inner = { "OriginalParameterTypes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_OriginalParameterTypes = { "OriginalParameterTypes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethod, OriginalParameterTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalParameterTypes_MetaData), NewProp_OriginalParameterTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ReturnType = { "ReturnType", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDScriptMethod, ReturnType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnType_MetaData), NewProp_ReturnType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_BlueprintName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_bIsOverloadedFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ParameterList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ParameterList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ArgumentList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ArgumentList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_OriginalParameterTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_OriginalParameterTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewProp_ReturnType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"AIDScriptMethod",
	Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::PropPointers),
	sizeof(FAIDScriptMethod),
	alignof(FAIDScriptMethod),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDScriptMethod()
{
	if (!Z_Registration_Info_UScriptStruct_AIDScriptMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDScriptMethod.InnerSingleton, Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDScriptMethod.InnerSingleton;
}
// End ScriptStruct FAIDScriptMethod

// Begin ScriptStruct FAIDUserMethods
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDUserMethods;
class UScriptStruct* FAIDUserMethods::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDUserMethods.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDUserMethods.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDUserMethods, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("AIDUserMethods"));
	}
	return Z_Registration_Info_UScriptStruct_AIDUserMethods.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FAIDUserMethods>()
{
	return FAIDUserMethods::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDUserMethods_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A collection of user-defined script methods.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A collection of user-defined script methods." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptMethods_MetaData[] = {
		{ "Category", "ScriptMethods" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptMethods_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptMethods;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDUserMethods>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDUserMethods_Statics::NewProp_ScriptMethods_Inner = { "ScriptMethods", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIDScriptMethod, METADATA_PARAMS(0, nullptr) }; // 1810532918
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAIDUserMethods_Statics::NewProp_ScriptMethods = { "ScriptMethods", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDUserMethods, ScriptMethods), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptMethods_MetaData), NewProp_ScriptMethods_MetaData) }; // 1810532918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDUserMethods_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDUserMethods_Statics::NewProp_ScriptMethods_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDUserMethods_Statics::NewProp_ScriptMethods,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDUserMethods_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDUserMethods_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"AIDUserMethods",
	Z_Construct_UScriptStruct_FAIDUserMethods_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDUserMethods_Statics::PropPointers),
	sizeof(FAIDUserMethods),
	alignof(FAIDUserMethods),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDUserMethods_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDUserMethods_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDUserMethods()
{
	if (!Z_Registration_Info_UScriptStruct_AIDUserMethods.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDUserMethods.InnerSingleton, Z_Construct_UScriptStruct_FAIDUserMethods_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDUserMethods.InnerSingleton;
}
// End ScriptStruct FAIDUserMethods

// Begin ScriptStruct FArticyLanguageDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyLanguageDef;
class UScriptStruct* FArticyLanguageDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyLanguageDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyLanguageDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyLanguageDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyLanguageDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyLanguageDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyLanguageDef>()
{
	return FArticyLanguageDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyLanguageDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single language definition\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single language definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureName_MetaData[] = {
		{ "Category", "Language" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticyLanguageId_MetaData[] = {
		{ "Category", "Language" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageName_MetaData[] = {
		{ "Category", "Language" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsVoiceOver_MetaData[] = {
		{ "Category", "Language" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArticyLanguageId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LanguageName;
	static void NewProp_IsVoiceOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVoiceOver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyLanguageDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_CultureName = { "CultureName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLanguageDef, CultureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureName_MetaData), NewProp_CultureName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_ArticyLanguageId = { "ArticyLanguageId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLanguageDef, ArticyLanguageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticyLanguageId_MetaData), NewProp_ArticyLanguageId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_LanguageName = { "LanguageName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLanguageDef, LanguageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageName_MetaData), NewProp_LanguageName_MetaData) };
void Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_IsVoiceOver_SetBit(void* Obj)
{
	((FArticyLanguageDef*)Obj)->IsVoiceOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_IsVoiceOver = { "IsVoiceOver", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyLanguageDef), &Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_IsVoiceOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsVoiceOver_MetaData), NewProp_IsVoiceOver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_CultureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_ArticyLanguageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_LanguageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewProp_IsVoiceOver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyLanguageDef",
	Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::PropPointers),
	sizeof(FArticyLanguageDef),
	alignof(FArticyLanguageDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyLanguageDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyLanguageDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyLanguageDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyLanguageDef.InnerSingleton;
}
// End ScriptStruct FArticyLanguageDef

// Begin ScriptStruct FArticyLanguages
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyLanguages;
class UScriptStruct* FArticyLanguages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyLanguages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyLanguages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyLanguages, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyLanguages"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyLanguages.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyLanguages>()
{
	return FArticyLanguages::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyLanguages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Languages object in the manifest file.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Languages object in the manifest file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Languages_MetaData[] = {
		{ "Category", "Languages" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Languages_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Languages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Languages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyLanguages>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyLanguages_Statics::NewProp_Languages_ValueProp = { "Languages", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyLanguageDef, METADATA_PARAMS(0, nullptr) }; // 3832486492
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyLanguages_Statics::NewProp_Languages_Key_KeyProp = { "Languages_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyLanguages_Statics::NewProp_Languages = { "Languages", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLanguages, Languages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Languages_MetaData), NewProp_Languages_MetaData) }; // 3832486492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyLanguages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLanguages_Statics::NewProp_Languages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLanguages_Statics::NewProp_Languages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLanguages_Statics::NewProp_Languages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLanguages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyLanguages_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyLanguages",
	Z_Construct_UScriptStruct_FArticyLanguages_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLanguages_Statics::PropPointers),
	sizeof(FArticyLanguages),
	alignof(FArticyLanguages),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLanguages_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyLanguages_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyLanguages()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyLanguages.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyLanguages.InnerSingleton, Z_Construct_UScriptStruct_FArticyLanguages_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyLanguages.InnerSingleton;
}
// End ScriptStruct FArticyLanguages

// Begin ScriptStruct FArticyIdArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyIdArray;
class UScriptStruct* FArticyIdArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyIdArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyIdArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyIdArray, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyIdArray"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyIdArray.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyIdArray>()
{
	return FArticyIdArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyIdArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Used as a workaround to store an array in a map*/" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used as a workaround to store an array in a map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyIdArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyIdArray_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyIdArray_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyIdArray, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyIdArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyIdArray_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyIdArray_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyIdArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyIdArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyIdArray",
	Z_Construct_UScriptStruct_FArticyIdArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyIdArray_Statics::PropPointers),
	sizeof(FArticyIdArray),
	alignof(FArticyIdArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyIdArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyIdArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyIdArray()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyIdArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyIdArray.InnerSingleton, Z_Construct_UScriptStruct_FArticyIdArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyIdArray.InnerSingleton;
}
// End ScriptStruct FArticyIdArray

// Begin Class UADIHierarchyObject
void UADIHierarchyObject::StaticRegisterNativesUADIHierarchyObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UADIHierarchyObject);
UClass* Z_Construct_UClass_UADIHierarchyObject_NoRegister()
{
	return UADIHierarchyObject::StaticClass();
}
struct Z_Construct_UClass_UADIHierarchyObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a hierarchy object in the Articy import data.\n */" },
#endif
		{ "IncludePath", "ArticyImportData.h" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a hierarchy object in the Articy import data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "HierarchyObject" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "HierarchyObject" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "HierarchyObject" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "HierarchyObject" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UADIHierarchyObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UADIHierarchyObject, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UADIHierarchyObject, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UADIHierarchyObject, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UADIHierarchyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UADIHierarchyObject, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UADIHierarchyObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UADIHierarchyObject_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UADIHierarchyObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UADIHierarchyObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UADIHierarchyObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UADIHierarchyObject_Statics::ClassParams = {
	&UADIHierarchyObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UADIHierarchyObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UADIHierarchyObject_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UADIHierarchyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UADIHierarchyObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UADIHierarchyObject()
{
	if (!Z_Registration_Info_UClass_UADIHierarchyObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UADIHierarchyObject.OuterSingleton, Z_Construct_UClass_UADIHierarchyObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UADIHierarchyObject.OuterSingleton;
}
template<> ARTICYEDITOR_API UClass* StaticClass<UADIHierarchyObject>()
{
	return UADIHierarchyObject::StaticClass();
}
UADIHierarchyObject::UADIHierarchyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UADIHierarchyObject);
UADIHierarchyObject::~UADIHierarchyObject() {}
// End Class UADIHierarchyObject

// Begin ScriptStruct FADIHierarchy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ADIHierarchy;
class UScriptStruct* FADIHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ADIHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ADIHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FADIHierarchy, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ADIHierarchy"));
	}
	return Z_Registration_Info_UScriptStruct_ADIHierarchy.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FADIHierarchy>()
{
	return FADIHierarchy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FADIHierarchy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a hierarchy of Articy objects.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a hierarchy of Articy objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootObject_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FADIHierarchy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FADIHierarchy_Statics::NewProp_RootObject = { "RootObject", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FADIHierarchy, RootObject), Z_Construct_UClass_UADIHierarchyObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootObject_MetaData), NewProp_RootObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FADIHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FADIHierarchy_Statics::NewProp_RootObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FADIHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FADIHierarchy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ADIHierarchy",
	Z_Construct_UScriptStruct_FADIHierarchy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FADIHierarchy_Statics::PropPointers),
	sizeof(FADIHierarchy),
	alignof(FADIHierarchy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FADIHierarchy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FADIHierarchy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FADIHierarchy()
{
	if (!Z_Registration_Info_UScriptStruct_ADIHierarchy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ADIHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FADIHierarchy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ADIHierarchy.InnerSingleton;
}
// End ScriptStruct FADIHierarchy

// Begin ScriptStruct FArticyExpressoFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyExpressoFragment;
class UScriptStruct* FArticyExpressoFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyExpressoFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyExpressoFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyExpressoFragment, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyExpressoFragment"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyExpressoFragment.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyExpressoFragment>()
{
	return FArticyExpressoFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A fragment of Expresso script code.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A fragment of Expresso script code." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalFragment_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParsedFragment_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInstruction_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalFragment;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParsedFragment;
	static void NewProp_bIsInstruction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInstruction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyExpressoFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_OriginalFragment = { "OriginalFragment", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyExpressoFragment, OriginalFragment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalFragment_MetaData), NewProp_OriginalFragment_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_ParsedFragment = { "ParsedFragment", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyExpressoFragment, ParsedFragment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParsedFragment_MetaData), NewProp_ParsedFragment_MetaData) };
void Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_bIsInstruction_SetBit(void* Obj)
{
	((FArticyExpressoFragment*)Obj)->bIsInstruction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_bIsInstruction = { "bIsInstruction", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyExpressoFragment), &Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_bIsInstruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInstruction_MetaData), NewProp_bIsInstruction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_OriginalFragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_ParsedFragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewProp_bIsInstruction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyExpressoFragment",
	Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::PropPointers),
	sizeof(FArticyExpressoFragment),
	alignof(FArticyExpressoFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyExpressoFragment()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyExpressoFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyExpressoFragment.InnerSingleton, Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyExpressoFragment.InnerSingleton;
}
// End ScriptStruct FArticyExpressoFragment

// Begin ScriptStruct FArticyImportDataStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyImportDataStruct;
class UScriptStruct* FArticyImportDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyImportDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyImportDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyImportDataStruct, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyImportDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyImportDataStruct.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyImportDataStruct>()
{
	return FArticyImportDataStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure for Articy import data.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for Articy import data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Project_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariables_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDefinitions_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageDefs_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMethods_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Languages_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptFragments_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedPackages_MetaData[] = {
		{ "Category", "Imported" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentChildrenCache_MetaData[] = {
		{ "Category", "Imported" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Project;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalVariables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackageDefs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserMethods;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Languages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptFragments_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScriptFragments;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ImportedPackages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedPackages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentChildrenCache_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentChildrenCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParentChildrenCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyImportDataStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, Settings), Z_Construct_UScriptStruct_FAdiSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4032887789
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Project = { "Project", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, Project), Z_Construct_UScriptStruct_FArticyProjectDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Project_MetaData), NewProp_Project_MetaData) }; // 3362735693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_GlobalVariables = { "GlobalVariables", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, GlobalVariables), Z_Construct_UScriptStruct_FArticyGVInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariables_MetaData), NewProp_GlobalVariables_MetaData) }; // 2564159892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ObjectDefinitions = { "ObjectDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, ObjectDefinitions), Z_Construct_UScriptStruct_FArticyObjectDefinitions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDefinitions_MetaData), NewProp_ObjectDefinitions_MetaData) }; // 2538306809
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_PackageDefs = { "PackageDefs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, PackageDefs), Z_Construct_UScriptStruct_FArticyPackageDefs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageDefs_MetaData), NewProp_PackageDefs_MetaData) }; // 1560444548
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_UserMethods = { "UserMethods", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, UserMethods), Z_Construct_UScriptStruct_FAIDUserMethods, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMethods_MetaData), NewProp_UserMethods_MetaData) }; // 2485139387
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, Hierarchy), Z_Construct_UScriptStruct_FADIHierarchy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hierarchy_MetaData), NewProp_Hierarchy_MetaData) }; // 2020466128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Languages = { "Languages", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, Languages), Z_Construct_UScriptStruct_FArticyLanguages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Languages_MetaData), NewProp_Languages_MetaData) }; // 47395245
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ScriptFragments_ElementProp = { "ScriptFragments", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyExpressoFragment, METADATA_PARAMS(0, nullptr) }; // 4217376268
static_assert(TModels_V<CGetTypeHashable, FArticyExpressoFragment>, "The structure 'FArticyExpressoFragment' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ScriptFragments = { "ScriptFragments", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, ScriptFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptFragments_MetaData), NewProp_ScriptFragments_MetaData) }; // 4217376268
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ImportedPackages_Inner = { "ImportedPackages", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyPackage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ImportedPackages = { "ImportedPackages", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, ImportedPackages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedPackages_MetaData), NewProp_ImportedPackages_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ParentChildrenCache_ValueProp = { "ParentChildrenCache", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyIdArray, METADATA_PARAMS(0, nullptr) }; // 454397476
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ParentChildrenCache_Key_KeyProp = { "ParentChildrenCache_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ParentChildrenCache = { "ParentChildrenCache", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyImportDataStruct, ParentChildrenCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentChildrenCache_MetaData), NewProp_ParentChildrenCache_MetaData) }; // 4167114503 454397476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Project,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_GlobalVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ObjectDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_PackageDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_UserMethods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Hierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_Languages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ScriptFragments_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ScriptFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ImportedPackages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ImportedPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ParentChildrenCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ParentChildrenCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewProp_ParentChildrenCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyImportDataStruct",
	Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::PropPointers),
	sizeof(FArticyImportDataStruct),
	alignof(FArticyImportDataStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyImportDataStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyImportDataStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyImportDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyImportDataStruct.InnerSingleton;
}
// End ScriptStruct FArticyImportDataStruct

// Begin Class UArticyImportData
void UArticyImportData::StaticRegisterNativesUArticyImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyImportData);
UClass* Z_Construct_UClass_UArticyImportData_NoRegister()
{
	return UArticyImportData::StaticClass();
}
struct Z_Construct_UClass_UArticyImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main class for handling Articy import data.\n */" },
#endif
		{ "IncludePath", "ArticyImportData.h" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main class for handling Articy import data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Languages_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedData_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCachedVersion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// indicates whether we've had at least one working import. Used to determine if we want to re\n" },
#endif
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "indicates whether we've had at least one working import. Used to determine if we want to re" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Project_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariables_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDefinitions_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageDefs_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMethods_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptFragments_MetaData[] = {
		{ "Category", "ImportData" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedPackages_MetaData[] = {
		{ "Category", "Imported" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentChildrenCache_MetaData[] = {
		{ "Category", "Imported" },
		{ "ModuleRelativePath", "Public/ArticyImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Languages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedData;
	static void NewProp_bHasCachedVersion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCachedVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Project;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalVariables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackageDefs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserMethods;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptFragments_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScriptFragments;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ImportedPackages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedPackages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentChildrenCache_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentChildrenCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParentChildrenCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ImportData = { "ImportData", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, ImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportData_MetaData), NewProp_ImportData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_Languages = { "Languages", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, Languages), Z_Construct_UScriptStruct_FArticyLanguages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Languages_MetaData), NewProp_Languages_MetaData) }; // 47395245
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_CachedData = { "CachedData", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, CachedData), Z_Construct_UScriptStruct_FArticyImportDataStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedData_MetaData), NewProp_CachedData_MetaData) }; // 3113386682
void Z_Construct_UClass_UArticyImportData_Statics::NewProp_bHasCachedVersion_SetBit(void* Obj)
{
	((UArticyImportData*)Obj)->bHasCachedVersion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_bHasCachedVersion = { "bHasCachedVersion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyImportData), &Z_Construct_UClass_UArticyImportData_Statics::NewProp_bHasCachedVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCachedVersion_MetaData), NewProp_bHasCachedVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, Settings), Z_Construct_UScriptStruct_FAdiSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4032887789
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_Project = { "Project", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, Project), Z_Construct_UScriptStruct_FArticyProjectDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Project_MetaData), NewProp_Project_MetaData) }; // 3362735693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_GlobalVariables = { "GlobalVariables", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, GlobalVariables), Z_Construct_UScriptStruct_FArticyGVInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariables_MetaData), NewProp_GlobalVariables_MetaData) }; // 2564159892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ObjectDefinitions = { "ObjectDefinitions", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, ObjectDefinitions), Z_Construct_UScriptStruct_FArticyObjectDefinitions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDefinitions_MetaData), NewProp_ObjectDefinitions_MetaData) }; // 2538306809
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_PackageDefs = { "PackageDefs", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, PackageDefs), Z_Construct_UScriptStruct_FArticyPackageDefs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageDefs_MetaData), NewProp_PackageDefs_MetaData) }; // 1560444548
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_UserMethods = { "UserMethods", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, UserMethods), Z_Construct_UScriptStruct_FAIDUserMethods, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMethods_MetaData), NewProp_UserMethods_MetaData) }; // 2485139387
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, Hierarchy), Z_Construct_UScriptStruct_FADIHierarchy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hierarchy_MetaData), NewProp_Hierarchy_MetaData) }; // 2020466128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ScriptFragments_ElementProp = { "ScriptFragments", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyExpressoFragment, METADATA_PARAMS(0, nullptr) }; // 4217376268
static_assert(TModels_V<CGetTypeHashable, FArticyExpressoFragment>, "The structure 'FArticyExpressoFragment' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ScriptFragments = { "ScriptFragments", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, ScriptFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptFragments_MetaData), NewProp_ScriptFragments_MetaData) }; // 4217376268
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ImportedPackages_Inner = { "ImportedPackages", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyPackage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ImportedPackages = { "ImportedPackages", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, ImportedPackages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedPackages_MetaData), NewProp_ImportedPackages_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ParentChildrenCache_ValueProp = { "ParentChildrenCache", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyIdArray, METADATA_PARAMS(0, nullptr) }; // 454397476
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ParentChildrenCache_Key_KeyProp = { "ParentChildrenCache_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyImportData_Statics::NewProp_ParentChildrenCache = { "ParentChildrenCache", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyImportData, ParentChildrenCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentChildrenCache_MetaData), NewProp_ParentChildrenCache_MetaData) }; // 4167114503 454397476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_Languages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_CachedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_bHasCachedVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_Project,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_GlobalVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ObjectDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_PackageDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_UserMethods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_Hierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ScriptFragments_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ScriptFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ImportedPackages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ImportedPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ParentChildrenCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ParentChildrenCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyImportData_Statics::NewProp_ParentChildrenCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyImportData_Statics::ClassParams = {
	&UArticyImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyImportData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyImportData()
{
	if (!Z_Registration_Info_UClass_UArticyImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyImportData.OuterSingleton, Z_Construct_UClass_UArticyImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyImportData.OuterSingleton;
}
template<> ARTICYEDITOR_API UClass* StaticClass<UArticyImportData>()
{
	return UArticyImportData::StaticClass();
}
UArticyImportData::UArticyImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyImportData);
UArticyImportData::~UArticyImportData() {}
// End Class UArticyImportData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArticyType_StaticEnum, TEXT("EArticyType"), &Z_Registration_Info_UEnum_EArticyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4157931227U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAdiSettings::StaticStruct, Z_Construct_UScriptStruct_FAdiSettings_Statics::NewStructOps, TEXT("AdiSettings"), &Z_Registration_Info_UScriptStruct_AdiSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdiSettings), 4032887789U) },
		{ FArticyProjectDef::StaticStruct, Z_Construct_UScriptStruct_FArticyProjectDef_Statics::NewStructOps, TEXT("ArticyProjectDef"), &Z_Registration_Info_UScriptStruct_ArticyProjectDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyProjectDef), 3362735693U) },
		{ FArticyGVar::StaticStruct, Z_Construct_UScriptStruct_FArticyGVar_Statics::NewStructOps, TEXT("ArticyGVar"), &Z_Registration_Info_UScriptStruct_ArticyGVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyGVar), 3214220148U) },
		{ FArticyGVNamespace::StaticStruct, Z_Construct_UScriptStruct_FArticyGVNamespace_Statics::NewStructOps, TEXT("ArticyGVNamespace"), &Z_Registration_Info_UScriptStruct_ArticyGVNamespace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyGVNamespace), 923130243U) },
		{ FArticyGVInfo::StaticStruct, Z_Construct_UScriptStruct_FArticyGVInfo_Statics::NewStructOps, TEXT("ArticyGVInfo"), &Z_Registration_Info_UScriptStruct_ArticyGVInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyGVInfo), 2564159892U) },
		{ FAIDScriptMethodParameter::StaticStruct, Z_Construct_UScriptStruct_FAIDScriptMethodParameter_Statics::NewStructOps, TEXT("AIDScriptMethodParameter"), &Z_Registration_Info_UScriptStruct_AIDScriptMethodParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDScriptMethodParameter), 2540606192U) },
		{ FAIDScriptMethod::StaticStruct, Z_Construct_UScriptStruct_FAIDScriptMethod_Statics::NewStructOps, TEXT("AIDScriptMethod"), &Z_Registration_Info_UScriptStruct_AIDScriptMethod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDScriptMethod), 1810532918U) },
		{ FAIDUserMethods::StaticStruct, Z_Construct_UScriptStruct_FAIDUserMethods_Statics::NewStructOps, TEXT("AIDUserMethods"), &Z_Registration_Info_UScriptStruct_AIDUserMethods, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDUserMethods), 2485139387U) },
		{ FArticyLanguageDef::StaticStruct, Z_Construct_UScriptStruct_FArticyLanguageDef_Statics::NewStructOps, TEXT("ArticyLanguageDef"), &Z_Registration_Info_UScriptStruct_ArticyLanguageDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyLanguageDef), 3832486492U) },
		{ FArticyLanguages::StaticStruct, Z_Construct_UScriptStruct_FArticyLanguages_Statics::NewStructOps, TEXT("ArticyLanguages"), &Z_Registration_Info_UScriptStruct_ArticyLanguages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyLanguages), 47395245U) },
		{ FArticyIdArray::StaticStruct, Z_Construct_UScriptStruct_FArticyIdArray_Statics::NewStructOps, TEXT("ArticyIdArray"), &Z_Registration_Info_UScriptStruct_ArticyIdArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyIdArray), 454397476U) },
		{ FADIHierarchy::StaticStruct, Z_Construct_UScriptStruct_FADIHierarchy_Statics::NewStructOps, TEXT("ADIHierarchy"), &Z_Registration_Info_UScriptStruct_ADIHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FADIHierarchy), 2020466128U) },
		{ FArticyExpressoFragment::StaticStruct, Z_Construct_UScriptStruct_FArticyExpressoFragment_Statics::NewStructOps, TEXT("ArticyExpressoFragment"), &Z_Registration_Info_UScriptStruct_ArticyExpressoFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyExpressoFragment), 4217376268U) },
		{ FArticyImportDataStruct::StaticStruct, Z_Construct_UScriptStruct_FArticyImportDataStruct_Statics::NewStructOps, TEXT("ArticyImportDataStruct"), &Z_Registration_Info_UScriptStruct_ArticyImportDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyImportDataStruct), 3113386682U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UADIHierarchyObject, UADIHierarchyObject::StaticClass, TEXT("UADIHierarchyObject"), &Z_Registration_Info_UClass_UADIHierarchyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UADIHierarchyObject), 2271789821U) },
		{ Z_Construct_UClass_UArticyImportData, UArticyImportData::StaticClass, TEXT("UArticyImportData"), &Z_Registration_Info_UClass_UArticyImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyImportData), 4095993235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_3556019070(TEXT("/Script/ArticyEditor"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
