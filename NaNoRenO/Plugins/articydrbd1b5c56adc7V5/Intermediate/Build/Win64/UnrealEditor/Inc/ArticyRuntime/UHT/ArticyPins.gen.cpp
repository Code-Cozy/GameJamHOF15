// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyPins.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyPins() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyConditionProvider_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPin();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInputPin();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInputPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInstructionProvider_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutgoingConnection_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutputPin();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutputPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyFlowPin Function GetOwner
struct Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics
{
	struct ArticyFlowPin_eventGetOwner_Parms
	{
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyPins.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPin_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPin, nullptr, "GetOwner", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::ArticyFlowPin_eventGetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::ArticyFlowPin_eventGetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPin_GetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPin_GetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPin::execGetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetOwner();
	P_NATIVE_END;
}
// End Class UArticyFlowPin Function GetOwner

// Begin Class UArticyFlowPin
void UArticyFlowPin::StaticRegisterNativesUArticyFlowPin()
{
	UClass* Class = UArticyFlowPin::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwner", &UArticyFlowPin::execGetOwner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyFlowPin);
UClass* Z_Construct_UClass_UArticyFlowPin_NoRegister()
{
	return UArticyFlowPin::StaticClass();
}
struct Z_Construct_UClass_UArticyFlowPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A flow fragment input- or output pin.\n */" },
#endif
		{ "IncludePath", "ArticyPins.h" },
		{ "ModuleRelativePath", "Public/ArticyPins.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A flow fragment input- or output pin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The script fragment. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyPins.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The script fragment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Id of the object owning this pin. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyPins.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id of the object owning this pin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All outgoing connections. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyPins.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All outgoing connections." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyFlowPin_GetOwner, "GetOwner" }, // 3327969859
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyFlowPin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPin, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPin, Owner), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) }; // 4167114503
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyOutgoingConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPin, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyFlowPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPin_Statics::NewProp_Connections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyFlowPin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyPrimitive,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyFlowPin_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyFlowObject_NoRegister, (int32)VTABLE_OFFSET(UArticyFlowPin, IArticyFlowObject), false },  // 943041840
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyFlowPin_Statics::ClassParams = {
	&UArticyFlowPin::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyFlowPin_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPin_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPin_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyFlowPin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyFlowPin()
{
	if (!Z_Registration_Info_UClass_UArticyFlowPin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyFlowPin.OuterSingleton, Z_Construct_UClass_UArticyFlowPin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyFlowPin.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyFlowPin>()
{
	return UArticyFlowPin::StaticClass();
}
UArticyFlowPin::UArticyFlowPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyFlowPin);
UArticyFlowPin::~UArticyFlowPin() {}
// End Class UArticyFlowPin

// Begin Class UArticyInputPin
void UArticyInputPin::StaticRegisterNativesUArticyInputPin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyInputPin);
UClass* Z_Construct_UClass_UArticyInputPin_NoRegister()
{
	return UArticyInputPin::StaticClass();
}
struct Z_Construct_UClass_UArticyInputPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An input pin.\n */" },
#endif
		{ "IncludePath", "ArticyPins.h" },
		{ "ModuleRelativePath", "Public/ArticyPins.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An input pin." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyInputPin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyInputPin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyFlowPin,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInputPin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyInputPin_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyConditionProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyInputPin, IArticyConditionProvider), false },  // 1214385518
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyInputPin_Statics::ClassParams = {
	&UArticyInputPin::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInputPin_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyInputPin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyInputPin()
{
	if (!Z_Registration_Info_UClass_UArticyInputPin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyInputPin.OuterSingleton, Z_Construct_UClass_UArticyInputPin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyInputPin.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyInputPin>()
{
	return UArticyInputPin::StaticClass();
}
UArticyInputPin::UArticyInputPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyInputPin);
UArticyInputPin::~UArticyInputPin() {}
// End Class UArticyInputPin

// Begin Class UArticyOutputPin
void UArticyOutputPin::StaticRegisterNativesUArticyOutputPin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyOutputPin);
UClass* Z_Construct_UClass_UArticyOutputPin_NoRegister()
{
	return UArticyOutputPin::StaticClass();
}
struct Z_Construct_UClass_UArticyOutputPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An ouput pin.\n */" },
#endif
		{ "IncludePath", "ArticyPins.h" },
		{ "ModuleRelativePath", "Public/ArticyPins.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An ouput pin." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyOutputPin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyOutputPin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyFlowPin,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutputPin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyOutputPin_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyInstructionProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyOutputPin, IArticyInstructionProvider), false },  // 1219177634
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyOutputPin_Statics::ClassParams = {
	&UArticyOutputPin::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutputPin_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyOutputPin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyOutputPin()
{
	if (!Z_Registration_Info_UClass_UArticyOutputPin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyOutputPin.OuterSingleton, Z_Construct_UClass_UArticyOutputPin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyOutputPin.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyOutputPin>()
{
	return UArticyOutputPin::StaticClass();
}
UArticyOutputPin::UArticyOutputPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyOutputPin);
UArticyOutputPin::~UArticyOutputPin() {}
// End Class UArticyOutputPin

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPins_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyFlowPin, UArticyFlowPin::StaticClass, TEXT("UArticyFlowPin"), &Z_Registration_Info_UClass_UArticyFlowPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyFlowPin), 2378906577U) },
		{ Z_Construct_UClass_UArticyInputPin, UArticyInputPin::StaticClass, TEXT("UArticyInputPin"), &Z_Registration_Info_UClass_UArticyInputPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyInputPin), 328055808U) },
		{ Z_Construct_UClass_UArticyOutputPin, UArticyOutputPin::StaticClass, TEXT("UArticyOutputPin"), &Z_Registration_Info_UClass_UArticyOutputPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyOutputPin), 3509017957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPins_h_790973840(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPins_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPins_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
