// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyEntity() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyEntity();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyEntity_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyEntity
void UArticyEntity::StaticRegisterNativesUArticyEntity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyEntity);
UClass* Z_Construct_UClass_UArticyEntity_NoRegister()
{
	return UArticyEntity::StaticClass();
}
struct Z_Construct_UClass_UArticyEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ArticyEntity.h" },
		{ "ModuleRelativePath", "Public/ArticyEntity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyEntity_Statics::ClassParams = {
	&UArticyEntity::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyEntity()
{
	if (!Z_Registration_Info_UClass_UArticyEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyEntity.OuterSingleton, Z_Construct_UClass_UArticyEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyEntity.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyEntity>()
{
	return UArticyEntity::StaticClass();
}
UArticyEntity::UArticyEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyEntity);
UArticyEntity::~UArticyEntity() {}
// End Class UArticyEntity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyEntity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyEntity, UArticyEntity::StaticClass, TEXT("UArticyEntity"), &Z_Registration_Info_UClass_UArticyEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyEntity), 3439447702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyEntity_h_190306808(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyEntity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
