// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyRef.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyRef() {}

// Begin Cross Module References
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyRef();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin ScriptStruct FArticyRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyRef;
class UScriptStruct* FArticyRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyRef, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyRef"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyRef.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyRef>()
{
	return FArticyRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArticyRef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceBaseObject_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ArticyRef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloneId_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The currently assigned clone ID. Use */" },
#endif
		{ "EditCondition", "!bReferenceBaseObject" },
		{ "ModuleRelativePath", "Public/ArticyRef.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The currently assigned clone ID. Use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The actual reference: we keep track of the Reference's Id.\n\x09 * Set to EditAnywhere here to allow for a hack in manipulating properties\n\x09 * Set to disabled in the ArticyRefCustomization so that the user can't edit it directly\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyRef.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual reference: we keep track of the Reference's Id.\nSet to EditAnywhere here to allow for a hack in manipulating properties\nSet to disabled in the ArticyRefCustomization so that the user can't edit it directly" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReferenceBaseObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceBaseObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CloneId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_bReferenceBaseObject_SetBit(void* Obj)
{
	((FArticyRef*)Obj)->bReferenceBaseObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_bReferenceBaseObject = { "bReferenceBaseObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyRef), &Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_bReferenceBaseObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReferenceBaseObject_MetaData), NewProp_bReferenceBaseObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_CloneId = { "CloneId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyRef, CloneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloneId_MetaData), NewProp_CloneId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyRef, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_bReferenceBaseObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_CloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyRef_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyRef",
	Z_Construct_UScriptStruct_FArticyRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyRef_Statics::PropPointers),
	sizeof(FArticyRef),
	alignof(FArticyRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyRef()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyRef.InnerSingleton, Z_Construct_UScriptStruct_FArticyRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyRef.InnerSingleton;
}
// End ScriptStruct FArticyRef

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyRef_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyRef::StaticStruct, Z_Construct_UScriptStruct_FArticyRef_Statics::NewStructOps, TEXT("ArticyRef"), &Z_Registration_Info_UScriptStruct_ArticyRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyRef), 321074496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyRef_h_1441626749(TEXT("/Script/ArticyRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyRef_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyRef_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
