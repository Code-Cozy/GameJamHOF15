// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Public/ArticyTexts.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyTexts() {}

// Begin Cross Module References
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyTextDef();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyTexts();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin ScriptStruct FArticyTextDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyTextDef;
class UScriptStruct* FArticyTextDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTextDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyTextDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyTextDef, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyTextDef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyTextDef.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyTextDef>()
{
	return FArticyTextDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyTextDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct representing a text definition in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyTexts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing a text definition in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The text content */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyTexts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text content" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoAsset_MetaData[] = {
		{ "Category", "Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The associated VO (Voice Over) asset */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyTexts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The associated VO (Voice Over) asset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyTextDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTextDef_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTextDef, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTextDef_Statics::NewProp_VoAsset = { "VoAsset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTextDef, VoAsset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoAsset_MetaData), NewProp_VoAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyTextDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTextDef_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTextDef_Statics::NewProp_VoAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTextDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyTextDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyTextDef",
	Z_Construct_UScriptStruct_FArticyTextDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTextDef_Statics::PropPointers),
	sizeof(FArticyTextDef),
	alignof(FArticyTextDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTextDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyTextDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyTextDef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTextDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyTextDef.InnerSingleton, Z_Construct_UScriptStruct_FArticyTextDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyTextDef.InnerSingleton;
}
// End ScriptStruct FArticyTextDef

// Begin ScriptStruct FArticyTexts
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyTexts;
class UScriptStruct* FArticyTexts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTexts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyTexts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyTexts, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyTexts"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyTexts.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyTexts>()
{
	return FArticyTexts::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyTexts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct representing a collection of texts in Articy.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyTexts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing a collection of texts in Articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "Texts" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A map of text names to their definitions */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyTexts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A map of text names to their definitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "Texts" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The context of the texts */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyTexts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The context of the texts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Content_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Content;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyTexts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Content_ValueProp = { "Content", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyTextDef, METADATA_PARAMS(0, nullptr) }; // 1994566922
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Content_Key_KeyProp = { "Content_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTexts, Content), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) }; // 1994566922
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyTexts, Context), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyTexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Content_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Content_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyTexts_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyTexts_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyTexts",
	Z_Construct_UScriptStruct_FArticyTexts_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTexts_Statics::PropPointers),
	sizeof(FArticyTexts),
	alignof(FArticyTexts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyTexts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyTexts_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyTexts()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyTexts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyTexts.InnerSingleton, Z_Construct_UScriptStruct_FArticyTexts_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyTexts.InnerSingleton;
}
// End ScriptStruct FArticyTexts

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyTexts_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyTextDef::StaticStruct, Z_Construct_UScriptStruct_FArticyTextDef_Statics::NewStructOps, TEXT("ArticyTextDef"), &Z_Registration_Info_UScriptStruct_ArticyTextDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyTextDef), 1994566922U) },
		{ FArticyTexts::StaticStruct, Z_Construct_UScriptStruct_FArticyTexts_Statics::NewStructOps, TEXT("ArticyTexts"), &Z_Registration_Info_UScriptStruct_ArticyTexts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyTexts), 1599701377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyTexts_h_1251266362(TEXT("/Script/ArticyEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyTexts_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyTexts_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
