// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Public/ArticyJSONFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyJSONFactory() {}

// Begin Cross Module References
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyJSONFactory();
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyJSONFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin Class UArticyJSONFactory
void UArticyJSONFactory::StaticRegisterNativesUArticyJSONFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyJSONFactory);
UClass* Z_Construct_UClass_UArticyJSONFactory_NoRegister()
{
	return UArticyJSONFactory::StaticClass();
}
struct Z_Construct_UClass_UArticyJSONFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory for importing JSON files exported from Articy:draft.\n */" },
#endif
		{ "IncludePath", "ArticyJSONFactory.h" },
		{ "ModuleRelativePath", "Public/ArticyJSONFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory for importing JSON files exported from Articy:draft." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyJSONFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyJSONFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyJSONFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyJSONFactory_Statics::ClassParams = {
	&UArticyJSONFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyJSONFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyJSONFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyJSONFactory()
{
	if (!Z_Registration_Info_UClass_UArticyJSONFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyJSONFactory.OuterSingleton, Z_Construct_UClass_UArticyJSONFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyJSONFactory.OuterSingleton;
}
template<> ARTICYEDITOR_API UClass* StaticClass<UArticyJSONFactory>()
{
	return UArticyJSONFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyJSONFactory);
// End Class UArticyJSONFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyJSONFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyJSONFactory, UArticyJSONFactory::StaticClass, TEXT("UArticyJSONFactory"), &Z_Registration_Info_UClass_UArticyJSONFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyJSONFactory), 2951989277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyJSONFactory_h_719355794(TEXT("/Script/ArticyEditor"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyJSONFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyJSONFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
