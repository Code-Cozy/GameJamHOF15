// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithVertices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithVertices() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithVertices();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithVertices_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithVertices Function GetVertices
struct Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics
{
	struct ArticyObjectWithVertices_eventGetVertices_Parms
	{
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithVertices" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithVertices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithVertices_eventGetVertices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithVertices, nullptr, "GetVertices", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::ArticyObjectWithVertices_eventGetVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::ArticyObjectWithVertices_eventGetVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithVertices::execGetVertices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=P_THIS->GetVertices();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithVertices Function GetVertices

// Begin Interface UArticyObjectWithVertices Function SetVertices
struct Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics
{
	struct ArticyObjectWithVertices_eventSetVertices_Parms
	{
		TArray<FVector2D> Vertices;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithVertices" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithVertices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithVertices_eventSetVertices_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithVertices_eventSetVertices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithVertices, nullptr, "SetVertices", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::ArticyObjectWithVertices_eventSetVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::ArticyObjectWithVertices_eventSetVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithVertices::execSetVertices)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Vertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=P_THIS->SetVertices(Z_Param_Out_Vertices);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithVertices Function SetVertices

// Begin Interface UArticyObjectWithVertices
void UArticyObjectWithVertices::StaticRegisterNativesUArticyObjectWithVertices()
{
	UClass* Class = UArticyObjectWithVertices::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVertices", &IArticyObjectWithVertices::execGetVertices },
		{ "SetVertices", &IArticyObjectWithVertices::execSetVertices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithVertices);
UClass* Z_Construct_UClass_UArticyObjectWithVertices_NoRegister()
{
	return UArticyObjectWithVertices::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithVertices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithVertices.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithVertices_GetVertices, "GetVertices" }, // 2653954114
		{ &Z_Construct_UFunction_UArticyObjectWithVertices_SetVertices, "SetVertices" }, // 3668264275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithVertices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithVertices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithVertices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithVertices_Statics::ClassParams = {
	&UArticyObjectWithVertices::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithVertices_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithVertices_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithVertices()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithVertices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithVertices.OuterSingleton, Z_Construct_UClass_UArticyObjectWithVertices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithVertices.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithVertices>()
{
	return UArticyObjectWithVertices::StaticClass();
}
UArticyObjectWithVertices::UArticyObjectWithVertices(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithVertices);
UArticyObjectWithVertices::~UArticyObjectWithVertices() {}
// End Interface UArticyObjectWithVertices

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithVertices, UArticyObjectWithVertices::StaticClass, TEXT("UArticyObjectWithVertices"), &Z_Registration_Info_UClass_UArticyObjectWithVertices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithVertices), 3079737562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_1908882515(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
