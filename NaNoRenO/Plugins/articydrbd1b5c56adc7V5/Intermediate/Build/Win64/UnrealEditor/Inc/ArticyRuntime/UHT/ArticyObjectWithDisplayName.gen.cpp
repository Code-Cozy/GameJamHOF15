// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithDisplayName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithDisplayName() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithDisplayName();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithDisplayName_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithDisplayName Function GetDisplayName
struct Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics
{
	struct ArticyObjectWithDisplayName_eventGetDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithDisplayName" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithDisplayName.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithDisplayName_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithDisplayName, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::ArticyObjectWithDisplayName_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::ArticyObjectWithDisplayName_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithDisplayName::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithDisplayName Function GetDisplayName

// Begin Interface UArticyObjectWithDisplayName Function SetDisplayName
struct Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics
{
	struct ArticyObjectWithDisplayName_eventSetDisplayName_Parms
	{
		FText DisplayName;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithDisplayName" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithDisplayName.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithDisplayName_eventSetDisplayName_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithDisplayName_eventSetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithDisplayName, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::ArticyObjectWithDisplayName_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::ArticyObjectWithDisplayName_eventSetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithDisplayName::execSetDisplayName)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_DisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->SetDisplayName(Z_Param_Out_DisplayName);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithDisplayName Function SetDisplayName

// Begin Interface UArticyObjectWithDisplayName
void UArticyObjectWithDisplayName::StaticRegisterNativesUArticyObjectWithDisplayName()
{
	UClass* Class = UArticyObjectWithDisplayName::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &IArticyObjectWithDisplayName::execGetDisplayName },
		{ "SetDisplayName", &IArticyObjectWithDisplayName::execSetDisplayName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithDisplayName);
UClass* Z_Construct_UClass_UArticyObjectWithDisplayName_NoRegister()
{
	return UArticyObjectWithDisplayName::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithDisplayName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithDisplayName.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithDisplayName_GetDisplayName, "GetDisplayName" }, // 3242657697
		{ &Z_Construct_UFunction_UArticyObjectWithDisplayName_SetDisplayName, "SetDisplayName" }, // 2292070490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithDisplayName>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithDisplayName_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithDisplayName_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithDisplayName_Statics::ClassParams = {
	&UArticyObjectWithDisplayName::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithDisplayName_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithDisplayName_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithDisplayName()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithDisplayName.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithDisplayName.OuterSingleton, Z_Construct_UClass_UArticyObjectWithDisplayName_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithDisplayName.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithDisplayName>()
{
	return UArticyObjectWithDisplayName::StaticClass();
}
UArticyObjectWithDisplayName::UArticyObjectWithDisplayName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithDisplayName);
UArticyObjectWithDisplayName::~UArticyObjectWithDisplayName() {}
// End Interface UArticyObjectWithDisplayName

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithDisplayName_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithDisplayName, UArticyObjectWithDisplayName::StaticClass, TEXT("UArticyObjectWithDisplayName"), &Z_Registration_Info_UClass_UArticyObjectWithDisplayName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithDisplayName), 1364978236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithDisplayName_h_2629725522(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithDisplayName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithDisplayName_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
