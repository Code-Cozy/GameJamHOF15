// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithPreviewImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithPreviewImage() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithPreviewImage();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithPreviewImage_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPreviewImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithPreviewImage Function GetPreviewImage
struct Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics
{
	struct ArticyObjectWithPreviewImage_eventGetPreviewImage_Parms
	{
		UArticyPreviewImage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithPreviewImage" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithPreviewImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithPreviewImage_eventGetPreviewImage_Parms, ReturnValue), Z_Construct_UClass_UArticyPreviewImage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithPreviewImage, nullptr, "GetPreviewImage", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::ArticyObjectWithPreviewImage_eventGetPreviewImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::ArticyObjectWithPreviewImage_eventGetPreviewImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithPreviewImage::execGetPreviewImage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyPreviewImage**)Z_Param__Result=P_THIS->GetPreviewImage();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithPreviewImage Function GetPreviewImage

// Begin Interface UArticyObjectWithPreviewImage Function SetPreviewImage
struct Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics
{
	struct ArticyObjectWithPreviewImage_eventSetPreviewImage_Parms
	{
		UArticyPreviewImage* PreviewImage;
		UArticyPreviewImage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithPreviewImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithPreviewImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::NewProp_PreviewImage = { "PreviewImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithPreviewImage_eventSetPreviewImage_Parms, PreviewImage), Z_Construct_UClass_UArticyPreviewImage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithPreviewImage_eventSetPreviewImage_Parms, ReturnValue), Z_Construct_UClass_UArticyPreviewImage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::NewProp_PreviewImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithPreviewImage, nullptr, "SetPreviewImage", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::ArticyObjectWithPreviewImage_eventSetPreviewImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::ArticyObjectWithPreviewImage_eventSetPreviewImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithPreviewImage::execSetPreviewImage)
{
	P_GET_OBJECT(UArticyPreviewImage,Z_Param_PreviewImage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyPreviewImage**)Z_Param__Result=P_THIS->SetPreviewImage(Z_Param_PreviewImage);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithPreviewImage Function SetPreviewImage

// Begin Interface UArticyObjectWithPreviewImage
void UArticyObjectWithPreviewImage::StaticRegisterNativesUArticyObjectWithPreviewImage()
{
	UClass* Class = UArticyObjectWithPreviewImage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPreviewImage", &IArticyObjectWithPreviewImage::execGetPreviewImage },
		{ "SetPreviewImage", &IArticyObjectWithPreviewImage::execSetPreviewImage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithPreviewImage);
UClass* Z_Construct_UClass_UArticyObjectWithPreviewImage_NoRegister()
{
	return UArticyObjectWithPreviewImage::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithPreviewImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithPreviewImage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithPreviewImage_GetPreviewImage, "GetPreviewImage" }, // 1713804326
		{ &Z_Construct_UFunction_UArticyObjectWithPreviewImage_SetPreviewImage, "SetPreviewImage" }, // 2526883900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithPreviewImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithPreviewImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithPreviewImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithPreviewImage_Statics::ClassParams = {
	&UArticyObjectWithPreviewImage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithPreviewImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithPreviewImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithPreviewImage()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithPreviewImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithPreviewImage.OuterSingleton, Z_Construct_UClass_UArticyObjectWithPreviewImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithPreviewImage.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithPreviewImage>()
{
	return UArticyObjectWithPreviewImage::StaticClass();
}
UArticyObjectWithPreviewImage::UArticyObjectWithPreviewImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithPreviewImage);
UArticyObjectWithPreviewImage::~UArticyObjectWithPreviewImage() {}
// End Interface UArticyObjectWithPreviewImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPreviewImage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithPreviewImage, UArticyObjectWithPreviewImage::StaticClass, TEXT("UArticyObjectWithPreviewImage"), &Z_Registration_Info_UClass_UArticyObjectWithPreviewImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithPreviewImage), 4032974126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPreviewImage_h_2958885600(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPreviewImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPreviewImage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
