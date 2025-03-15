// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithPosition() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithPosition();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithPosition_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithPosition Function GetPosition
struct Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics
{
	struct ArticyObjectWithPosition_eventGetPosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithPosition" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithPosition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithPosition_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithPosition, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::ArticyObjectWithPosition_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::ArticyObjectWithPosition_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithPosition::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithPosition Function GetPosition

// Begin Interface UArticyObjectWithPosition Function SetPosition
struct Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics
{
	struct ArticyObjectWithPosition_eventSetPosition_Parms
	{
		FVector2D Position;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithPosition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithPosition_eventSetPosition_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithPosition_eventSetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithPosition, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::ArticyObjectWithPosition_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::ArticyObjectWithPosition_eventSetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithPosition::execSetPosition)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->SetPosition(Z_Param_Out_Position);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithPosition Function SetPosition

// Begin Interface UArticyObjectWithPosition
void UArticyObjectWithPosition::StaticRegisterNativesUArticyObjectWithPosition()
{
	UClass* Class = UArticyObjectWithPosition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPosition", &IArticyObjectWithPosition::execGetPosition },
		{ "SetPosition", &IArticyObjectWithPosition::execSetPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithPosition);
UClass* Z_Construct_UClass_UArticyObjectWithPosition_NoRegister()
{
	return UArticyObjectWithPosition::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithPosition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithPosition_GetPosition, "GetPosition" }, // 3197402282
		{ &Z_Construct_UFunction_UArticyObjectWithPosition_SetPosition, "SetPosition" }, // 2245041467
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithPosition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithPosition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithPosition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithPosition_Statics::ClassParams = {
	&UArticyObjectWithPosition::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithPosition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithPosition()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithPosition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithPosition.OuterSingleton, Z_Construct_UClass_UArticyObjectWithPosition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithPosition.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithPosition>()
{
	return UArticyObjectWithPosition::StaticClass();
}
UArticyObjectWithPosition::UArticyObjectWithPosition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithPosition);
UArticyObjectWithPosition::~UArticyObjectWithPosition() {}
// End Interface UArticyObjectWithPosition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPosition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithPosition, UArticyObjectWithPosition::StaticClass, TEXT("UArticyObjectWithPosition"), &Z_Registration_Info_UClass_UArticyObjectWithPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithPosition), 3871668164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPosition_h_1896285661(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithPosition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
