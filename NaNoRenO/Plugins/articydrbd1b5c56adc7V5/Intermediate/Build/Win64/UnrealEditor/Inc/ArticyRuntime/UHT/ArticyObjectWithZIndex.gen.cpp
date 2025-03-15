// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithZIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithZIndex() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithZIndex();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithZIndex_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithZIndex Function GetZIndex
struct Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics
{
	struct ArticyObjectWithZIndex_eventGetZIndex_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithZIndex" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithZIndex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithZIndex_eventGetZIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithZIndex, nullptr, "GetZIndex", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::ArticyObjectWithZIndex_eventGetZIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::ArticyObjectWithZIndex_eventGetZIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithZIndex::execGetZIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetZIndex();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithZIndex Function GetZIndex

// Begin Interface UArticyObjectWithZIndex Function SetZIndex
struct Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics
{
	struct ArticyObjectWithZIndex_eventSetZIndex_Parms
	{
		float ZIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithZIndex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithZIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::NewProp_ZIndex = { "ZIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithZIndex_eventSetZIndex_Parms, ZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZIndex_MetaData), NewProp_ZIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithZIndex_eventSetZIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::NewProp_ZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithZIndex, nullptr, "SetZIndex", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::ArticyObjectWithZIndex_eventSetZIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::ArticyObjectWithZIndex_eventSetZIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithZIndex::execSetZIndex)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ZIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->SetZIndex(Z_Param_Out_ZIndex);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithZIndex Function SetZIndex

// Begin Interface UArticyObjectWithZIndex
void UArticyObjectWithZIndex::StaticRegisterNativesUArticyObjectWithZIndex()
{
	UClass* Class = UArticyObjectWithZIndex::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetZIndex", &IArticyObjectWithZIndex::execGetZIndex },
		{ "SetZIndex", &IArticyObjectWithZIndex::execSetZIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithZIndex);
UClass* Z_Construct_UClass_UArticyObjectWithZIndex_NoRegister()
{
	return UArticyObjectWithZIndex::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithZIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithZIndex.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithZIndex_GetZIndex, "GetZIndex" }, // 2380240726
		{ &Z_Construct_UFunction_UArticyObjectWithZIndex_SetZIndex, "SetZIndex" }, // 3401329159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithZIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithZIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithZIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithZIndex_Statics::ClassParams = {
	&UArticyObjectWithZIndex::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithZIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithZIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithZIndex()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithZIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithZIndex.OuterSingleton, Z_Construct_UClass_UArticyObjectWithZIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithZIndex.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithZIndex>()
{
	return UArticyObjectWithZIndex::StaticClass();
}
UArticyObjectWithZIndex::UArticyObjectWithZIndex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithZIndex);
UArticyObjectWithZIndex::~UArticyObjectWithZIndex() {}
// End Interface UArticyObjectWithZIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithZIndex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithZIndex, UArticyObjectWithZIndex::StaticClass, TEXT("UArticyObjectWithZIndex"), &Z_Registration_Info_UClass_UArticyObjectWithZIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithZIndex), 342344569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithZIndex_h_3828609003(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithZIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithZIndex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
