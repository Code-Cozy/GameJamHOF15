// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyTextExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyTextExtension() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTextExtension();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTextExtension_NoRegister();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyObjectType();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Enum EArticyObjectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArticyObjectType;
static UEnum* EArticyObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArticyObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArticyObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArticyRuntime_EArticyObjectType, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("EArticyObjectType"));
	}
	return Z_Registration_Info_UEnum_EArticyObjectType.OuterSingleton;
}
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyObjectType>()
{
	return EArticyObjectType_StaticEnum();
}
struct Z_Construct_UEnum_ArticyRuntime_EArticyObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyTextExtension.h" },
		{ "Other.Name", "EArticyObjectType::Other" },
		{ "UArticyBool.Name", "EArticyObjectType::UArticyBool" },
		{ "UArticyInt.Name", "EArticyObjectType::UArticyInt" },
		{ "UArticyString.Name", "EArticyObjectType::UArticyString" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArticyObjectType::UArticyBool", (int64)EArticyObjectType::UArticyBool },
		{ "EArticyObjectType::UArticyInt", (int64)EArticyObjectType::UArticyInt },
		{ "EArticyObjectType::UArticyString", (int64)EArticyObjectType::UArticyString },
		{ "EArticyObjectType::Other", (int64)EArticyObjectType::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArticyRuntime_EArticyObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	"EArticyObjectType",
	"EArticyObjectType",
	Z_Construct_UEnum_ArticyRuntime_EArticyObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArticyRuntime_EArticyObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyObjectType()
{
	if (!Z_Registration_Info_UEnum_EArticyObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArticyObjectType.InnerSingleton, Z_Construct_UEnum_ArticyRuntime_EArticyObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArticyObjectType.InnerSingleton;
}
// End Enum EArticyObjectType

// Begin Class UArticyTextExtension
void UArticyTextExtension::StaticRegisterNativesUArticyTextExtension()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyTextExtension);
UClass* Z_Construct_UClass_UArticyTextExtension_NoRegister()
{
	return UArticyTextExtension::StaticClass();
}
struct Z_Construct_UClass_UArticyTextExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyTextExtension.h" },
		{ "ModuleRelativePath", "Public/ArticyTextExtension.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyTextExtension>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyTextExtension_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTextExtension_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyTextExtension_Statics::ClassParams = {
	&UArticyTextExtension::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTextExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyTextExtension_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyTextExtension()
{
	if (!Z_Registration_Info_UClass_UArticyTextExtension.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyTextExtension.OuterSingleton, Z_Construct_UClass_UArticyTextExtension_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyTextExtension.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyTextExtension>()
{
	return UArticyTextExtension::StaticClass();
}
UArticyTextExtension::UArticyTextExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyTextExtension);
UArticyTextExtension::~UArticyTextExtension() {}
// End Class UArticyTextExtension

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArticyObjectType_StaticEnum, TEXT("EArticyObjectType"), &Z_Registration_Info_UEnum_EArticyObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2622305683U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyTextExtension, UArticyTextExtension::StaticClass, TEXT("UArticyTextExtension"), &Z_Registration_Info_UClass_UArticyTextExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyTextExtension), 3559874436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_2909089068(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
