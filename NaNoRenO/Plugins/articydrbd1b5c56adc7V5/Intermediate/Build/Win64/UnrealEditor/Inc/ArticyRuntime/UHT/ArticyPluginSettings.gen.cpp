// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyPluginSettings() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPluginSettings();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPluginSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyPluginSettings
void UArticyPluginSettings::StaticRegisterNativesUArticyPluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyPluginSettings);
UClass* Z_Construct_UClass_UArticyPluginSettings_NoRegister()
{
	return UArticyPluginSettings::StaticClass();
}
struct Z_Construct_UClass_UArticyPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UArticyPluginSettings is a class that manages configuration settings for the Articy plugin.\n * It handles settings related to import, runtime behavior, and other plugin-specific features.\n */" },
#endif
		{ "IncludePath", "ArticyPluginSettings.h" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UArticyPluginSettings is a class that manages configuration settings for the Articy plugin.\nIt handles settings related to import, runtime behavior, and other plugin-specific features." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateBlueprintTypeForScriptMethods_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Exposes the generated method provider interface to Blueprint.\n\x09 * INFO: Generated functions will be named according to the format <MethodName>_<ArgumentTypes>\n\x09 * as a workaround to support overloaded functions in blueprint.\n\x09 */" },
#endif
		{ "DisplayName", "Create Blueprint type for script method interface" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposes the generated method provider interface to Blueprint.\nINFO: Generated functions will be named according to the format <MethodName>_<ArgumentTypes>\nas a workaround to support overloaded functions in blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortChildrenAtGeneration_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, will attempt to sort the children using the exported position properties.\n\x09 * This can be slower.\n\x09 */" },
#endif
		{ "DisplayName", "Sort children when importing" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will attempt to sort the children using the exported position properties.\nThis can be slower." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerifyArticyReferenceBeforeImport_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the importer will try to parse the Source/<ProjectName>/<ProjectName>.Build.cs file\n\x09 * to find a reference to the ArticyRuntime inside it before importing.\n\x09 * Proposes to the user to add it automatically if no reference is found.\n\x09 */" },
#endif
		{ "DisplayName", "Verify ArticyRuntime reference inside Unreal Build tools before importing" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the importer will try to parse the Source/<ProjectName>/<ProjectName>.Build.cs file\nto find a reference to the ArticyRuntime inside it before importing.\nProposes to the user to add it automatically if no reference is found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyImporter_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the old importer process will be used (Articy version < 3.2.3).\n\x09 */" },
#endif
		{ "DisplayName", "Use legacy importer (prev. Articy 3.2.3)" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the old importer process will be used (Articy version < 3.2.3)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticyDirectory_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The directory where ArticyContent will be generated and assets are looked for\n\x09 * (when using ArticyAsset). Also used to search for the .articyue file to regenerate\n\x09 * the import asset. Automatically set to the location of the import asset during import.\n\x09 * Change only to manually apply a fix!\n\x09 */" },
#endif
		{ "ContentDir", "" },
		{ "DisplayName", "Articy Directory" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The directory where ArticyContent will be generated and assets are looked for\n(when using ArticyAsset). Also used to search for the .articyue file to regenerate\nthe import asset. Automatically set to the location of the import asset during import.\nChange only to manually apply a fix!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepDatabaseBetweenWorlds_MetaData[] = {
		{ "Category", "RuntimeSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Keeps one instance of the database for the whole game alive, even if the world changes.\n\x09 */" },
#endif
		{ "DisplayName", "Keep database between worlds" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps one instance of the database for the whole game alive, even if the world changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepGlobalVariablesBetweenWorlds_MetaData[] = {
		{ "Category", "RuntimeSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Keeps one instance of the global variables for the whole game alive, even if the world changes.\n\x09 */" },
#endif
		{ "DisplayName", "Keep global variables between worlds" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps one instance of the global variables for the whole game alive, even if the world changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertUnityToUnrealRichText_MetaData[] = {
		{ "Category", "RuntimeSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, converts Unity formatting in the exported articy:draft project into Unreal's rich text format.\n\x09 * Hit \"Import Changes\" anytime you change this setting.\n\x09 */" },
#endif
		{ "DisplayName", "Convert Unity formatting to Unreal Rich Text" },
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, converts Unity formatting in the exported articy:draft project into Unreal's rich text format.\nHit \"Import Changes\" anytime you change this setting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageLoadSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Internal cached data for data consistency between imports (setting restoration etc.).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal cached data for data consistency between imports (setting restoration etc.)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bCreateBlueprintTypeForScriptMethods_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateBlueprintTypeForScriptMethods;
	static void NewProp_bSortChildrenAtGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortChildrenAtGeneration;
	static void NewProp_bVerifyArticyReferenceBeforeImport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerifyArticyReferenceBeforeImport;
	static void NewProp_bUseLegacyImporter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyImporter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArticyDirectory;
	static void NewProp_bKeepDatabaseBetweenWorlds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepDatabaseBetweenWorlds;
	static void NewProp_bKeepGlobalVariablesBetweenWorlds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepGlobalVariablesBetweenWorlds;
	static void NewProp_bConvertUnityToUnrealRichText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertUnityToUnrealRichText;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PackageLoadSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageLoadSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PackageLoadSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bCreateBlueprintTypeForScriptMethods_SetBit(void* Obj)
{
	((UArticyPluginSettings*)Obj)->bCreateBlueprintTypeForScriptMethods = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bCreateBlueprintTypeForScriptMethods = { "bCreateBlueprintTypeForScriptMethods", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPluginSettings), &Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bCreateBlueprintTypeForScriptMethods_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateBlueprintTypeForScriptMethods_MetaData), NewProp_bCreateBlueprintTypeForScriptMethods_MetaData) };
void Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bSortChildrenAtGeneration_SetBit(void* Obj)
{
	((UArticyPluginSettings*)Obj)->bSortChildrenAtGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bSortChildrenAtGeneration = { "bSortChildrenAtGeneration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPluginSettings), &Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bSortChildrenAtGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortChildrenAtGeneration_MetaData), NewProp_bSortChildrenAtGeneration_MetaData) };
void Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bVerifyArticyReferenceBeforeImport_SetBit(void* Obj)
{
	((UArticyPluginSettings*)Obj)->bVerifyArticyReferenceBeforeImport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bVerifyArticyReferenceBeforeImport = { "bVerifyArticyReferenceBeforeImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPluginSettings), &Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bVerifyArticyReferenceBeforeImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerifyArticyReferenceBeforeImport_MetaData), NewProp_bVerifyArticyReferenceBeforeImport_MetaData) };
void Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bUseLegacyImporter_SetBit(void* Obj)
{
	((UArticyPluginSettings*)Obj)->bUseLegacyImporter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bUseLegacyImporter = { "bUseLegacyImporter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPluginSettings), &Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bUseLegacyImporter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyImporter_MetaData), NewProp_bUseLegacyImporter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_ArticyDirectory = { "ArticyDirectory", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPluginSettings, ArticyDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticyDirectory_MetaData), NewProp_ArticyDirectory_MetaData) };
void Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepDatabaseBetweenWorlds_SetBit(void* Obj)
{
	((UArticyPluginSettings*)Obj)->bKeepDatabaseBetweenWorlds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepDatabaseBetweenWorlds = { "bKeepDatabaseBetweenWorlds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPluginSettings), &Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepDatabaseBetweenWorlds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepDatabaseBetweenWorlds_MetaData), NewProp_bKeepDatabaseBetweenWorlds_MetaData) };
void Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepGlobalVariablesBetweenWorlds_SetBit(void* Obj)
{
	((UArticyPluginSettings*)Obj)->bKeepGlobalVariablesBetweenWorlds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepGlobalVariablesBetweenWorlds = { "bKeepGlobalVariablesBetweenWorlds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPluginSettings), &Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepGlobalVariablesBetweenWorlds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepGlobalVariablesBetweenWorlds_MetaData), NewProp_bKeepGlobalVariablesBetweenWorlds_MetaData) };
void Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bConvertUnityToUnrealRichText_SetBit(void* Obj)
{
	((UArticyPluginSettings*)Obj)->bConvertUnityToUnrealRichText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bConvertUnityToUnrealRichText = { "bConvertUnityToUnrealRichText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyPluginSettings), &Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bConvertUnityToUnrealRichText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertUnityToUnrealRichText_MetaData), NewProp_bConvertUnityToUnrealRichText_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_PackageLoadSettings_ValueProp = { "PackageLoadSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_PackageLoadSettings_Key_KeyProp = { "PackageLoadSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_PackageLoadSettings = { "PackageLoadSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPluginSettings, PackageLoadSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageLoadSettings_MetaData), NewProp_PackageLoadSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bCreateBlueprintTypeForScriptMethods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bSortChildrenAtGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bVerifyArticyReferenceBeforeImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bUseLegacyImporter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_ArticyDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepDatabaseBetweenWorlds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bKeepGlobalVariablesBetweenWorlds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_bConvertUnityToUnrealRichText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_PackageLoadSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_PackageLoadSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPluginSettings_Statics::NewProp_PackageLoadSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyPluginSettings_Statics::ClassParams = {
	&UArticyPluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPluginSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyPluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyPluginSettings()
{
	if (!Z_Registration_Info_UClass_UArticyPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyPluginSettings.OuterSingleton, Z_Construct_UClass_UArticyPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyPluginSettings.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyPluginSettings>()
{
	return UArticyPluginSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyPluginSettings);
UArticyPluginSettings::~UArticyPluginSettings() {}
// End Class UArticyPluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPluginSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyPluginSettings, UArticyPluginSettings::StaticClass, TEXT("UArticyPluginSettings"), &Z_Registration_Info_UClass_UArticyPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyPluginSettings), 2464227252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPluginSettings_h_1822412440(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPluginSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
