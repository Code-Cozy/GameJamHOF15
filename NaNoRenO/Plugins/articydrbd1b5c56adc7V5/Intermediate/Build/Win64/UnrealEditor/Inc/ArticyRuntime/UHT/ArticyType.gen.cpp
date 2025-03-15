// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyType() {}

// Begin Cross Module References
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyEnumValueInfo();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyPropertyInfo();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyType();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin ScriptStruct FArticyEnumValueInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo;
class UScriptStruct* FArticyEnumValueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyEnumValueInfo, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyEnumValueInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyEnumValueInfo>()
{
	return FArticyEnumValueInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocaKey_DisplayName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocaKey_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyEnumValueInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyEnumValueInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_LocaKey_DisplayName = { "LocaKey_DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyEnumValueInfo, LocaKey_DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocaKey_DisplayName_MetaData), NewProp_LocaKey_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyEnumValueInfo, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyEnumValueInfo, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_LocaKey_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyEnumValueInfo",
	Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::PropPointers),
	sizeof(FArticyEnumValueInfo),
	alignof(FArticyEnumValueInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyEnumValueInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo.InnerSingleton, Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo.InnerSingleton;
}
// End ScriptStruct FArticyEnumValueInfo

// Begin ScriptStruct FArticyPropertyInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyPropertyInfo;
class UScriptStruct* FArticyPropertyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPropertyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyPropertyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyPropertyInfo, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyPropertyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyPropertyInfo.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyPropertyInfo>()
{
	return FArticyPropertyInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTemplateProperty_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocaKey_DisplayName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Constraints_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Constraints_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Constraints;
	static void NewProp_IsTemplateProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTemplateProperty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocaKey_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyPropertyInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_Constraints_ValueProp = { "Constraints", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_Constraints_Key_KeyProp = { "Constraints_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyInfo, Constraints), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) };
void Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_IsTemplateProperty_SetBit(void* Obj)
{
	((FArticyPropertyInfo*)Obj)->IsTemplateProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_IsTemplateProperty = { "IsTemplateProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyPropertyInfo), &Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_IsTemplateProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTemplateProperty_MetaData), NewProp_IsTemplateProperty_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_LocaKey_DisplayName = { "LocaKey_DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyInfo, LocaKey_DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocaKey_DisplayName_MetaData), NewProp_LocaKey_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyInfo, PropertyType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyType_MetaData), NewProp_PropertyType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyPropertyInfo, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_Constraints_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_Constraints_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_IsTemplateProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_LocaKey_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_PropertyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewProp_TechnicalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyPropertyInfo",
	Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::PropPointers),
	sizeof(FArticyPropertyInfo),
	alignof(FArticyPropertyInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyPropertyInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyPropertyInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyPropertyInfo.InnerSingleton, Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyPropertyInfo.InnerSingleton;
}
// End ScriptStruct FArticyPropertyInfo

// Begin ScriptStruct FArticyType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyType;
class UScriptStruct* FArticyType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyType, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyType"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyType.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyType>()
{
	return FArticyType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumValues_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasTemplate_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEnum_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocaKey_DisplayName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnumValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Features_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Features;
	static void NewProp_HasTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasTemplate;
	static void NewProp_IsEnum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocaKey_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyType, CPPType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPType_MetaData), NewProp_CPPType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_EnumValues_Inner = { "EnumValues", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyEnumValueInfo, METADATA_PARAMS(0, nullptr) }; // 1875205216
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_EnumValues = { "EnumValues", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyType, EnumValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumValues_MetaData), NewProp_EnumValues_MetaData) }; // 1875205216
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyType, Features), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Features_MetaData), NewProp_Features_MetaData) };
void Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_HasTemplate_SetBit(void* Obj)
{
	((FArticyType*)Obj)->HasTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_HasTemplate = { "HasTemplate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyType), &Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_HasTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasTemplate_MetaData), NewProp_HasTemplate_MetaData) };
void Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_IsEnum_SetBit(void* Obj)
{
	((FArticyType*)Obj)->IsEnum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_IsEnum = { "IsEnum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyType), &Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_IsEnum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEnum_MetaData), NewProp_IsEnum_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_LocaKey_DisplayName = { "LocaKey_DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyType, LocaKey_DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocaKey_DisplayName_MetaData), NewProp_LocaKey_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyPropertyInfo, METADATA_PARAMS(0, nullptr) }; // 1065910148
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyType, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 1065910148
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyType, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_CPPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_EnumValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_EnumValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Features_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Features,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_HasTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_IsEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_LocaKey_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Properties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyType_Statics::NewProp_TechnicalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyType",
	Z_Construct_UScriptStruct_FArticyType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyType_Statics::PropPointers),
	sizeof(FArticyType),
	alignof(FArticyType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyType()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyType.InnerSingleton, Z_Construct_UScriptStruct_FArticyType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyType.InnerSingleton;
}
// End ScriptStruct FArticyType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyEnumValueInfo::StaticStruct, Z_Construct_UScriptStruct_FArticyEnumValueInfo_Statics::NewStructOps, TEXT("ArticyEnumValueInfo"), &Z_Registration_Info_UScriptStruct_ArticyEnumValueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyEnumValueInfo), 1875205216U) },
		{ FArticyPropertyInfo::StaticStruct, Z_Construct_UScriptStruct_FArticyPropertyInfo_Statics::NewStructOps, TEXT("ArticyPropertyInfo"), &Z_Registration_Info_UScriptStruct_ArticyPropertyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyPropertyInfo), 1065910148U) },
		{ FArticyType::StaticStruct, Z_Construct_UScriptStruct_FArticyType_Statics::NewStructOps, TEXT("ArticyType"), &Z_Registration_Info_UScriptStruct_ArticyType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyType), 2228801209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyType_h_2178772737(TEXT("/Script/ArticyRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
