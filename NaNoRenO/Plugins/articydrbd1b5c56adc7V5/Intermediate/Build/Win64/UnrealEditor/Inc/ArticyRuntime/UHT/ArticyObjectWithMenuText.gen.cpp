// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithMenuText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithMenuText() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithMenuText();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithMenuText_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithMenuText Function GetMenuText
struct Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics
{
	struct ArticyObjectWithMenuText_eventGetMenuText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithMenuText" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithMenuText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithMenuText_eventGetMenuText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithMenuText, nullptr, "GetMenuText", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::ArticyObjectWithMenuText_eventGetMenuText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::ArticyObjectWithMenuText_eventGetMenuText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithMenuText::execGetMenuText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetMenuText();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithMenuText Function GetMenuText

// Begin Interface UArticyObjectWithMenuText Function SetMenuText
struct Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics
{
	struct ArticyObjectWithMenuText_eventSetMenuText_Parms
	{
		FText MenuText;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithMenuText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithMenuText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_MenuText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::NewProp_MenuText = { "MenuText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithMenuText_eventSetMenuText_Parms, MenuText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuText_MetaData), NewProp_MenuText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithMenuText_eventSetMenuText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::NewProp_MenuText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithMenuText, nullptr, "SetMenuText", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::ArticyObjectWithMenuText_eventSetMenuText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::ArticyObjectWithMenuText_eventSetMenuText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithMenuText::execSetMenuText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_MenuText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->SetMenuText(Z_Param_Out_MenuText);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithMenuText Function SetMenuText

// Begin Interface UArticyObjectWithMenuText
void UArticyObjectWithMenuText::StaticRegisterNativesUArticyObjectWithMenuText()
{
	UClass* Class = UArticyObjectWithMenuText::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMenuText", &IArticyObjectWithMenuText::execGetMenuText },
		{ "SetMenuText", &IArticyObjectWithMenuText::execSetMenuText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithMenuText);
UClass* Z_Construct_UClass_UArticyObjectWithMenuText_NoRegister()
{
	return UArticyObjectWithMenuText::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithMenuText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithMenuText.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithMenuText_GetMenuText, "GetMenuText" }, // 787979315
		{ &Z_Construct_UFunction_UArticyObjectWithMenuText_SetMenuText, "SetMenuText" }, // 4275683057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithMenuText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithMenuText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithMenuText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithMenuText_Statics::ClassParams = {
	&UArticyObjectWithMenuText::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithMenuText_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithMenuText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithMenuText()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithMenuText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithMenuText.OuterSingleton, Z_Construct_UClass_UArticyObjectWithMenuText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithMenuText.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithMenuText>()
{
	return UArticyObjectWithMenuText::StaticClass();
}
UArticyObjectWithMenuText::UArticyObjectWithMenuText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithMenuText);
UArticyObjectWithMenuText::~UArticyObjectWithMenuText() {}
// End Interface UArticyObjectWithMenuText

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithMenuText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithMenuText, UArticyObjectWithMenuText::StaticClass, TEXT("UArticyObjectWithMenuText"), &Z_Registration_Info_UClass_UArticyObjectWithMenuText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithMenuText), 2630027545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithMenuText_h_1078948323(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithMenuText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithMenuText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
