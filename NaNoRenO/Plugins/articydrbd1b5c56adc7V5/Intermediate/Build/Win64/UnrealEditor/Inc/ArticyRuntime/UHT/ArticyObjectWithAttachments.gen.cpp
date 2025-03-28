// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyObjectWithAttachments.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyObjectWithAttachments() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWith_Base();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithAttachments();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObjectWithAttachments_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyObjectWithAttachments Function GetAttachmentIds
struct Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics
{
	struct ArticyObjectWithAttachments_eventGetAttachmentIds_Parms
	{
		TArray<FArticyId> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithAttachments" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithAttachments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithAttachments_eventGetAttachmentIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithAttachments, nullptr, "GetAttachmentIds", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::ArticyObjectWithAttachments_eventGetAttachmentIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::ArticyObjectWithAttachments_eventGetAttachmentIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithAttachments::execGetAttachmentIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FArticyId>*)Z_Param__Result=P_THIS->GetAttachmentIds();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithAttachments Function GetAttachmentIds

// Begin Interface UArticyObjectWithAttachments Function GetAttachments
struct Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics
{
	struct ArticyObjectWithAttachments_eventGetAttachments_Parms
	{
		TArray<UArticyPrimitive*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithAttachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns an array with a pointer to the referenced attachment objects.\n\x09 * NOTE: References that cannot be resolved (i.e. nullptr) are not contained.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithAttachments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array with a pointer to the referenced attachment objects.\nNOTE: References that cannot be resolved (i.e. nullptr) are not contained." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithAttachments_eventGetAttachments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithAttachments, nullptr, "GetAttachments", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::ArticyObjectWithAttachments_eventGetAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::ArticyObjectWithAttachments_eventGetAttachments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithAttachments::execGetAttachments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyPrimitive*>*)Z_Param__Result=P_THIS->GetAttachments();
	P_NATIVE_END;
}
// End Interface UArticyObjectWithAttachments Function GetAttachments

// Begin Interface UArticyObjectWithAttachments Function SetAttachmentIds
struct Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics
{
	struct ArticyObjectWithAttachments_eventSetAttachmentIds_Parms
	{
		TArray<FArticyId> IDs;
		TArray<FArticyId> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithAttachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithAttachments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithAttachments_eventSetAttachmentIds_Parms, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDs_MetaData), NewProp_IDs_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithAttachments_eventSetAttachmentIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_IDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_IDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithAttachments, nullptr, "SetAttachmentIds", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::ArticyObjectWithAttachments_eventSetAttachmentIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::ArticyObjectWithAttachments_eventSetAttachmentIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithAttachments::execSetAttachmentIds)
{
	P_GET_TARRAY_REF(FArticyId,Z_Param_Out_IDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FArticyId>*)Z_Param__Result=P_THIS->SetAttachmentIds(Z_Param_Out_IDs);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithAttachments Function SetAttachmentIds

// Begin Interface UArticyObjectWithAttachments Function SetAttachments
struct Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics
{
	struct ArticyObjectWithAttachments_eventSetAttachments_Parms
	{
		TArray<UArticyPrimitive*> Objects;
		TArray<UArticyPrimitive*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyObjectWithAttachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NOTE: Cannot return a reference to the array stored in the\n\x09 * object, as that one does not exist!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithAttachments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: Cannot return a reference to the array stored in the\nobject, as that one does not exist!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithAttachments_eventSetAttachments_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyObjectWithAttachments_eventSetAttachments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyObjectWithAttachments, nullptr, "SetAttachments", nullptr, nullptr, Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::ArticyObjectWithAttachments_eventSetAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::ArticyObjectWithAttachments_eventSetAttachments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IArticyObjectWithAttachments::execSetAttachments)
{
	P_GET_TARRAY_REF(UArticyPrimitive*,Z_Param_Out_Objects);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyPrimitive*>*)Z_Param__Result=P_THIS->SetAttachments(Z_Param_Out_Objects);
	P_NATIVE_END;
}
// End Interface UArticyObjectWithAttachments Function SetAttachments

// Begin Interface UArticyObjectWithAttachments
void UArticyObjectWithAttachments::StaticRegisterNativesUArticyObjectWithAttachments()
{
	UClass* Class = UArticyObjectWithAttachments::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttachmentIds", &IArticyObjectWithAttachments::execGetAttachmentIds },
		{ "GetAttachments", &IArticyObjectWithAttachments::execGetAttachments },
		{ "SetAttachmentIds", &IArticyObjectWithAttachments::execSetAttachmentIds },
		{ "SetAttachments", &IArticyObjectWithAttachments::execSetAttachments },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyObjectWithAttachments);
UClass* Z_Construct_UClass_UArticyObjectWithAttachments_NoRegister()
{
	return UArticyObjectWithAttachments::StaticClass();
}
struct Z_Construct_UClass_UArticyObjectWithAttachments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyObjectWithAttachments.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachmentIds, "GetAttachmentIds" }, // 160765239
		{ &Z_Construct_UFunction_UArticyObjectWithAttachments_GetAttachments, "GetAttachments" }, // 820991758
		{ &Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachmentIds, "SetAttachmentIds" }, // 2842269118
		{ &Z_Construct_UFunction_UArticyObjectWithAttachments_SetAttachments, "SetAttachments" }, // 4189221760
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyObjectWithAttachments>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyObjectWithAttachments_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObjectWith_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithAttachments_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyObjectWithAttachments_Statics::ClassParams = {
	&UArticyObjectWithAttachments::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyObjectWithAttachments_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyObjectWithAttachments_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyObjectWithAttachments()
{
	if (!Z_Registration_Info_UClass_UArticyObjectWithAttachments.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyObjectWithAttachments.OuterSingleton, Z_Construct_UClass_UArticyObjectWithAttachments_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyObjectWithAttachments.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyObjectWithAttachments>()
{
	return UArticyObjectWithAttachments::StaticClass();
}
UArticyObjectWithAttachments::UArticyObjectWithAttachments(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyObjectWithAttachments);
UArticyObjectWithAttachments::~UArticyObjectWithAttachments() {}
// End Interface UArticyObjectWithAttachments

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyObjectWithAttachments, UArticyObjectWithAttachments::StaticClass, TEXT("UArticyObjectWithAttachments"), &Z_Registration_Info_UClass_UArticyObjectWithAttachments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyObjectWithAttachments), 2257183953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_557755695(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
