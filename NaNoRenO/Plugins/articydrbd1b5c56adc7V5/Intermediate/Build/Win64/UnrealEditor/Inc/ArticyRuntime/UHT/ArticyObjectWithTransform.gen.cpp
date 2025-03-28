// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithTransform() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithTransform();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithTransform_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTransformation_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithTransform Function GetTransform
struct Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics
{
	struct ArticyObjectWithTransform_eventGetTransform_Parms
	{
		UArticyTransformation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithTransform" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTransform_eventGetTransform_Parms, ReturnValue), Z_Construct_UClass_UArticyTransformation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithTransform, nullptr, "GetTransform", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::ArticyObjectWithTransform_eventGetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::ArticyObjectWithTransform_eventGetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithTransform::execGetTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyTransformation**)Z_Param__Result=P_THIS->GetTransform();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithTransform Function GetTransform

// Begin Interface UArticyObjectWithTransform Function SetTransform
struct Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics
{
	struct ArticyObjectWithTransform_eventSetTransform_Parms
	{
		UArticyTransformation* Transform;
		UArticyTransformation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithTransform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTransform_eventSetTransform_Parms, Transform), Z_Construct_UClass_UArticyTransformation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithTransform_eventSetTransform_Parms, ReturnValue), Z_Construct_UClass_UArticyTransformation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithTransform, nullptr, "SetTransform", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::ArticyObjectWithTransform_eventSetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::ArticyObjectWithTransform_eventSetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithTransform::execSetTransform)
{
	P_GET_OBJECT(UArticyTransformation,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyTransformation**)Z_Param__Result=P_THIS->SetTransform(Z_Param_Transform);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithTransform Function SetTransform

// Begin Interface UArticyObjectWithTransform
void UArticyObjectWithTransform::StaticRegisterNativesUArticyObjectWithTransform()
{
	UClass* Class = UArticyObjectWithTransform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTransform", &IArticyObjectWithTransform::execGetTransform },
		{ "SetTransform", &IArticyObjectWithTransform::execSetTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithTransform);
UClass* Z_Construct_UClass_UArticyObjectWithTransform_NoRegister()
{
	return UArticyObjectWithTransform::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithTransform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithTransform_GetTransform, "GetTransform" }, // 1900719335
		{ &Z_Construct_UFunction_UArticyObjectWithTransform_SetTransform, "SetTransform" }, // 1856870129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithTransform_Statics::ClassParams = {
	&UArticyObjectWithTransform::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithTransform()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithTransform.OuterSingleton, Z_Construct_UClass_UArticyObjectWithTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithTransform.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithTransform>()
{
	return UArticyObjectWithTransform::StaticClass();
}
UArticyObjectWithTransform::UArticyObjectWithTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithTransform);
UArticyObjectWithTransform::~UArticyObjectWithTransform() {}
// End Interface UArticyObjectWithTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTransform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithTransform, UArticyObjectWithTransform::StaticClass, TEXT("UArticyObjectWithTransform"), &Z_Registration_Info_UClass_UArticyObjectWithTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithTransform), 3100927405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTransform_h_471935608(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithTransform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
