// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithTarget.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithTarget() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithTarget();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithTarget_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithTarget Function GetTarget
struct Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics
{
	struct ArticyObjectWithTarget_eventGetTarget_Parms
	{
		UArticyPrimitive* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithTarget" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTarget_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithTarget, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::ArticyObjectWithTarget_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::ArticyObjectWithTarget_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithTarget::execGetTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyPrimitive**)Z_Param__Result=P_THIS->GetTarget();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithTarget Function GetTarget

// Begin Interface UArticyObjectWithTarget Function GetTargetId
struct Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics
{
	struct ArticyObjectWithTarget_eventGetTargetId_Parms
	{
		FArticyId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithTarget" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTarget_eventGetTargetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithTarget, nullptr, "GetTargetId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::ArticyObjectWithTarget_eventGetTargetId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::ArticyObjectWithTarget_eventGetTargetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithTarget::execGetTargetId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyId*)Z_Param__Result=P_THIS->GetTargetId();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithTarget Function GetTargetId

// Begin Interface UArticyObjectWithTarget Function SetTarget
struct Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics
{
	struct ArticyObjectWithTarget_eventSetTarget_Parms
	{
		const UArticyPrimitive* Target;
		UArticyPrimitive* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTarget_eventSetTarget_Parms, Target), Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTarget_eventSetTarget_Parms, ReturnValue), Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithTarget, nullptr, "SetTarget", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::ArticyObjectWithTarget_eventSetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::ArticyObjectWithTarget_eventSetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithTarget::execSetTarget)
{
	P_GET_OBJECT(UArticyPrimitive,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyPrimitive**)Z_Param__Result=P_THIS->SetTarget(Z_Param_Target);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithTarget Function SetTarget

// Begin Interface UArticyObjectWithTarget Function SetTargetId
struct Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics
{
	struct ArticyObjectWithTarget_eventSetTargetId_Parms
	{
		FArticyId Id;
		FArticyId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithTarget" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTarget.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTarget_eventSetTargetId_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTarget_eventSetTargetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithTarget, nullptr, "SetTargetId", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::ArticyObjectWithTarget_eventSetTargetId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::ArticyObjectWithTarget_eventSetTargetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithTarget::execSetTargetId)
{
	P_GET_STRUCT_REF(FArticyId,Z_Param_Out_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyId*)Z_Param__Result=P_THIS->SetTargetId(Z_Param_Out_Id);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithTarget Function SetTargetId

// Begin Interface UArticyObjectWithTarget
void UArticyObjectWithTarget::StaticRegisterNativesUArticyObjectWithTarget()
{
	UClass* Class = UArticyObjectWithTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTarget", &IArticyObjectWithTarget::execGetTarget },
		{ "GetTargetId", &IArticyObjectWithTarget::execGetTargetId },
		{ "SetTarget", &IArticyObjectWithTarget::execSetTarget },
		{ "SetTargetId", &IArticyObjectWithTarget::execSetTargetId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithTarget);
UClass* Z_Construct_UClass_UArticyObjectWithTarget_NoRegister()
{
	return UArticyObjectWithTarget::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithTarget_GetTarget, "GetTarget" }, // 2318860134
		{ &Z_Construct_UFunction_UArticyObjectWithTarget_GetTargetId, "GetTargetId" }, // 1228699736
		{ &Z_Construct_UFunction_UArticyObjectWithTarget_SetTarget, "SetTarget" }, // 1732240775
		{ &Z_Construct_UFunction_UArticyObjectWithTarget_SetTargetId, "SetTargetId" }, // 40742397
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithTarget_Statics::ClassParams = {
	&UArticyObjectWithTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithTarget()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithTarget.OuterSingleton, Z_Construct_UClass_UArticyObjectWithTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithTarget.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithTarget>()
{
	return UArticyObjectWithTarget::StaticClass();
}
UArticyObjectWithTarget::UArticyObjectWithTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithTarget);
UArticyObjectWithTarget::~UArticyObjectWithTarget() {}
// End Interface UArticyObjectWithTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithTarget, UArticyObjectWithTarget::StaticClass, TEXT("UArticyObjectWithTarget"), &Z_Registration_Info_UClass_UArticyObjectWithTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithTarget), 922165983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTarget_h_582059511(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
