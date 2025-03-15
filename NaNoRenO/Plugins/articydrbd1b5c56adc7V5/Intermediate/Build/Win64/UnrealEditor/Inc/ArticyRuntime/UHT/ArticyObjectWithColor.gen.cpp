// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithColor() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithColor();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithColor_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithColor Function GetColor
struct Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics
{
	struct ArticyObjectWithColor_eventGetColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithColor" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithColor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithColor_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithColor, nullptr, "GetColor", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::ArticyObjectWithColor_eventGetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::ArticyObjectWithColor_eventGetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithColor_GetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithColor_GetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithColor::execGetColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetColor();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithColor Function GetColor

// Begin Interface UArticyObjectWithColor Function SetColor
struct Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics
{
	struct ArticyObjectWithColor_eventSetColor_Parms
	{
		FLinearColor Color;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithColor_eventSetColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithColor_eventSetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithColor, nullptr, "SetColor", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::ArticyObjectWithColor_eventSetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::ArticyObjectWithColor_eventSetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithColor_SetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithColor_SetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithColor::execSetColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->SetColor(Z_Param_Out_Color);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithColor Function SetColor

// Begin Interface UArticyObjectWithColor
void UArticyObjectWithColor::StaticRegisterNativesUArticyObjectWithColor()
{
	UClass* Class = UArticyObjectWithColor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetColor", &IArticyObjectWithColor::execGetColor },
		{ "SetColor", &IArticyObjectWithColor::execSetColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithColor);
UClass* Z_Construct_UClass_UArticyObjectWithColor_NoRegister()
{
	return UArticyObjectWithColor::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithColor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithColor_GetColor, "GetColor" }, // 1187880412
		{ &Z_Construct_UFunction_UArticyObjectWithColor_SetColor, "SetColor" }, // 3684373559
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithColor_Statics::ClassParams = {
	&UArticyObjectWithColor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithColor()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithColor.OuterSingleton, Z_Construct_UClass_UArticyObjectWithColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithColor.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithColor>()
{
	return UArticyObjectWithColor::StaticClass();
}
UArticyObjectWithColor::UArticyObjectWithColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithColor);
UArticyObjectWithColor::~UArticyObjectWithColor() {}
// End Interface UArticyObjectWithColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithColor, UArticyObjectWithColor::StaticClass, TEXT("UArticyObjectWithColor"), &Z_Registration_Info_UClass_UArticyObjectWithColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithColor), 3463713066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithColor_h_2152853369(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
