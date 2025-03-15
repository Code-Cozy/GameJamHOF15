// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyObjectNotificationManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectNotificationManager() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectNotificationManager();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectNotificationManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyObjectNotificationManager
void UArticyObjectNotificationManager::StaticRegisterNativesUArticyObjectNotificationManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectNotificationManager);
UClass* Z_Construct_UClass_UArticyObjectNotificationManager_NoRegister()
{
	return UArticyObjectNotificationManager::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectNotificationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager class for handling notifications about changes in Articy objects.\n */" },
#endif
		{ "IncludePath", "ArticyObjectNotificationManager.h" },
		{ "ModuleRelativePath", "Public/ArticyObjectNotificationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager class for handling notifications about changes in Articy objects." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyObjectNotificationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectNotificationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectNotificationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectNotificationManager_Statics::ClassParams = {
	&UArticyObjectNotificationManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectNotificationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectNotificationManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectNotificationManager()
{
	if (!Z_Registration_Info_UClass_UArticyObjectNotificationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectNotificationManager.OuterSingleton, Z_Construct_UClass_UArticyObjectNotificationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectNotificationManager.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectNotificationManager>()
{
	return UArticyObjectNotificationManager::StaticClass();
}
UArticyObjectNotificationManager::UArticyObjectNotificationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectNotificationManager);
UArticyObjectNotificationManager::~UArticyObjectNotificationManager() {}
// End Class UArticyObjectNotificationManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyObjectNotificationManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectNotificationManager, UArticyObjectNotificationManager::StaticClass, TEXT("UArticyObjectNotificationManager"), &Z_Registration_Info_UClass_UArticyObjectNotificationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectNotificationManager), 4073246053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyObjectNotificationManager_h_3428028171(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyObjectNotificationManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyObjectNotificationManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
