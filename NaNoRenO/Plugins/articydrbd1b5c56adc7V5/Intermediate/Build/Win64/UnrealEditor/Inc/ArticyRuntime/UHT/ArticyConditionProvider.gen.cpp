// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyConditionProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyConditionProvider() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyConditionProvider();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyConditionProvider_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyGlobalVariables_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyConditionProvider Function Evaluate
struct Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics
{
	struct ArticyConditionProvider_eventEvaluate_Parms
	{
		UArticyGlobalVariables* GV;
		UObject* MethodProvider;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "GV, MethodProvider" },
		{ "Category", "Condition" },
		{ "CPP_Default_GV", "None" },
		{ "CPP_Default_MethodProvider", "None" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyConditionProvider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MethodProvider;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_GV = { "GV", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyConditionProvider_eventEvaluate_Parms, GV), Z_Construct_UClass_UArticyGlobalVariables_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_MethodProvider = { "MethodProvider", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyConditionProvider_eventEvaluate_Parms, MethodProvider), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyConditionProvider_eventEvaluate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyConditionProvider_eventEvaluate_Parms), &Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_GV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_MethodProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyConditionProvider, nullptr, "Evaluate", nullptr, nullptr, Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::ArticyConditionProvider_eventEvaluate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::ArticyConditionProvider_eventEvaluate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyConditionProvider_Evaluate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyConditionProvider_Evaluate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyConditionProvider::execEvaluate)
{
	P_GET_OBJECT(UArticyGlobalVariables,Z_Param_GV);
	P_GET_OBJECT(UObject,Z_Param_MethodProvider);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Evaluate(Z_Param_GV,Z_Param_MethodProvider);
	P_NATIVE_END;
}
// End Interface UArticyConditionProvider Function Evaluate

// Begin Interface UArticyConditionProvider
void UArticyConditionProvider::StaticRegisterNativesUArticyConditionProvider()
{
	UClass* Class = UArticyConditionProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Evaluate", &IArticyConditionProvider::execEvaluate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyConditionProvider);
UClass* Z_Construct_UClass_UArticyConditionProvider_NoRegister()
{
	return UArticyConditionProvider::StaticClass();
}
struct Z_Construct_UClass_UArticyConditionProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyConditionProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyConditionProvider_Evaluate, "Evaluate" }, // 3423013753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyConditionProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyConditionProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyConditionProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyConditionProvider_Statics::ClassParams = {
	&UArticyConditionProvider::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyConditionProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyConditionProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyConditionProvider()
{
	if (!Z_Registration_Info_UClass_UArticyConditionProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyConditionProvider.OuterSingleton, Z_Construct_UClass_UArticyConditionProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyConditionProvider.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyConditionProvider>()
{
	return UArticyConditionProvider::StaticClass();
}
UArticyConditionProvider::UArticyConditionProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyConditionProvider);
UArticyConditionProvider::~UArticyConditionProvider() {}
// End Interface UArticyConditionProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyConditionProvider, UArticyConditionProvider::StaticClass, TEXT("UArticyConditionProvider"), &Z_Registration_Info_UClass_UArticyConditionProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyConditionProvider), 1214385518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_1544786138(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
