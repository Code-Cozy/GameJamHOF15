// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Private/Customizations/ArticyAlternativeGVFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyAlternativeGVFactory() {}

// Begin Cross Module References
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyAlternativeGVFactory();
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyAlternativeGVFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin Class UArticyAlternativeGVFactory
void UArticyAlternativeGVFactory::StaticRegisterNativesUArticyAlternativeGVFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyAlternativeGVFactory);
UClass* Z_Construct_UClass_UArticyAlternativeGVFactory_NoRegister()
{
	return UArticyAlternativeGVFactory::StaticClass();
}
struct Z_Construct_UClass_UArticyAlternativeGVFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UArticyAlternativeGVFactory\n * @brief Factory class for creating UArticyAlternativeGlobalVariables assets.\n *\n * This class provides functionality for creating new instances of UArticyAlternativeGlobalVariables assets in the Unreal Engine editor.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Customizations/ArticyAlternativeGVFactory.h" },
		{ "ModuleRelativePath", "Private/Customizations/ArticyAlternativeGVFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UArticyAlternativeGVFactory\n@brief Factory class for creating UArticyAlternativeGlobalVariables assets.\n\nThis class provides functionality for creating new instances of UArticyAlternativeGlobalVariables assets in the Unreal Engine editor." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyAlternativeGVFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyAlternativeGVFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAlternativeGVFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyAlternativeGVFactory_Statics::ClassParams = {
	&UArticyAlternativeGVFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAlternativeGVFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyAlternativeGVFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyAlternativeGVFactory()
{
	if (!Z_Registration_Info_UClass_UArticyAlternativeGVFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyAlternativeGVFactory.OuterSingleton, Z_Construct_UClass_UArticyAlternativeGVFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyAlternativeGVFactory.OuterSingleton;
}
template<> ARTICYEDITOR_API UClass* StaticClass<UArticyAlternativeGVFactory>()
{
	return UArticyAlternativeGVFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyAlternativeGVFactory);
UArticyAlternativeGVFactory::~UArticyAlternativeGVFactory() {}
// End Class UArticyAlternativeGVFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Private_Customizations_ArticyAlternativeGVFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyAlternativeGVFactory, UArticyAlternativeGVFactory::StaticClass, TEXT("UArticyAlternativeGVFactory"), &Z_Registration_Info_UClass_UArticyAlternativeGVFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyAlternativeGVFactory), 3818475732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Private_Customizations_ArticyAlternativeGVFactory_h_1648184829(TEXT("/Script/ArticyEditor"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Private_Customizations_ArticyAlternativeGVFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Private_Customizations_ArticyAlternativeGVFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
