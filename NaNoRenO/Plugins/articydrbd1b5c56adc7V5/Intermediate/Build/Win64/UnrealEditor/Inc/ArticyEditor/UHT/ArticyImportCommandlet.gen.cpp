// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Public/ArticyImportCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyImportCommandlet() {}

// Begin Cross Module References
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyImportCommandlet();
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyImportCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin Class UArticyImportCommandlet
void UArticyImportCommandlet::StaticRegisterNativesUArticyImportCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyImportCommandlet);
UClass* Z_Construct_UClass_UArticyImportCommandlet_NoRegister()
{
	return UArticyImportCommandlet::StaticClass();
}
struct Z_Construct_UClass_UArticyImportCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UArticyImportCommandlet is a custom commandlet class used for importing Articy data.\n */" },
#endif
		{ "IncludePath", "ArticyImportCommandlet.h" },
		{ "ModuleRelativePath", "Public/ArticyImportCommandlet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UArticyImportCommandlet is a custom commandlet class used for importing Articy data." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyImportCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyImportCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyImportCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyImportCommandlet_Statics::ClassParams = {
	&UArticyImportCommandlet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyImportCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyImportCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyImportCommandlet()
{
	if (!Z_Registration_Info_UClass_UArticyImportCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyImportCommandlet.OuterSingleton, Z_Construct_UClass_UArticyImportCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyImportCommandlet.OuterSingleton;
}
template<> ARTICYEDITOR_API UClass* StaticClass<UArticyImportCommandlet>()
{
	return UArticyImportCommandlet::StaticClass();
}
UArticyImportCommandlet::UArticyImportCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyImportCommandlet);
UArticyImportCommandlet::~UArticyImportCommandlet() {}
// End Class UArticyImportCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyImportCommandlet, UArticyImportCommandlet::StaticClass, TEXT("UArticyImportCommandlet"), &Z_Registration_Info_UClass_UArticyImportCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyImportCommandlet), 777381131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportCommandlet_h_1822232168(TEXT("/Script/ArticyEditor"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyImportCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
