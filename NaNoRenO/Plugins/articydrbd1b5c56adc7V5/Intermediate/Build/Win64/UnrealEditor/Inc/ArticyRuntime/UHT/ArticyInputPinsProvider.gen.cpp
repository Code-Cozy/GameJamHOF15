// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyInputPinsProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyInputPinsProvider() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInputPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInputPinsProvider();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInputPinsProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyInputPinsProvider Function GetInputPins
struct ArticyInputPinsProvider_eventGetInputPins_Parms
{
	TArray<UArticyInputPin*> ReturnValue;
};
TArray<UArticyInputPin*> IArticyInputPinsProvider::GetInputPins() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInputPins instead.");
	ArticyInputPinsProvider_eventGetInputPins_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UArticyInputPinsProvider_GetInputPins = FName(TEXT("GetInputPins"));
TArray<UArticyInputPin*> IArticyInputPinsProvider::Execute_GetInputPins(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UArticyInputPinsProvider::StaticClass()));
	ArticyInputPinsProvider_eventGetInputPins_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UArticyInputPinsProvider_GetInputPins);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IArticyInputPinsProvider*)(O->GetNativeInterfaceAddress(UArticyInputPinsProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetInputPins_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Retrieves the input pins for this object.\n\x09 *\n\x09 * This function provides a BlueprintCallable and BlueprintNativeEvent version\n\x09 * of the GetInputPins functionality, allowing for easy access to input pins.\n\x09 *\n\x09 * @return An array of UArticyInputPin objects.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyInputPinsProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Retrieves the input pins for this object.\n\nThis function provides a BlueprintCallable and BlueprintNativeEvent version\nof the GetInputPins functionality, allowing for easy access to input pins.\n\n@return An array of UArticyInputPin objects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyInputPin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyInputPinsProvider_eventGetInputPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyInputPinsProvider, nullptr, "GetInputPins", nullptr, nullptr, Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::PropPointers), sizeof(ArticyInputPinsProvider_eventGetInputPins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::Function_MetaDataParams) };
static_assert(sizeof(ArticyInputPinsProvider_eventGetInputPins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyInputPinsProvider::execGetInputPins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyInputPin*>*)Z_Param__Result=P_THIS->GetInputPins_Implementation();
	P_NATIVE_END;
}
// End Interface UArticyInputPinsProvider Function GetInputPins

// Begin Interface UArticyInputPinsProvider
void UArticyInputPinsProvider::StaticRegisterNativesUArticyInputPinsProvider()
{
	UClass* Class = UArticyInputPinsProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputPins", &IArticyInputPinsProvider::execGetInputPins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyInputPinsProvider);
UClass* Z_Construct_UClass_UArticyInputPinsProvider_NoRegister()
{
	return UArticyInputPinsProvider::StaticClass();
}
struct Z_Construct_UClass_UArticyInputPinsProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/ArticyInputPinsProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyInputPinsProvider_GetInputPins, "GetInputPins" }, // 1812216381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyInputPinsProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyInputPinsProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyFlowObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInputPinsProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyInputPinsProvider_Statics::ClassParams = {
	&UArticyInputPinsProvider::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInputPinsProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyInputPinsProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyInputPinsProvider()
{
	if (!Z_Registration_Info_UClass_UArticyInputPinsProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyInputPinsProvider.OuterSingleton, Z_Construct_UClass_UArticyInputPinsProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyInputPinsProvider.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyInputPinsProvider>()
{
	return UArticyInputPinsProvider::StaticClass();
}
UArticyInputPinsProvider::UArticyInputPinsProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyInputPinsProvider);
UArticyInputPinsProvider::~UArticyInputPinsProvider() {}
// End Interface UArticyInputPinsProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyInputPinsProvider, UArticyInputPinsProvider::StaticClass, TEXT("UArticyInputPinsProvider"), &Z_Registration_Info_UClass_UArticyInputPinsProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyInputPinsProvider), 1277042050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_3202848017(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
