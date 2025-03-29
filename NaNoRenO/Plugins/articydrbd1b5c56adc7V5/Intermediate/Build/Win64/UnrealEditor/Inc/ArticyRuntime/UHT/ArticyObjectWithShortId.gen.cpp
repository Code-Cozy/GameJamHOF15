// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithShortId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithShortId() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithShortId();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithShortId_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithShortId Function GetShortId
struct Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics
{
	struct ArticyObjectWithShortId_eventGetShortId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithShortId" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithShortId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithShortId_eventGetShortId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithShortId, nullptr, "GetShortId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::ArticyObjectWithShortId_eventGetShortId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::ArticyObjectWithShortId_eventGetShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithShortId::execGetShortId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetShortId();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithShortId Function GetShortId

// Begin Interface UArticyObjectWithShortId Function SetShortId
struct Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics
{
	struct ArticyObjectWithShortId_eventSetShortId_Parms
	{
		int32 ShortId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithShortId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithShortId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShortId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::NewProp_ShortId = { "ShortId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithShortId_eventSetShortId_Parms, ShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortId_MetaData), NewProp_ShortId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithShortId_eventSetShortId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::NewProp_ShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithShortId, nullptr, "SetShortId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::ArticyObjectWithShortId_eventSetShortId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::ArticyObjectWithShortId_eventSetShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithShortId::execSetShortId)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetShortId(Z_Param_Out_ShortId);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithShortId Function SetShortId

// Begin Interface UArticyObjectWithShortId
void UArticyObjectWithShortId::StaticRegisterNativesUArticyObjectWithShortId()
{
	UClass* Class = UArticyObjectWithShortId::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetShortId", &IArticyObjectWithShortId::execGetShortId },
		{ "SetShortId", &IArticyObjectWithShortId::execSetShortId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithShortId);
UClass* Z_Construct_UClass_UArticyObjectWithShortId_NoRegister()
{
	return UArticyObjectWithShortId::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithShortId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithShortId.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithShortId_GetShortId, "GetShortId" }, // 2874539236
		{ &Z_Construct_UFunction_UArticyObjectWithShortId_SetShortId, "SetShortId" }, // 1705989647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithShortId>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithShortId_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithShortId_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithShortId_Statics::ClassParams = {
	&UArticyObjectWithShortId::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithShortId_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithShortId_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithShortId()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithShortId.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithShortId.OuterSingleton, Z_Construct_UClass_UArticyObjectWithShortId_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithShortId.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithShortId>()
{
	return UArticyObjectWithShortId::StaticClass();
}
UArticyObjectWithShortId::UArticyObjectWithShortId(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithShortId);
UArticyObjectWithShortId::~UArticyObjectWithShortId() {}
// End Interface UArticyObjectWithShortId

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithShortId_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithShortId, UArticyObjectWithShortId::StaticClass, TEXT("UArticyObjectWithShortId"), &Z_Registration_Info_UClass_UArticyObjectWithShortId, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithShortId), 3716671798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithShortId_h_1078744274(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithShortId_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithShortId_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
