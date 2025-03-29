// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Public/ObjectDefinitionsImport.h"
#include "ArticyEditor/Public/ArticyTexts.h"
#include "ArticyRuntime/Public/ArticyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectDefinitionsImport() {}

// Begin Cross Module References
ARTICYEDITOR_API UEnum* Z_Construct_UEnum_ArticyEditor_EObjectDefType();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyEnumValue();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyObjectDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyObjectDefinitions();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyPropertyDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyTemplateConstraint();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyTemplateDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyTemplateFeatureDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyTexts();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyType();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin ScriptStruct FArticyTemplateConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint;
class UScriptStruct* FArticyTemplateConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyTemplateConstraint, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyTemplateConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyTemplateConstraint>()
{
	return FArticyTemplateConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a template constraint in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a template constraint in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "Category", "TemplateConstraint" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "TemplateConstraint" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLocalized_MetaData[] = {
		{ "Category", "TemplateConstraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Only present on localizable properties. */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only present on localizable properties." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Property;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static void NewProp_IsLocalized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLocalized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyTemplateConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateConstraint, Property), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateConstraint, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
void Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_IsLocalized_SetBit(void* Obj)
{
	((FArticyTemplateConstraint*)Obj)->IsLocalized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_IsLocalized = { "IsLocalized", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyTemplateConstraint), &Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_IsLocalized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLocalized_MetaData), NewProp_IsLocalized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewProp_IsLocalized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyTemplateConstraint",
	Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::PropPointers),
	sizeof(FArticyTemplateConstraint),
	alignof(FArticyTemplateConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyTemplateConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint.InnerSingleton, Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint.InnerSingleton;
}
// End ScriptStruct FArticyTemplateConstraint

// Begin ScriptStruct FArticyPropertyDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyPropertyDef;
class UScriptStruct* FArticyPropertyDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPropertyDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyPropertyDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyPropertyDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyPropertyDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyPropertyDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyPropertyDef>()
{
	return FArticyPropertyDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyPropertyDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a property definition in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a property definition in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "Category", "ObjectProperty" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ObjectProperty" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "ObjectProperty" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ObjectProperty" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "ObjectProperty" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticyType_MetaData[] = {
		{ "Category", "ObjectProperty" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Property;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArticyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyPropertyDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyDef, Property), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyDef, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyDef, ItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyDef, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyDef, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_ArticyType = { "ArticyType", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyDef, ArticyType), Z_Construct_UScriptStruct_FArticyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticyType_MetaData), NewProp_ArticyType_MetaData) }; // 2228801209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewProp_ArticyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyPropertyDef",
	Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::PropPointers),
	sizeof(FArticyPropertyDef),
	alignof(FArticyPropertyDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyPropertyDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPropertyDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyPropertyDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyPropertyDef.InnerSingleton;
}
// End ScriptStruct FArticyPropertyDef

// Begin ScriptStruct FArticyEnumValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyEnumValue;
class UScriptStruct* FArticyEnumValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyEnumValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyEnumValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyEnumValue, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyEnumValue"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyEnumValue.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyEnumValue>()
{
	return FArticyEnumValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyEnumValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents an enum value in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an enum value in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "EnumValue" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "EnumValue" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyEnumValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyEnumValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyEnumValue, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArticyEnumValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyEnumValue, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyEnumValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyEnumValue_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyEnumValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyEnumValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyEnumValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyEnumValue",
	Z_Construct_UScriptStruct_FArticyEnumValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyEnumValue_Statics::PropPointers),
	sizeof(FArticyEnumValue),
	alignof(FArticyEnumValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyEnumValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyEnumValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyEnumValue()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyEnumValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyEnumValue.InnerSingleton, Z_Construct_UScriptStruct_FArticyEnumValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyEnumValue.InnerSingleton;
}
// End ScriptStruct FArticyEnumValue

// Begin ScriptStruct FArticyTemplateFeatureDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef;
class UScriptStruct* FArticyTemplateFeatureDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyTemplateFeatureDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyTemplateFeatureDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyTemplateFeatureDef>()
{
	return FArticyTemplateFeatureDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a template feature definition in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a template feature definition in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "TemplateFeature" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "TemplateFeature" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "TemplateFeature" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "TemplateFeature" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticyType_MetaData[] = {
		{ "Category", "TemplateFeature" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArticyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyTemplateFeatureDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateFeatureDef, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateFeatureDef, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyPropertyDef, METADATA_PARAMS(0, nullptr) }; // 1326948358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateFeatureDef, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 1326948358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyTemplateConstraint, METADATA_PARAMS(0, nullptr) }; // 3011612641
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateFeatureDef, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 3011612641
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_ArticyType = { "ArticyType", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateFeatureDef, ArticyType), Z_Construct_UScriptStruct_FArticyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticyType_MetaData), NewProp_ArticyType_MetaData) }; // 2228801209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Properties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewProp_ArticyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyTemplateFeatureDef",
	Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::PropPointers),
	sizeof(FArticyTemplateFeatureDef),
	alignof(FArticyTemplateFeatureDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyTemplateFeatureDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef.InnerSingleton;
}
// End ScriptStruct FArticyTemplateFeatureDef

// Begin ScriptStruct FArticyTemplateDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyTemplateDef;
class UScriptStruct* FArticyTemplateDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTemplateDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyTemplateDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyTemplateDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyTemplateDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyTemplateDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyTemplateDef>()
{
	return FArticyTemplateDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyTemplateDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a template definition in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a template definition in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticyType_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArticyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Features_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Features;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyTemplateDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_ArticyType = { "ArticyType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateDef, ArticyType), Z_Construct_UScriptStruct_FArticyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticyType_MetaData), NewProp_ArticyType_MetaData) }; // 2228801209
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateDef, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateDef, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyTemplateFeatureDef, METADATA_PARAMS(0, nullptr) }; // 279925696
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTemplateDef, Features), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Features_MetaData), NewProp_Features_MetaData) }; // 279925696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_ArticyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_Features_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewProp_Features,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyTemplateDef",
	Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::PropPointers),
	sizeof(FArticyTemplateDef),
	alignof(FArticyTemplateDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyTemplateDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTemplateDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyTemplateDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyTemplateDef.InnerSingleton;
}
// End ScriptStruct FArticyTemplateDef

// Begin Enum EObjectDefType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectDefType;
static UEnum* EObjectDefType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectDefType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectDefType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArticyEditor_EObjectDefType, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("EObjectDefType"));
	}
	return Z_Registration_Info_UEnum_EObjectDefType.OuterSingleton;
}
template<> ARTICYEDITOR_API UEnum* StaticEnum<EObjectDefType>()
{
	return EObjectDefType_StaticEnum();
}
struct Z_Construct_UEnum_ArticyEditor_EObjectDefType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumeration representing object definition types in Articy.\n */" },
#endif
		{ "Enum.Comment", "//just a Type with properties, no Template\n" },
		{ "Enum.Name", "EObjectDefType::Enum" },
		{ "Enum.ToolTip", "just a Type with properties, no Template" },
		{ "Model.Name", "EObjectDefType::Model" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
		{ "Template.Name", "EObjectDefType::Template" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration representing object definition types in Articy." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectDefType::Model", (int64)EObjectDefType::Model },
		{ "EObjectDefType::Enum", (int64)EObjectDefType::Enum },
		{ "EObjectDefType::Template", (int64)EObjectDefType::Template },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArticyEditor_EObjectDefType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	"EObjectDefType",
	"EObjectDefType",
	Z_Construct_UEnum_ArticyEditor_EObjectDefType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyEditor_EObjectDefType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyEditor_EObjectDefType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArticyEditor_EObjectDefType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArticyEditor_EObjectDefType()
{
	if (!Z_Registration_Info_UEnum_EObjectDefType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectDefType.InnerSingleton, Z_Construct_UEnum_ArticyEditor_EObjectDefType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectDefType.InnerSingleton;
}
// End Enum EObjectDefType

// Begin ScriptStruct FArticyObjectDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyObjectDef;
class UScriptStruct* FArticyObjectDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyObjectDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyObjectDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyObjectDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyObjectDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyObjectDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyObjectDef>()
{
	return FArticyObjectDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyObjectDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents an object definition in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an object definition in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticyType_MetaData[] = {
		{ "Category", "ObjectDef" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefType_MetaData[] = {
		{ "Category", "ObjectDef" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ObjectDef" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "ObjectDef" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritsFrom_MetaData[] = {
		{ "Category", "ObjectDef" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "ObjectDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Properties of the model. */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties of the model." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "Category", "ObjectDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Might be empty. */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Might be empty." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "ObjectDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Only for enums. */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only for enums." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArticyType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Class;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InheritsFrom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Template;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyObjectDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_ArticyType = { "ArticyType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, ArticyType), Z_Construct_UScriptStruct_FArticyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticyType_MetaData), NewProp_ArticyType_MetaData) }; // 2228801209
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_DefType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_DefType = { "DefType", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, DefType), Z_Construct_UEnum_ArticyEditor_EObjectDefType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefType_MetaData), NewProp_DefType_MetaData) }; // 3029166487
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, Class), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_InheritsFrom = { "InheritsFrom", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, InheritsFrom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritsFrom_MetaData), NewProp_InheritsFrom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyPropertyDef, METADATA_PARAMS(0, nullptr) }; // 1326948358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 1326948358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, Template), Z_Construct_UScriptStruct_FArticyTemplateDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) }; // 2074120159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyEnumValue, METADATA_PARAMS(0, nullptr) }; // 3373415889
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDef, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3373415889
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyObjectDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_ArticyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_DefType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_DefType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_InheritsFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Properties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Template,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyObjectDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyObjectDef",
	Z_Construct_UScriptStruct_FArticyObjectDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectDef_Statics::PropPointers),
	sizeof(FArticyObjectDef),
	alignof(FArticyObjectDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyObjectDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyObjectDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyObjectDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyObjectDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyObjectDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyObjectDef.InnerSingleton;
}
// End ScriptStruct FArticyObjectDef

// Begin ScriptStruct FArticyObjectDefinitions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions;
class UScriptStruct* FArticyObjectDefinitions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyObjectDefinitions, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyObjectDefinitions"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyObjectDefinitions>()
{
	return FArticyObjectDefinitions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents object definitions in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents object definitions in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[] = {
		{ "Category", "ObjectDefinitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This stores information about all the types that have been imported.\n     * Note that FName is case-insensitive, as is the type information in the\n     * articy json export.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This stores information about all the types that have been imported.\nNote that FName is case-insensitive, as is the type information in the\narticy json export." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texts_MetaData[] = {
		{ "Category", "ObjectDefinitions" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatureTypes_MetaData[] = {
		{ "Category", "ObjectDefinitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Contains the CPP type of all defined features.\n     * This is needed to prevent feature types from being imported multiple times (as they are defined multiple times in the json).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the CPP type of all defined features.\nThis is needed to prevent feature types from being imported multiple times (as they are defined multiple times in the json)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatureDefs_MetaData[] = {
		{ "Category", "ObjectDefinitions" },
		{ "ModuleRelativePath", "Public/ObjectDefinitionsImport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Types_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Types_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Types;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texts_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Texts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Texts;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FeatureTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_FeatureTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FeatureDefs_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FeatureDefs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FeatureDefs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyObjectDefinitions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Types_ValueProp = { "Types", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyObjectDef, METADATA_PARAMS(0, nullptr) }; // 180795015
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Types_Key_KeyProp = { "Types_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDefinitions, Types), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Types_MetaData), NewProp_Types_MetaData) }; // 180795015
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Texts_ValueProp = { "Texts", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyTexts, METADATA_PARAMS(0, nullptr) }; // 1599701377
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Texts_Key_KeyProp = { "Texts_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Texts = { "Texts", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDefinitions, Texts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texts_MetaData), NewProp_Texts_MetaData) }; // 1599701377
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureTypes_ElementProp = { "FeatureTypes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureTypes = { "FeatureTypes", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDefinitions, FeatureTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatureTypes_MetaData), NewProp_FeatureTypes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureDefs_ValueProp = { "FeatureDefs", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyTemplateFeatureDef, METADATA_PARAMS(0, nullptr) }; // 279925696
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureDefs_Key_KeyProp = { "FeatureDefs_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureDefs = { "FeatureDefs", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectDefinitions, FeatureDefs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatureDefs_MetaData), NewProp_FeatureDefs_MetaData) }; // 279925696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Types_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Types_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Types,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Texts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Texts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_Texts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureDefs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureDefs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewProp_FeatureDefs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyObjectDefinitions",
	Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::PropPointers),
	sizeof(FArticyObjectDefinitions),
	alignof(FArticyObjectDefinitions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyObjectDefinitions()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions.InnerSingleton, Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions.InnerSingleton;
}
// End ScriptStruct FArticyObjectDefinitions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EObjectDefType_StaticEnum, TEXT("EObjectDefType"), &Z_Registration_Info_UEnum_EObjectDefType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3029166487U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyTemplateConstraint::StaticStruct, Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics::NewStructOps, TEXT("ArticyTemplateConstraint"), &Z_Registration_Info_UScriptStruct_ArticyTemplateConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyTemplateConstraint), 3011612641U) },
		{ FArticyPropertyDef::StaticStruct, Z_Construct_UScriptStruct_FArticyPropertyDef_Statics::NewStructOps, TEXT("ArticyPropertyDef"), &Z_Registration_Info_UScriptStruct_ArticyPropertyDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyPropertyDef), 1326948358U) },
		{ FArticyEnumValue::StaticStruct, Z_Construct_UScriptStruct_FArticyEnumValue_Statics::NewStructOps, TEXT("ArticyEnumValue"), &Z_Registration_Info_UScriptStruct_ArticyEnumValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyEnumValue), 3373415889U) },
		{ FArticyTemplateFeatureDef::StaticStruct, Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics::NewStructOps, TEXT("ArticyTemplateFeatureDef"), &Z_Registration_Info_UScriptStruct_ArticyTemplateFeatureDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyTemplateFeatureDef), 279925696U) },
		{ FArticyTemplateDef::StaticStruct, Z_Construct_UScriptStruct_FArticyTemplateDef_Statics::NewStructOps, TEXT("ArticyTemplateDef"), &Z_Registration_Info_UScriptStruct_ArticyTemplateDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyTemplateDef), 2074120159U) },
		{ FArticyObjectDef::StaticStruct, Z_Construct_UScriptStruct_FArticyObjectDef_Statics::NewStructOps, TEXT("ArticyObjectDef"), &Z_Registration_Info_UScriptStruct_ArticyObjectDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyObjectDef), 180795015U) },
		{ FArticyObjectDefinitions::StaticStruct, Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics::NewStructOps, TEXT("ArticyObjectDefinitions"), &Z_Registration_Info_UScriptStruct_ArticyObjectDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyObjectDefinitions), 2538306809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_4122961591(TEXT("/Script/ArticyEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
