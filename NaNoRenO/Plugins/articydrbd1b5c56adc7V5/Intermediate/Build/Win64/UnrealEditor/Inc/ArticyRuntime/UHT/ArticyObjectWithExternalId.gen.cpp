// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithExternalId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithExternalId() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithExternalId();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithExternalId_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithExternalId Function GetExternalId
struct Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics
{
	struct ArticyObjectWithExternalId_eventGetExternalId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithExternalId" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithExternalId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithExternalId_eventGetExternalId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithExternalId, nullptr, "GetExternalId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::ArticyObjectWithExternalId_eventGetExternalId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::ArticyObjectWithExternalId_eventGetExternalId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithExternalId::execGetExternalId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetExternalId();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithExternalId Function GetExternalId

// Begin Interface UArticyObjectWithExternalId Function SetExternalId
struct Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics
{
	struct ArticyObjectWithExternalId_eventSetExternalId_Parms
	{
		FString ExternalId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithExternalId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithExternalId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::NewProp_ExternalId = { "ExternalId", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithExternalId_eventSetExternalId_Parms, ExternalId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalId_MetaData), NewProp_ExternalId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithExternalId_eventSetExternalId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::NewProp_ExternalId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithExternalId, nullptr, "SetExternalId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::ArticyObjectWithExternalId_eventSetExternalId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::ArticyObjectWithExternalId_eventSetExternalId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithExternalId::execSetExternalId)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExternalId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetExternalId(Z_Param_Out_ExternalId);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithExternalId Function SetExternalId

// Begin Interface UArticyObjectWithExternalId
void UArticyObjectWithExternalId::StaticRegisterNativesUArticyObjectWithExternalId()
{
	UClass* Class = UArticyObjectWithExternalId::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetExternalId", &IArticyObjectWithExternalId::execGetExternalId },
		{ "SetExternalId", &IArticyObjectWithExternalId::execSetExternalId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithExternalId);
UClass* Z_Construct_UClass_UArticyObjectWithExternalId_NoRegister()
{
	return UArticyObjectWithExternalId::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithExternalId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithExternalId.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithExternalId_GetExternalId, "GetExternalId" }, // 610931583
		{ &Z_Construct_UFunction_UArticyObjectWithExternalId_SetExternalId, "SetExternalId" }, // 1960023294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithExternalId>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithExternalId_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithExternalId_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithExternalId_Statics::ClassParams = {
	&UArticyObjectWithExternalId::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithExternalId_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithExternalId_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithExternalId()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithExternalId.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithExternalId.OuterSingleton, Z_Construct_UClass_UArticyObjectWithExternalId_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithExternalId.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithExternalId>()
{
	return UArticyObjectWithExternalId::StaticClass();
}
UArticyObjectWithExternalId::UArticyObjectWithExternalId(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithExternalId);
UArticyObjectWithExternalId::~UArticyObjectWithExternalId() {}
// End Interface UArticyObjectWithExternalId

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithExternalId_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithExternalId, UArticyObjectWithExternalId::StaticClass, TEXT("UArticyObjectWithExternalId"), &Z_Registration_Info_UClass_UArticyObjectWithExternalId, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithExternalId), 2189436914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithExternalId_h_743486237(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithExternalId_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithExternalId_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
