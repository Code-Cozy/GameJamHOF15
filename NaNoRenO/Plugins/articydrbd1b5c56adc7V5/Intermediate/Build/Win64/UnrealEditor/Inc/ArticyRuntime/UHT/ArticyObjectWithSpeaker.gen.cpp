// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithSpeaker.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithSpeaker() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithSpeaker();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithSpeaker_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithSpeaker Function GetSpeaker
struct Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics
{
	struct ArticyObjectWithSpeaker_eventGetSpeaker_Parms
	{
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ObjectWithSpeaker" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSpeaker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSpeaker_eventGetSpeaker_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithSpeaker, nullptr, "GetSpeaker", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::ArticyObjectWithSpeaker_eventGetSpeaker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::ArticyObjectWithSpeaker_eventGetSpeaker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithSpeaker::execGetSpeaker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetSpeaker();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithSpeaker Function GetSpeaker

// Begin Interface UArticyObjectWithSpeaker Function GetSpeakerId
struct Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics
{
	struct ArticyObjectWithSpeaker_eventGetSpeakerId_Parms
	{
		FArticyId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ObjectWithSpeaker" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSpeaker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSpeaker_eventGetSpeakerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithSpeaker, nullptr, "GetSpeakerId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::ArticyObjectWithSpeaker_eventGetSpeakerId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::ArticyObjectWithSpeaker_eventGetSpeakerId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithSpeaker::execGetSpeakerId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyId*)Z_Param__Result=P_THIS->GetSpeakerId();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithSpeaker Function GetSpeakerId

// Begin Interface UArticyObjectWithSpeaker Function SetSpeaker
struct Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics
{
	struct ArticyObjectWithSpeaker_eventSetSpeaker_Parms
	{
		const UArticyObject* Speaker;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ObjectWithSpeaker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSpeaker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSpeaker_eventSetSpeaker_Parms, Speaker), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSpeaker_eventSetSpeaker_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithSpeaker, nullptr, "SetSpeaker", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::ArticyObjectWithSpeaker_eventSetSpeaker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::ArticyObjectWithSpeaker_eventSetSpeaker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithSpeaker::execSetSpeaker)
{
	P_GET_OBJECT(UArticyObject,Z_Param_Speaker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->SetSpeaker(Z_Param_Speaker);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithSpeaker Function SetSpeaker

// Begin Interface UArticyObjectWithSpeaker Function SetSpeakerId
struct Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics
{
	struct ArticyObjectWithSpeaker_eventSetSpeakerId_Parms
	{
		FArticyId Id;
		FArticyId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ObjectWithSpeaker" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSpeaker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSpeaker_eventSetSpeakerId_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSpeaker_eventSetSpeakerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithSpeaker, nullptr, "SetSpeakerId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::ArticyObjectWithSpeaker_eventSetSpeakerId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::ArticyObjectWithSpeaker_eventSetSpeakerId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithSpeaker::execSetSpeakerId)
{
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyId*)Z_Param__Result=P_THIS->SetSpeakerId(Z_Param_Out_Id);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithSpeaker Function SetSpeakerId

// Begin Interface UArticyObjectWithSpeaker
void UArticyObjectWithSpeaker::StaticRegisterNativesUArticyObjectWithSpeaker()
{
	UClass* Class = UArticyObjectWithSpeaker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpeaker", &IArticyObjectWithSpeaker::execGetSpeaker },
		{ "GetSpeakerId", &IArticyObjectWithSpeaker::execGetSpeakerId },
		{ "SetSpeaker", &IArticyObjectWithSpeaker::execSetSpeaker },
		{ "SetSpeakerId", &IArticyObjectWithSpeaker::execSetSpeakerId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithSpeaker);
UClass* Z_Construct_UClass_UArticyObjectWithSpeaker_NoRegister()
{
	return UArticyObjectWithSpeaker::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithSpeaker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSpeaker.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeaker, "GetSpeaker" }, // 3305155340
		{ &Z_Construct_UFunction_UArticyObjectWithSpeaker_GetSpeakerId, "GetSpeakerId" }, // 4206178640
		{ &Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeaker, "SetSpeaker" }, // 3717964582
		{ &Z_Construct_UFunction_UArticyObjectWithSpeaker_SetSpeakerId, "SetSpeakerId" }, // 1617934671
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithSpeaker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithSpeaker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithSpeaker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithSpeaker_Statics::ClassParams = {
	&UArticyObjectWithSpeaker::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithSpeaker_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithSpeaker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithSpeaker()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithSpeaker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithSpeaker.OuterSingleton, Z_Construct_UClass_UArticyObjectWithSpeaker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithSpeaker.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithSpeaker>()
{
	return UArticyObjectWithSpeaker::StaticClass();
}
UArticyObjectWithSpeaker::UArticyObjectWithSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithSpeaker);
UArticyObjectWithSpeaker::~UArticyObjectWithSpeaker() {}
// End Interface UArticyObjectWithSpeaker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithSpeaker, UArticyObjectWithSpeaker::StaticClass, TEXT("UArticyObjectWithSpeaker"), &Z_Registration_Info_UClass_UArticyObjectWithSpeaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithSpeaker), 3670001466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_3202131304(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
