// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithStageDirections.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithStageDirections() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithStageDirections();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithStageDirections_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithStageDirections Function GetStageDirections
struct Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics
{
	struct ArticyObjectWithStageDirections_eventGetStageDirections_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithStageDirections" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithStageDirections.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithStageDirections_eventGetStageDirections_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithStageDirections, nullptr, "GetStageDirections", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::ArticyObjectWithStageDirections_eventGetStageDirections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::ArticyObjectWithStageDirections_eventGetStageDirections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithStageDirections::execGetStageDirections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetStageDirections();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithStageDirections Function GetStageDirections

// Begin Interface UArticyObjectWithStageDirections Function SetStageDirections
struct Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics
{
	struct ArticyObjectWithStageDirections_eventSetStageDirections_Parms
	{
		FText StageDirections;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithStageDirections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithStageDirections.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageDirections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_StageDirections;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::NewProp_StageDirections = { "StageDirections", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithStageDirections_eventSetStageDirections_Parms, StageDirections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageDirections_MetaData), NewProp_StageDirections_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithStageDirections_eventSetStageDirections_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::NewProp_StageDirections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithStageDirections, nullptr, "SetStageDirections", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::ArticyObjectWithStageDirections_eventSetStageDirections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::ArticyObjectWithStageDirections_eventSetStageDirections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithStageDirections::execSetStageDirections)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_StageDirections);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->SetStageDirections(Z_Param_Out_StageDirections);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithStageDirections Function SetStageDirections

// Begin Interface UArticyObjectWithStageDirections
void UArticyObjectWithStageDirections::StaticRegisterNativesUArticyObjectWithStageDirections()
{
	UClass* Class = UArticyObjectWithStageDirections::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStageDirections", &IArticyObjectWithStageDirections::execGetStageDirections },
		{ "SetStageDirections", &IArticyObjectWithStageDirections::execSetStageDirections },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithStageDirections);
UClass* Z_Construct_UClass_UArticyObjectWithStageDirections_NoRegister()
{
	return UArticyObjectWithStageDirections::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithStageDirections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithStageDirections.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithStageDirections_GetStageDirections, "GetStageDirections" }, // 1902270596
		{ &Z_Construct_UFunction_UArticyObjectWithStageDirections_SetStageDirections, "SetStageDirections" }, // 3963632257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithStageDirections>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithStageDirections_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithStageDirections_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithStageDirections_Statics::ClassParams = {
	&UArticyObjectWithStageDirections::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithStageDirections_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithStageDirections_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithStageDirections()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithStageDirections.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithStageDirections.OuterSingleton, Z_Construct_UClass_UArticyObjectWithStageDirections_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithStageDirections.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithStageDirections>()
{
	return UArticyObjectWithStageDirections::StaticClass();
}
UArticyObjectWithStageDirections::UArticyObjectWithStageDirections(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithStageDirections);
UArticyObjectWithStageDirections::~UArticyObjectWithStageDirections() {}
// End Interface UArticyObjectWithStageDirections

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithStageDirections, UArticyObjectWithStageDirections::StaticClass, TEXT("UArticyObjectWithStageDirections"), &Z_Registration_Info_UClass_UArticyObjectWithStageDirections, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithStageDirections), 3298529658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_3246913895(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
