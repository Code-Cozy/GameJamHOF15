// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyBaseObject.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
#include "ArticyRuntime/Public/ArticyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyBaseObject() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseFeature();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseFeature_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyReflectable_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyType();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyBaseObject Function GetArticyType
struct Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics
{
	struct ArticyBaseObject_eventGetArticyType_Parms
	{
		FArticyType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Articy type of this object.\n\x09 *\n\x09 * @return The FArticyType associated with this object.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Articy type of this object.\n\n@return The FArticyType associated with this object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyBaseObject_eventGetArticyType_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyType, METADATA_PARAMS(0, nullptr) }; // 2228801209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyBaseObject, nullptr, "GetArticyType", nullptr, nullptr, Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::ArticyBaseObject_eventGetArticyType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::ArticyBaseObject_eventGetArticyType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyBaseObject_GetArticyType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyBaseObject_GetArticyType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyBaseObject::execGetArticyType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyType*)Z_Param__Result=P_THIS->GetArticyType();
	P_NATIVE_END;
}
// End Class UArticyBaseObject Function GetArticyType

// Begin Class UArticyBaseObject Function GetPropertyText
struct Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics
{
	struct ArticyBaseObject_eventGetPropertyText_Parms
	{
		FText Property;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves a localized text property for this Articy object.\n\x09 *\n\x09 * @param Property The text property to localize.\n\x09 * @return A localized FText object.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves a localized text property for this Articy object.\n\n@param Property The text property to localize.\n@return A localized FText object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Property;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyBaseObject_eventGetPropertyText_Parms, Property), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyBaseObject_eventGetPropertyText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyBaseObject, nullptr, "GetPropertyText", nullptr, nullptr, Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::ArticyBaseObject_eventGetPropertyText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::ArticyBaseObject_eventGetPropertyText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyBaseObject_GetPropertyText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyBaseObject_GetPropertyText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyBaseObject::execGetPropertyText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Property);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetPropertyText(Z_Param_Property);
	P_NATIVE_END;
}
// End Class UArticyBaseObject Function GetPropertyText

// Begin Class UArticyBaseObject
void UArticyBaseObject::StaticRegisterNativesUArticyBaseObject()
{
	UClass* Class = UArticyBaseObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetArticyType", &UArticyBaseObject::execGetArticyType },
		{ "GetPropertyText", &UArticyBaseObject::execGetPropertyText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyBaseObject);
UClass* Z_Construct_UClass_UArticyBaseObject_NoRegister()
{
	return UArticyBaseObject::StaticClass();
}
struct Z_Construct_UClass_UArticyBaseObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for all Articy objects.\n */" },
#endif
		{ "IncludePath", "ArticyBaseObject.h" },
		{ "ModuleRelativePath", "Public/ArticyBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all Articy objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subobjects_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Objects that are dynamically created for this object during import (like Pins, Connections, etc.). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objects that are dynamically created for this object during import (like Pins, Connections, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasDeserialized_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initialized with false, changed to true by InitFromJson (and later by deserialization). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialized with false, changed to true by InitFromJson (and later by deserialization)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subobjects_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subobjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Subobjects;
	static void NewProp_bWasDeserialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasDeserialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyBaseObject_GetArticyType, "GetArticyType" }, // 231065194
		{ &Z_Construct_UFunction_UArticyBaseObject_GetPropertyText, "GetPropertyText" }, // 3535163092
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyBaseObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_Subobjects_ValueProp = { "Subobjects", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_Subobjects_Key_KeyProp = { "Subobjects_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_Subobjects = { "Subobjects", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyBaseObject, Subobjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subobjects_MetaData), NewProp_Subobjects_MetaData) }; // 4167114503
void Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_bWasDeserialized_SetBit(void* Obj)
{
	((UArticyBaseObject*)Obj)->bWasDeserialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_bWasDeserialized = { "bWasDeserialized", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyBaseObject), &Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_bWasDeserialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasDeserialized_MetaData), NewProp_bWasDeserialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyBaseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_Subobjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_Subobjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_Subobjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBaseObject_Statics::NewProp_bWasDeserialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyBaseObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyBaseObject_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyReflectable_NoRegister, (int32)VTABLE_OFFSET(UArticyBaseObject, IArticyReflectable), false },  // 3143690236
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyBaseObject_Statics::ClassParams = {
	&UArticyBaseObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyBaseObject_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseObject_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyBaseObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyBaseObject()
{
	if (!Z_Registration_Info_UClass_UArticyBaseObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyBaseObject.OuterSingleton, Z_Construct_UClass_UArticyBaseObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyBaseObject.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyBaseObject>()
{
	return UArticyBaseObject::StaticClass();
}
UArticyBaseObject::UArticyBaseObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyBaseObject);
UArticyBaseObject::~UArticyBaseObject() {}
// End Class UArticyBaseObject

// Begin Class UArticyBaseFeature
void UArticyBaseFeature::StaticRegisterNativesUArticyBaseFeature()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyBaseFeature);
UClass* Z_Construct_UClass_UArticyBaseFeature_NoRegister()
{
	return UArticyBaseFeature::StaticClass();
}
struct Z_Construct_UClass_UArticyBaseFeature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base class for all Feature classes. */" },
#endif
		{ "IncludePath", "ArticyBaseObject.h" },
		{ "ModuleRelativePath", "Public/ArticyBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all Feature classes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyBaseFeature>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyBaseFeature_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseFeature_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyBaseFeature_Statics::ClassParams = {
	&UArticyBaseFeature::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseFeature_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyBaseFeature_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyBaseFeature()
{
	if (!Z_Registration_Info_UClass_UArticyBaseFeature.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyBaseFeature.OuterSingleton, Z_Construct_UClass_UArticyBaseFeature_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyBaseFeature.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyBaseFeature>()
{
	return UArticyBaseFeature::StaticClass();
}
UArticyBaseFeature::UArticyBaseFeature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyBaseFeature);
UArticyBaseFeature::~UArticyBaseFeature() {}
// End Class UArticyBaseFeature

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyBaseObject, UArticyBaseObject::StaticClass, TEXT("UArticyBaseObject"), &Z_Registration_Info_UClass_UArticyBaseObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyBaseObject), 3928345130U) },
		{ Z_Construct_UClass_UArticyBaseFeature, UArticyBaseFeature::StaticClass, TEXT("UArticyBaseFeature"), &Z_Registration_Info_UClass_UArticyBaseFeature, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyBaseFeature), 441095503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseObject_h_3961598729(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
