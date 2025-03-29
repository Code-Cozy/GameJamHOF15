// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithSize.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithSize() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithSize();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithSize_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticySize();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithSize Function GetSize
struct Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics
{
	struct ArticyObjectWithSize_eventGetSize_Parms
	{
		FArticySize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithSize" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSize.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSize_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticySize, METADATA_PARAMS(0, nullptr) }; // 3209222130
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithSize, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::ArticyObjectWithSize_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::ArticyObjectWithSize_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithSize_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithSize_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithSize::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticySize*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithSize Function GetSize

// Begin Interface UArticyObjectWithSize Function SetSize
struct Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics
{
	struct ArticyObjectWithSize_eventSetSize_Parms
	{
		FArticySize Size;
		FArticySize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithSize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSize_eventSetSize_Parms, Size), Z_Construct_UScriptStruct_FArticySize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) }; // 3209222130
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithSize_eventSetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticySize, METADATA_PARAMS(0, nullptr) }; // 3209222130
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithSize, nullptr, "SetSize", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::ArticyObjectWithSize_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::ArticyObjectWithSize_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithSize_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithSize_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithSize::execSetSize)
{
	P_GET_STRUCT_REF(FArticySize,Z_Param_Out_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticySize*)Z_Param__Result=P_THIS->SetSize(Z_Param_Out_Size);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithSize Function SetSize

// Begin Interface UArticyObjectWithSize
void UArticyObjectWithSize::StaticRegisterNativesUArticyObjectWithSize()
{
	UClass* Class = UArticyObjectWithSize::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSize", &IArticyObjectWithSize::execGetSize },
		{ "SetSize", &IArticyObjectWithSize::execSetSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithSize);
UClass* Z_Construct_UClass_UArticyObjectWithSize_NoRegister()
{
	return UArticyObjectWithSize::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithSize.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithSize_GetSize, "GetSize" }, // 2474308718
		{ &Z_Construct_UFunction_UArticyObjectWithSize_SetSize, "SetSize" }, // 1247535396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithSize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithSize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithSize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithSize_Statics::ClassParams = {
	&UArticyObjectWithSize::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithSize_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithSize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithSize()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithSize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithSize.OuterSingleton, Z_Construct_UClass_UArticyObjectWithSize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithSize.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithSize>()
{
	return UArticyObjectWithSize::StaticClass();
}
UArticyObjectWithSize::UArticyObjectWithSize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithSize);
UArticyObjectWithSize::~UArticyObjectWithSize() {}
// End Interface UArticyObjectWithSize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithSize, UArticyObjectWithSize::StaticClass, TEXT("UArticyObjectWithSize"), &Z_Registration_Info_UClass_UArticyObjectWithSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithSize), 1136707938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSize_h_3317692743(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
