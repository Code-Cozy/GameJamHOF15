// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyFlowObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyFlowObject() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyReflectable();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyFlowObject
void UArticyFlowObject::StaticRegisterNativesUArticyFlowObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyFlowObject);
UClass* Z_Construct_UClass_UArticyFlowObject_NoRegister()
{
	return UArticyFlowObject::StaticClass();
}
struct Z_Construct_UClass_UArticyFlowObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyFlowObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyFlowObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyFlowObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyReflectable,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyFlowObject_Statics::ClassParams = {
	&UArticyFlowObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyFlowObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyFlowObject()
{
	if (!Z_Registration_Info_UClass_UArticyFlowObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyFlowObject.OuterSingleton, Z_Construct_UClass_UArticyFlowObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyFlowObject.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyFlowObject>()
{
	return UArticyFlowObject::StaticClass();
}
UArticyFlowObject::UArticyFlowObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyFlowObject);
UArticyFlowObject::~UArticyFlowObject() {}
// End Interface UArticyFlowObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyFlowObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyFlowObject, UArticyFlowObject::StaticClass, TEXT("UArticyFlowObject"), &Z_Registration_Info_UClass_UArticyFlowObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyFlowObject), 943041840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyFlowObject_h_2997226227(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyFlowObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyFlowObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
