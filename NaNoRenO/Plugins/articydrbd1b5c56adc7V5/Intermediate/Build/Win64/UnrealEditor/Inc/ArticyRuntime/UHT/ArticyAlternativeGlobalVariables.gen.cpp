// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyAlternativeGlobalVariables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyAlternativeGlobalVariables() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyAlternativeGlobalVariables();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyAlternativeGlobalVariables_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyAlternativeGlobalVariables
void UArticyAlternativeGlobalVariables::StaticRegisterNativesUArticyAlternativeGlobalVariables()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyAlternativeGlobalVariables);
UClass* Z_Construct_UClass_UArticyAlternativeGlobalVariables_NoRegister()
{
	return UArticyAlternativeGlobalVariables::StaticClass();
}
struct Z_Construct_UClass_UArticyAlternativeGlobalVariables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UArticyAlternativeGlobalVariables\n * @brief A data asset class for managing alternative global variables in the Articy runtime.\n *\n * This class provides a blueprint-accessible data asset for storing and managing alternative global variables\n * within the Articy runtime environment.\n */" },
#endif
		{ "IncludePath", "ArticyAlternativeGlobalVariables.h" },
		{ "ModuleRelativePath", "Public/ArticyAlternativeGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UArticyAlternativeGlobalVariables\n@brief A data asset class for managing alternative global variables in the Articy runtime.\n\nThis class provides a blueprint-accessible data asset for storing and managing alternative global variables\nwithin the Articy runtime environment." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyAlternativeGlobalVariables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyAlternativeGlobalVariables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAlternativeGlobalVariables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyAlternativeGlobalVariables_Statics::ClassParams = {
	&UArticyAlternativeGlobalVariables::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAlternativeGlobalVariables_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyAlternativeGlobalVariables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyAlternativeGlobalVariables()
{
	if (!Z_Registration_Info_UClass_UArticyAlternativeGlobalVariables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyAlternativeGlobalVariables.OuterSingleton, Z_Construct_UClass_UArticyAlternativeGlobalVariables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyAlternativeGlobalVariables.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyAlternativeGlobalVariables>()
{
	return UArticyAlternativeGlobalVariables::StaticClass();
}
UArticyAlternativeGlobalVariables::UArticyAlternativeGlobalVariables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyAlternativeGlobalVariables);
UArticyAlternativeGlobalVariables::~UArticyAlternativeGlobalVariables() {}
// End Class UArticyAlternativeGlobalVariables

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAlternativeGlobalVariables_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyAlternativeGlobalVariables, UArticyAlternativeGlobalVariables::StaticClass, TEXT("UArticyAlternativeGlobalVariables"), &Z_Registration_Info_UClass_UArticyAlternativeGlobalVariables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyAlternativeGlobalVariables), 1621384100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAlternativeGlobalVariables_h_317996875(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAlternativeGlobalVariables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAlternativeGlobalVariables_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
