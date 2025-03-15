// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyExpressoScripts.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyExpressoScripts() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyExpressoScripts();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyExpressoScripts_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyExpressoScripts
void UArticyExpressoScripts::StaticRegisterNativesUArticyExpressoScripts()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyExpressoScripts);
UClass* Z_Construct_UClass_UArticyExpressoScripts_NoRegister()
{
	return UArticyExpressoScripts::StaticClass();
}
struct Z_Construct_UClass_UArticyExpressoScripts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief The UArticyExpressoScripts class manages script conditions and instructions.\n *\n * The UArticyExpressoScripts class is responsible for evaluating conditions and executing instructions\n * within the Articy runtime. It provides functionality to interact with Articy objects, properties,\n * and global variables, and supports various script-related operations.\n */" },
#endif
		{ "IncludePath", "ArticyExpressoScripts.h" },
		{ "ModuleRelativePath", "Public/ArticyExpressoScripts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The UArticyExpressoScripts class manages script conditions and instructions.\n\nThe UArticyExpressoScripts class is responsible for evaluating conditions and executing instructions\nwithin the Articy runtime. It provides functionality to interact with Articy objects, properties,\nand global variables, and supports various script-related operations." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyExpressoScripts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyExpressoScripts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyExpressoScripts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyExpressoScripts_Statics::ClassParams = {
	&UArticyExpressoScripts::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyExpressoScripts_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyExpressoScripts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyExpressoScripts()
{
	if (!Z_Registration_Info_UClass_UArticyExpressoScripts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyExpressoScripts.OuterSingleton, Z_Construct_UClass_UArticyExpressoScripts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyExpressoScripts.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyExpressoScripts>()
{
	return UArticyExpressoScripts::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyExpressoScripts);
UArticyExpressoScripts::~UArticyExpressoScripts() {}
// End Class UArticyExpressoScripts

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyExpressoScripts_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyExpressoScripts, UArticyExpressoScripts::StaticClass, TEXT("UArticyExpressoScripts"), &Z_Registration_Info_UClass_UArticyExpressoScripts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyExpressoScripts), 2745711988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyExpressoScripts_h_1610751334(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyExpressoScripts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyExpressoScripts_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
