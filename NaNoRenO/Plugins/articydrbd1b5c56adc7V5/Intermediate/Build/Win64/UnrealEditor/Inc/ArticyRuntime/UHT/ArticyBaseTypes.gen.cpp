// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyBaseTypes() {}

// Begin Cross Module References
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyMultiLanguageString();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyRect();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticySize();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyStdString();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin ScriptStruct FArticyId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyId;
class UScriptStruct* FArticyId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyId, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyId"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyId.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyId>()
{
	return FArticyId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * 64-bit ID used for referencing Articy objects, exposable to blueprints.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "64-bit ID used for referencing Articy objects, exposable to blueprints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Low_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The lower 32 bit of the ID. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The lower 32 bit of the ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_High_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The higher 32 bit of the ID. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The higher 32 bit of the ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Low;
	static const UECodeGen_Private::FIntPropertyParams NewProp_High;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArticyId_Statics::NewProp_Low = { "Low", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyId, Low), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Low_MetaData), NewProp_Low_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArticyId_Statics::NewProp_High = { "High", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyId, High), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_High_MetaData), NewProp_High_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyId_Statics::NewProp_Low,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyId_Statics::NewProp_High,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyId",
	Z_Construct_UScriptStruct_FArticyId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyId_Statics::PropPointers),
	sizeof(FArticyId),
	alignof(FArticyId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyId()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyId.InnerSingleton, Z_Construct_UScriptStruct_FArticyId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyId.InnerSingleton;
}
// End ScriptStruct FArticyId

// Begin ScriptStruct FArticySize
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticySize;
class UScriptStruct* FArticySize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticySize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticySize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticySize, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticySize"));
	}
	return Z_Registration_Info_UScriptStruct_ArticySize.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticySize>()
{
	return FArticySize::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticySize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A size given as width and height.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A size given as width and height." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The width of the size. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width of the size." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_h_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The height of the size. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height of the size." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_h;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticySize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticySize_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticySize, w), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_w_MetaData), NewProp_w_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticySize_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticySize, h), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_h_MetaData), NewProp_h_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticySize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticySize_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticySize_Statics::NewProp_h,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticySize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticySize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticySize",
	Z_Construct_UScriptStruct_FArticySize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticySize_Statics::PropPointers),
	sizeof(FArticySize),
	alignof(FArticySize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticySize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticySize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticySize()
{
	if (!Z_Registration_Info_UScriptStruct_ArticySize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticySize.InnerSingleton, Z_Construct_UScriptStruct_FArticySize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticySize.InnerSingleton;
}
// End ScriptStruct FArticySize

// Begin ScriptStruct FArticyRect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyRect;
class UScriptStruct* FArticyRect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyRect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyRect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyRect, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyRect"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyRect.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyRect>()
{
	return FArticyRect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyRect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A rectangle with x/y position and w/h dimensions.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A rectangle with x/y position and w/h dimensions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The x position of the rectangle. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The x position of the rectangle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The y position of the rectangle. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The y position of the rectangle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The width of the rectangle. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width of the rectangle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_h_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The height of the rectangle. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height of the rectangle." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_h;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyRect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyRect, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyRect, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyRect, w), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_w_MetaData), NewProp_w_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyRect, h), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_h_MetaData), NewProp_h_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyRect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyRect_Statics::NewProp_h,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyRect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyRect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyRect",
	Z_Construct_UScriptStruct_FArticyRect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyRect_Statics::PropPointers),
	sizeof(FArticyRect),
	alignof(FArticyRect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyRect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyRect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyRect()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyRect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyRect.InnerSingleton, Z_Construct_UScriptStruct_FArticyRect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyRect.InnerSingleton;
}
// End ScriptStruct FArticyRect

// Begin Enum EArticyPreviewImageViewBoxModes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes;
static UEnum* EArticyPreviewImageViewBoxModes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("EArticyPreviewImageViewBoxModes"));
	}
	return Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes.OuterSingleton;
}
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyPreviewImageViewBoxModes>()
{
	return EArticyPreviewImageViewBoxModes_StaticEnum();
}
struct Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumeration of view box modes for preview images.\n */" },
#endif
		{ "Custom.Comment", "/**< Use the view box mode from the asset. */" },
		{ "Custom.Name", "EArticyPreviewImageViewBoxModes::Custom" },
		{ "Custom.ToolTip", "< Use the view box mode from the asset." },
		{ "FromAsset.Name", "EArticyPreviewImageViewBoxModes::FromAsset" },
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of view box modes for preview images." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArticyPreviewImageViewBoxModes::FromAsset", (int64)EArticyPreviewImageViewBoxModes::FromAsset },
		{ "EArticyPreviewImageViewBoxModes::Custom", (int64)EArticyPreviewImageViewBoxModes::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	"EArticyPreviewImageViewBoxModes",
	"EArticyPreviewImageViewBoxModes",
	Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes()
{
	if (!Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes.InnerSingleton, Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes.InnerSingleton;
}
// End Enum EArticyPreviewImageViewBoxModes

// Begin Enum EArticyLocationAnchorSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArticyLocationAnchorSize;
static UEnum* EArticyLocationAnchorSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArticyLocationAnchorSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArticyLocationAnchorSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("EArticyLocationAnchorSize"));
	}
	return Z_Registration_Info_UEnum_EArticyLocationAnchorSize.OuterSingleton;
}
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyLocationAnchorSize>()
{
	return EArticyLocationAnchorSize_StaticEnum();
}
struct Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumeration of location anchor sizes.\n */" },
#endif
		{ "Large.Comment", "/**< Medium anchor size. */" },
		{ "Large.Name", "EArticyLocationAnchorSize::Large" },
		{ "Large.ToolTip", "< Medium anchor size." },
		{ "Medium.Comment", "/**< Small anchor size. */" },
		{ "Medium.Name", "EArticyLocationAnchorSize::Medium" },
		{ "Medium.ToolTip", "< Small anchor size." },
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
		{ "Small.Name", "EArticyLocationAnchorSize::Small" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of location anchor sizes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArticyLocationAnchorSize::Small", (int64)EArticyLocationAnchorSize::Small },
		{ "EArticyLocationAnchorSize::Medium", (int64)EArticyLocationAnchorSize::Medium },
		{ "EArticyLocationAnchorSize::Large", (int64)EArticyLocationAnchorSize::Large },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	"EArticyLocationAnchorSize",
	"EArticyLocationAnchorSize",
	Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize()
{
	if (!Z_Registration_Info_UEnum_EArticyLocationAnchorSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArticyLocationAnchorSize.InnerSingleton, Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArticyLocationAnchorSize.InnerSingleton;
}
// End Enum EArticyLocationAnchorSize

// Begin ScriptStruct FArticyStdString
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyStdString;
class UScriptStruct* FArticyStdString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyStdString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyStdString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyStdString, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyStdString"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyStdString.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyStdString>()
{
	return FArticyStdString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyStdString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A string that is not localized.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A string that is not localized." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The text content of the string. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text content of the string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyStdString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArticyStdString_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyStdString, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyStdString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyStdString_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyStdString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyStdString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyStdString",
	Z_Construct_UScriptStruct_FArticyStdString_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyStdString_Statics::PropPointers),
	sizeof(FArticyStdString),
	alignof(FArticyStdString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyStdString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyStdString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyStdString()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyStdString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyStdString.InnerSingleton, Z_Construct_UScriptStruct_FArticyStdString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyStdString.InnerSingleton;
}
// End ScriptStruct FArticyStdString

// Begin ScriptStruct FArticyMultiLanguageString
static_assert(std::is_polymorphic<FArticyMultiLanguageString>() == std::is_polymorphic<FArticyStdString>(), "USTRUCT FArticyMultiLanguageString cannot be polymorphic unless super FArticyStdString is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString;
class UScriptStruct* FArticyMultiLanguageString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyMultiLanguageString, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyMultiLanguageString"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyMultiLanguageString>()
{
	return FArticyMultiLanguageString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyMultiLanguageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A string that is localized.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBaseTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A string that is localized." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyMultiLanguageString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyMultiLanguageString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	Z_Construct_UScriptStruct_FArticyStdString,
	&NewStructOps,
	"ArticyMultiLanguageString",
	nullptr,
	0,
	sizeof(FArticyMultiLanguageString),
	alignof(FArticyMultiLanguageString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyMultiLanguageString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyMultiLanguageString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyMultiLanguageString()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString.InnerSingleton, Z_Construct_UScriptStruct_FArticyMultiLanguageString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString.InnerSingleton;
}
// End ScriptStruct FArticyMultiLanguageString

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArticyPreviewImageViewBoxModes_StaticEnum, TEXT("EArticyPreviewImageViewBoxModes"), &Z_Registration_Info_UEnum_EArticyPreviewImageViewBoxModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3976122611U) },
		{ EArticyLocationAnchorSize_StaticEnum, TEXT("EArticyLocationAnchorSize"), &Z_Registration_Info_UEnum_EArticyLocationAnchorSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2772689302U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyId::StaticStruct, Z_Construct_UScriptStruct_FArticyId_Statics::NewStructOps, TEXT("ArticyId"), &Z_Registration_Info_UScriptStruct_ArticyId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyId), 4167114503U) },
		{ FArticySize::StaticStruct, Z_Construct_UScriptStruct_FArticySize_Statics::NewStructOps, TEXT("ArticySize"), &Z_Registration_Info_UScriptStruct_ArticySize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticySize), 3209222130U) },
		{ FArticyRect::StaticStruct, Z_Construct_UScriptStruct_FArticyRect_Statics::NewStructOps, TEXT("ArticyRect"), &Z_Registration_Info_UScriptStruct_ArticyRect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyRect), 2865939471U) },
		{ FArticyStdString::StaticStruct, Z_Construct_UScriptStruct_FArticyStdString_Statics::NewStructOps, TEXT("ArticyStdString"), &Z_Registration_Info_UScriptStruct_ArticyStdString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyStdString), 148209994U) },
		{ FArticyMultiLanguageString::StaticStruct, Z_Construct_UScriptStruct_FArticyMultiLanguageString_Statics::NewStructOps, TEXT("ArticyMultiLanguageString"), &Z_Registration_Info_UScriptStruct_ArticyMultiLanguageString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyMultiLanguageString), 1061341178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_842168611(TEXT("/Script/ArticyRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
