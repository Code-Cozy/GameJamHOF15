// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyOutputPinsProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyOutputPinsProvider() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutputPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutputPinsProvider();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutputPinsProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyOutputPinsProvider Function GetOutputPins
struct ArticyOutputPinsProvider_eventGetOutputPins_Parms
{
	TArray<UArticyOutputPin*> ReturnValue;
};
TArray<UArticyOutputPin*> IArticyOutputPinsProvider::GetOutputPins() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOutputPins instead.");
	ArticyOutputPinsProvider_eventGetOutputPins_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UArticyOutputPinsProvider_GetOutputPins = FName(TEXT("GetOutputPins"));
TArray<UArticyOutputPin*> IArticyOutputPinsProvider::Execute_GetOutputPins(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UArticyOutputPinsProvider::StaticClass()));
	ArticyOutputPinsProvider_eventGetOutputPins_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UArticyOutputPinsProvider_GetOutputPins);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IArticyOutputPinsProvider*)(O->GetNativeInterfaceAddress(UArticyOutputPinsProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetOutputPins_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Blueprint callable event to retrieve output pins.\n\x09 *\n\x09 * This event provides the blueprint functionality to retrieve output pins.\n\x09 *\n\x09 * @return An array of UArticyOutputPin objects.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyOutputPinsProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Blueprint callable event to retrieve output pins.\n\nThis event provides the blueprint functionality to retrieve output pins.\n\n@return An array of UArticyOutputPin objects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyOutputPin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyOutputPinsProvider_eventGetOutputPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyOutputPinsProvider, nullptr, "GetOutputPins", nullptr, nullptr, Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::PropPointers), sizeof(ArticyOutputPinsProvider_eventGetOutputPins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::Function_MetaDataParams) };
static_assert(sizeof(ArticyOutputPinsProvider_eventGetOutputPins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyOutputPinsProvider::execGetOutputPins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyOutputPin*>*)Z_Param__Result=P_THIS->GetOutputPins_Implementation();
	P_NATIVE_END;
}
// End Interface UArticyOutputPinsProvider Function GetOutputPins

// Begin Interface UArticyOutputPinsProvider
void UArticyOutputPinsProvider::StaticRegisterNativesUArticyOutputPinsProvider()
{
	UClass* Class = UArticyOutputPinsProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOutputPins", &IArticyOutputPinsProvider::execGetOutputPins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyOutputPinsProvider);
UClass* Z_Construct_UClass_UArticyOutputPinsProvider_NoRegister()
{
	return UArticyOutputPinsProvider::StaticClass();
}
struct Z_Construct_UClass_UArticyOutputPinsProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/ArticyOutputPinsProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyOutputPinsProvider_GetOutputPins, "GetOutputPins" }, // 3321028345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyOutputPinsProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyOutputPinsProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyFlowObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutputPinsProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyOutputPinsProvider_Statics::ClassParams = {
	&UArticyOutputPinsProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutputPinsProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyOutputPinsProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyOutputPinsProvider()
{
	if (!Z_Registration_Info_UClass_UArticyOutputPinsProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyOutputPinsProvider.OuterSingleton, Z_Construct_UClass_UArticyOutputPinsProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyOutputPinsProvider.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyOutputPinsProvider>()
{
	return UArticyOutputPinsProvider::StaticClass();
}
UArticyOutputPinsProvider::UArticyOutputPinsProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyOutputPinsProvider);
UArticyOutputPinsProvider::~UArticyOutputPinsProvider() {}
// End Interface UArticyOutputPinsProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyOutputPinsProvider, UArticyOutputPinsProvider::StaticClass, TEXT("UArticyOutputPinsProvider"), &Z_Registration_Info_UClass_UArticyOutputPinsProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyOutputPinsProvider), 3593836391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_3065460557(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
