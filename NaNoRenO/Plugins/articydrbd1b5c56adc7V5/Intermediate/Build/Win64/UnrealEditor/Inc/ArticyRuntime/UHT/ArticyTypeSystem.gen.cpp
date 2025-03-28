// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyTypeSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyTypeSystem() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTypeSystem();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTypeSystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyTypeSystem
void UArticyTypeSystem::StaticRegisterNativesUArticyTypeSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyTypeSystem);
UClass* Z_Construct_UClass_UArticyTypeSystem_NoRegister()
{
	return UArticyTypeSystem::StaticClass();
}
struct Z_Construct_UClass_UArticyTypeSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyTypeSystem.h" },
		{ "ModuleRelativePath", "Public/ArticyTypeSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyTypeSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyTypeSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTypeSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyTypeSystem_Statics::ClassParams = {
	&UArticyTypeSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTypeSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyTypeSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyTypeSystem()
{
	if (!Z_Registration_Info_UClass_UArticyTypeSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyTypeSystem.OuterSingleton, Z_Construct_UClass_UArticyTypeSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyTypeSystem.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyTypeSystem>()
{
	return UArticyTypeSystem::StaticClass();
}
UArticyTypeSystem::UArticyTypeSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyTypeSystem);
UArticyTypeSystem::~UArticyTypeSystem() {}
// End Class UArticyTypeSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTypeSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyTypeSystem, UArticyTypeSystem::StaticClass, TEXT("UArticyTypeSystem"), &Z_Registration_Info_UClass_UArticyTypeSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyTypeSystem), 1792631595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTypeSystem_h_2171975787(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTypeSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTypeSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
