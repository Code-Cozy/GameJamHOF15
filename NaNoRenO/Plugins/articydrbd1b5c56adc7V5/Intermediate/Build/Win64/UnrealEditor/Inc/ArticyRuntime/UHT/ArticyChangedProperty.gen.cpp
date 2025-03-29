// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyChangedProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyChangedProperty() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseObject_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyChangedProperty();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin ScriptStruct FArticyChangedProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyChangedProperty;
class UScriptStruct* FArticyChangedProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyChangedProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyChangedProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyChangedProperty, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyChangedProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyChangedProperty.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyChangedProperty>()
{
	return FArticyChangedProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyChangedProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArticyChangedProperty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReference_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyChangedProperty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyChangedProperty.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectReference;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyChangedProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::NewProp_ObjectReference = { "ObjectReference", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyChangedProperty, ObjectReference), Z_Construct_UClass_UArticyBaseObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectReference_MetaData), NewProp_ObjectReference_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyChangedProperty, Property), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::NewProp_ObjectReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::NewProp_Property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyChangedProperty",
	Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::PropPointers),
	sizeof(FArticyChangedProperty),
	alignof(FArticyChangedProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyChangedProperty()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyChangedProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyChangedProperty.InnerSingleton, Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyChangedProperty.InnerSingleton;
}
// End ScriptStruct FArticyChangedProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyChangedProperty_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyChangedProperty::StaticStruct, Z_Construct_UScriptStruct_FArticyChangedProperty_Statics::NewStructOps, TEXT("ArticyChangedProperty"), &Z_Registration_Info_UScriptStruct_ArticyChangedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyChangedProperty), 3109872081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyChangedProperty_h_1235692834(TEXT("/Script/ArticyRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyChangedProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyChangedProperty_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
