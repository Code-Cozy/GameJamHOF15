// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyInstructionProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyInstructionProvider() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyGlobalVariables_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInstructionProvider();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInstructionProvider_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyInstructionProvider Function Execute
struct Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics
{
	struct ArticyInstructionProvider_eventExecute_Parms
	{
		UArticyGlobalVariables* GV;
		UObject* MethodProvider;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "GV, MethodProvider" },
		{ "Category", "Instruction" },
		{ "CPP_Default_GV", "None" },
		{ "CPP_Default_MethodProvider", "None" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyInstructionProvider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MethodProvider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::NewProp_GV = { "GV", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyInstructionProvider_eventExecute_Parms, GV), Z_Construct_UClass_UArticyGlobalVariables_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::NewProp_MethodProvider = { "MethodProvider", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyInstructionProvider_eventExecute_Parms, MethodProvider), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::NewProp_GV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::NewProp_MethodProvider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyInstructionProvider, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::ArticyInstructionProvider_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::ArticyInstructionProvider_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyInstructionProvider_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyInstructionProvider_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyInstructionProvider::execExecute)
{
	P_GET_OBJECT(UArticyGlobalVariables,Z_Param_GV);
	P_GET_OBJECT(UObject,Z_Param_MethodProvider);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Execute(Z_Param_GV,Z_Param_MethodProvider);
	P_NATIVE_END;
}
// End Interface UArticyInstructionProvider Function Execute

// Begin Interface UArticyInstructionProvider
void UArticyInstructionProvider::StaticRegisterNativesUArticyInstructionProvider()
{
	UClass* Class = UArticyInstructionProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Execute", &IArticyInstructionProvider::execExecute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyInstructionProvider);
UClass* Z_Construct_UClass_UArticyInstructionProvider_NoRegister()
{
	return UArticyInstructionProvider::StaticClass();
}
struct Z_Construct_UClass_UArticyInstructionProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyInstructionProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyInstructionProvider_Execute, "Execute" }, // 3253167727
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyInstructionProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyInstructionProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInstructionProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyInstructionProvider_Statics::ClassParams = {
	&UArticyInstructionProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInstructionProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyInstructionProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyInstructionProvider()
{
	if (!Z_Registration_Info_UClass_UArticyInstructionProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyInstructionProvider.OuterSingleton, Z_Construct_UClass_UArticyInstructionProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyInstructionProvider.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyInstructionProvider>()
{
	return UArticyInstructionProvider::StaticClass();
}
UArticyInstructionProvider::UArticyInstructionProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyInstructionProvider);
UArticyInstructionProvider::~UArticyInstructionProvider() {}
// End Interface UArticyInstructionProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInstructionProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyInstructionProvider, UArticyInstructionProvider::StaticClass, TEXT("UArticyInstructionProvider"), &Z_Registration_Info_UClass_UArticyInstructionProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyInstructionProvider), 1219177634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInstructionProvider_h_84167186(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInstructionProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInstructionProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
