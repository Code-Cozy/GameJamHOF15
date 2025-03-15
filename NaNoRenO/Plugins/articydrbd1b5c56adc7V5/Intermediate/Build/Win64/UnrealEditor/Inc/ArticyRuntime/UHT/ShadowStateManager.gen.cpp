// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ShadowStateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowStateManager() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UShadowStateManager();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UShadowStateManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UShadowStateManager
void UShadowStateManager::StaticRegisterNativesUShadowStateManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShadowStateManager);
UClass* Z_Construct_UClass_UShadowStateManager_NoRegister()
{
	return UShadowStateManager::StaticClass();
}
struct Z_Construct_UClass_UShadowStateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShadowStateManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IShadowStateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShadowStateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShadowStateManager_Statics::ClassParams = {
	&UShadowStateManager::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UShadowStateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShadowStateManager()
{
	if (!Z_Registration_Info_UClass_UShadowStateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShadowStateManager.OuterSingleton, Z_Construct_UClass_UShadowStateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShadowStateManager.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UShadowStateManager>()
{
	return UShadowStateManager::StaticClass();
}
UShadowStateManager::UShadowStateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowStateManager);
UShadowStateManager::~UShadowStateManager() {}
// End Interface UShadowStateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ShadowStateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShadowStateManager, UShadowStateManager::StaticClass, TEXT("UShadowStateManager"), &Z_Registration_Info_UClass_UShadowStateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShadowStateManager), 464171741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ShadowStateManager_h_1410842993(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ShadowStateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ShadowStateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
