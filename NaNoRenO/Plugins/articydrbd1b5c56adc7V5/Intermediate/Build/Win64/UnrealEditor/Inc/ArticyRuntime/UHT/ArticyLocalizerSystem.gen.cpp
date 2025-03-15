// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyLocalizerSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyLocalizerSystem() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocalizerSystem();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocalizerSystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyLocalizerSystem
void UArticyLocalizerSystem::StaticRegisterNativesUArticyLocalizerSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyLocalizerSystem);
UClass* Z_Construct_UClass_UArticyLocalizerSystem_NoRegister()
{
	return UArticyLocalizerSystem::StaticClass();
}
struct Z_Construct_UClass_UArticyLocalizerSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyLocalizerSystem.h" },
		{ "ModuleRelativePath", "Public/ArticyLocalizerSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyLocalizerSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyLocalizerSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocalizerSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyLocalizerSystem_Statics::ClassParams = {
	&UArticyLocalizerSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocalizerSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyLocalizerSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyLocalizerSystem()
{
	if (!Z_Registration_Info_UClass_UArticyLocalizerSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyLocalizerSystem.OuterSingleton, Z_Construct_UClass_UArticyLocalizerSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyLocalizerSystem.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyLocalizerSystem>()
{
	return UArticyLocalizerSystem::StaticClass();
}
UArticyLocalizerSystem::UArticyLocalizerSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyLocalizerSystem);
UArticyLocalizerSystem::~UArticyLocalizerSystem() {}
// End Class UArticyLocalizerSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyLocalizerSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyLocalizerSystem, UArticyLocalizerSystem::StaticClass, TEXT("UArticyLocalizerSystem"), &Z_Registration_Info_UClass_UArticyLocalizerSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyLocalizerSystem), 1744915761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyLocalizerSystem_h_2995085313(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyLocalizerSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyLocalizerSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
