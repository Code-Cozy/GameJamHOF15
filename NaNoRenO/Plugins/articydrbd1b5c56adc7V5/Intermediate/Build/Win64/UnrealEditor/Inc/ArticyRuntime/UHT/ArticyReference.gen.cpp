// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyReference.h"
#include "ArticyRuntime/Public/ArticyRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyReference() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyReference();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyReference_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyRef();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyReference Function GetObject
struct Z_Construct_UFunction_UArticyReference_GetObject_Statics
{
	struct ArticyReference_eventGetObject_Parms
	{
		const UObject* WorldContext;
		UArticyPrimitive* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the ArticyPrimitive object that is referenced by this component.\n\x09 *\n\x09 * @param WorldContext The context used to obtain the Articy object.\n\x09 * @return A pointer to the ArticyPrimitive object if found, otherwise nullptr.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyReference.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the ArticyPrimitive object that is referenced by this component.\n\n@param WorldContext The context used to obtain the Articy object.\n@return A pointer to the ArticyPrimitive object if found, otherwise nullptr." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyReference_GetObject_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyReference_eventGetObject_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyReference_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyReference_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyReference_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyReference_GetObject_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyReference_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_GetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyReference_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyReference, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_UArticyReference_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyReference_GetObject_Statics::ArticyReference_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyReference_GetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyReference_GetObject_Statics::ArticyReference_eventGetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyReference_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyReference_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyReference::execGetObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyPrimitive**)Z_Param__Result=P_THIS->GetObject(Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class UArticyReference Function GetObject

// Begin Class UArticyReference Function IsValid
struct Z_Construct_UFunction_UArticyReference_IsValid_Statics
{
	struct ArticyReference_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the ID of the referenced object is valid.\n\x09 *\n\x09 * @return True if the referenced object's ID is valid (not zero), otherwise false.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyReference.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the ID of the referenced object is valid.\n\n@return True if the referenced object's ID is valid (not zero), otherwise false." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArticyReference_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyReference_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyReference_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyReference_eventIsValid_Parms), &Z_Construct_UFunction_UArticyReference_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyReference_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyReference_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyReference_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyReference, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UArticyReference_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyReference_IsValid_Statics::ArticyReference_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyReference_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyReference_IsValid_Statics::ArticyReference_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyReference_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyReference_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyReference::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// End Class UArticyReference Function IsValid

// Begin Class UArticyReference Function SetReference
struct Z_Construct_UFunction_UArticyReference_SetReference_Statics
{
	struct ArticyReference_eventSetReference_Parms
	{
		UArticyObject* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the reference to an Articy object.\n\x09 *\n\x09 * @param Object The Articy object to reference.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyReference.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the reference to an Articy object.\n\n@param Object The Articy object to reference." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyReference_SetReference_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyReference_eventSetReference_Parms, Object), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyReference_SetReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyReference_SetReference_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_SetReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyReference_SetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyReference, nullptr, "SetReference", nullptr, nullptr, Z_Construct_UFunction_UArticyReference_SetReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_SetReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyReference_SetReference_Statics::ArticyReference_eventSetReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyReference_SetReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyReference_SetReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyReference_SetReference_Statics::ArticyReference_eventSetReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyReference_SetReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyReference_SetReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyReference::execSetReference)
{
	P_GET_OBJECT(UArticyObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReference(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UArticyReference Function SetReference

// Begin Class UArticyReference
void UArticyReference::StaticRegisterNativesUArticyReference()
{
	UClass* Class = UArticyReference::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetObject", &UArticyReference::execGetObject },
		{ "IsValid", &UArticyReference::execIsValid },
		{ "SetReference", &UArticyReference::execSetReference },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyReference);
UClass* Z_Construct_UClass_UArticyReference_NoRegister()
{
	return UArticyReference::StaticClass();
}
struct Z_Construct_UClass_UArticyReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component to hold a single ArticyRef.\n * While ArticyRef can be used directly in scripts, UArticyReference is most useful in generated code\n * or as a straightforward way for designers to attach Articy objects to actors.\n */" },
#endif
		{ "IncludePath", "ArticyReference.h" },
		{ "ModuleRelativePath", "Public/ArticyReference.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component to hold a single ArticyRef.\nWhile ArticyRef can be used directly in scripts, UArticyReference is most useful in generated code\nor as a straightforward way for designers to attach Articy objects to actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reference_MetaData[] = {
		{ "Category", "Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The ArticyRef that this component holds.\n\x09 * This reference can be set to an ArticyObject and used to fetch or validate the referenced object.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyReference.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ArticyRef that this component holds.\nThis reference can be set to an ArticyObject and used to fetch or validate the referenced object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyReference_GetObject, "GetObject" }, // 2291416576
		{ &Z_Construct_UFunction_UArticyReference_IsValid, "IsValid" }, // 3004678299
		{ &Z_Construct_UFunction_UArticyReference_SetReference, "SetReference" }, // 2022131781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyReference>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyReference_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyReference, Reference), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reference_MetaData), NewProp_Reference_MetaData) }; // 321074496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyReference_Statics::NewProp_Reference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyReference_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyReference_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyReference_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyReference_Statics::ClassParams = {
	&UArticyReference::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyReference_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyReference_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyReference_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyReference()
{
	if (!Z_Registration_Info_UClass_UArticyReference.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyReference.OuterSingleton, Z_Construct_UClass_UArticyReference_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyReference.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyReference>()
{
	return UArticyReference::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyReference);
UArticyReference::~UArticyReference() {}
// End Class UArticyReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyReference_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyReference, UArticyReference::StaticClass, TEXT("UArticyReference"), &Z_Registration_Info_UClass_UArticyReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyReference), 2016728407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyReference_h_2828078735(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyReference_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
