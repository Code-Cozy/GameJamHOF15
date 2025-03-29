// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyPrimitive.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyPrimitive() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyPrimitive
void UArticyPrimitive::StaticRegisterNativesUArticyPrimitive()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyPrimitive);
UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister()
{
	return UArticyPrimitive::StaticClass();
}
struct Z_Construct_UClass_UArticyPrimitive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A more lightweight base class for objects imported from articy.\n */" },
#endif
		{ "IncludePath", "ArticyPrimitive.h" },
		{ "ModuleRelativePath", "Public/ArticyPrimitive.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A more lightweight base class for objects imported from articy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyPrimitive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloneId_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID of this instance (0 is the original object). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyPrimitive.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of this instance (0 is the original object)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CloneId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyPrimitive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyPrimitive_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPrimitive, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArticyPrimitive_Statics::NewProp_CloneId = { "CloneId", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPrimitive, CloneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloneId_MetaData), NewProp_CloneId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyPrimitive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPrimitive_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPrimitive_Statics::NewProp_CloneId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPrimitive_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyPrimitive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPrimitive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyPrimitive_Statics::ClassParams = {
	&UArticyPrimitive::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyPrimitive_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPrimitive_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPrimitive_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyPrimitive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyPrimitive()
{
	if (!Z_Registration_Info_UClass_UArticyPrimitive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyPrimitive.OuterSingleton, Z_Construct_UClass_UArticyPrimitive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyPrimitive.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyPrimitive>()
{
	return UArticyPrimitive::StaticClass();
}
UArticyPrimitive::UArticyPrimitive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyPrimitive);
UArticyPrimitive::~UArticyPrimitive() {}
// End Class UArticyPrimitive

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPrimitive_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyPrimitive, UArticyPrimitive::StaticClass, TEXT("UArticyPrimitive"), &Z_Registration_Info_UClass_UArticyPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyPrimitive), 4248723016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPrimitive_h_3252041288(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPrimitive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPrimitive_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
