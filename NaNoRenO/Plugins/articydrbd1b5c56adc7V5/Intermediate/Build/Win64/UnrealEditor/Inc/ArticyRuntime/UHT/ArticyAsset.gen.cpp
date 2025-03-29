// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyAsset() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyAsset();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyAsset_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Enum EArticyAssetCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArticyAssetCategory;
static UEnum* EArticyAssetCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArticyAssetCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArticyAssetCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("EArticyAssetCategory"));
	}
	return Z_Registration_Info_UEnum_EArticyAssetCategory.OuterSingleton;
}
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyAssetCategory>()
{
	return EArticyAssetCategory_StaticEnum();
}
struct Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Flag to describe all assets, used when declaring supported assets. */" },
		{ "All.Name", "EArticyAssetCategory::All" },
		{ "All.ToolTip", "Flag to describe all assets, used when declaring supported assets." },
		{ "Audio.Comment", "/** All audio-related asset types. */" },
		{ "Audio.Name", "EArticyAssetCategory::Audio" },
		{ "Audio.ToolTip", "All audio-related asset types." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum to categorize different types of assets.\n */" },
#endif
		{ "Document.Comment", "/** All document-related asset types, such as TXT and DOC. */" },
		{ "Document.Name", "EArticyAssetCategory::Document" },
		{ "Document.ToolTip", "All document-related asset types, such as TXT and DOC." },
		{ "Image.Comment", "/** All image-related asset types, including icons and SVG. */" },
		{ "Image.Name", "EArticyAssetCategory::Image" },
		{ "Image.ToolTip", "All image-related asset types, including icons and SVG." },
		{ "Misc.Comment", "/** Miscellaneous asset types, such as OBJ, BLEND, FBX, etc. */" },
		{ "Misc.Name", "EArticyAssetCategory::Misc" },
		{ "Misc.ToolTip", "Miscellaneous asset types, such as OBJ, BLEND, FBX, etc." },
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
		{ "None.Name", "EArticyAssetCategory::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to categorize different types of assets." },
#endif
		{ "Video.Comment", "/** All video-related asset types. */" },
		{ "Video.Name", "EArticyAssetCategory::Video" },
		{ "Video.ToolTip", "All video-related asset types." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArticyAssetCategory::None", (int64)EArticyAssetCategory::None },
		{ "EArticyAssetCategory::Image", (int64)EArticyAssetCategory::Image },
		{ "EArticyAssetCategory::Video", (int64)EArticyAssetCategory::Video },
		{ "EArticyAssetCategory::Audio", (int64)EArticyAssetCategory::Audio },
		{ "EArticyAssetCategory::Document", (int64)EArticyAssetCategory::Document },
		{ "EArticyAssetCategory::Misc", (int64)EArticyAssetCategory::Misc },
		{ "EArticyAssetCategory::All", (int64)EArticyAssetCategory::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	"EArticyAssetCategory",
	"EArticyAssetCategory",
	Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory()
{
	if (!Z_Registration_Info_UEnum_EArticyAssetCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArticyAssetCategory.InnerSingleton, Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArticyAssetCategory.InnerSingleton;
}
// End Enum EArticyAssetCategory

// Begin Class UArticyAsset Function LoadAsFileMediaSource
struct Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics
{
	struct ArticyAsset_eventLoadAsFileMediaSource_Parms
	{
		UFileMediaSource* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Load Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loads the asset as a file media source.\n\x09 *\n\x09 * @return A pointer to the loaded UFileMediaSource, or nullptr if the asset could not be loaded as a file media source.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the asset as a file media source.\n\n@return A pointer to the loaded UFileMediaSource, or nullptr if the asset could not be loaded as a file media source." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyAsset_eventLoadAsFileMediaSource_Parms, ReturnValue), Z_Construct_UClass_UFileMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyAsset, nullptr, "LoadAsFileMediaSource", nullptr, nullptr, Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::ArticyAsset_eventLoadAsFileMediaSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::ArticyAsset_eventLoadAsFileMediaSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyAsset::execLoadAsFileMediaSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFileMediaSource**)Z_Param__Result=P_THIS->LoadAsFileMediaSource();
	P_NATIVE_END;
}
// End Class UArticyAsset Function LoadAsFileMediaSource

// Begin Class UArticyAsset Function LoadAsset
struct Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics
{
	struct ArticyAsset_eventLoadAsset_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Load Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loads the asset referenced by this Articy asset.\n\x09 *\n\x09 * @return A pointer to the loaded UObject, or nullptr if the asset could not be loaded.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the asset referenced by this Articy asset.\n\n@return A pointer to the loaded UObject, or nullptr if the asset could not be loaded." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyAsset_eventLoadAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyAsset, nullptr, "LoadAsset", nullptr, nullptr, Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::ArticyAsset_eventLoadAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::ArticyAsset_eventLoadAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyAsset_LoadAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyAsset_LoadAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyAsset::execLoadAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->LoadAsset();
	P_NATIVE_END;
}
// End Class UArticyAsset Function LoadAsset

// Begin Class UArticyAsset Function LoadAsSoundWave
struct Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics
{
	struct ArticyAsset_eventLoadAsSoundWave_Parms
	{
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Load Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loads the asset as a sound wave.\n\x09 *\n\x09 * @return A pointer to the loaded USoundWave, or nullptr if the asset could not be loaded as a sound wave.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the asset as a sound wave.\n\n@return A pointer to the loaded USoundWave, or nullptr if the asset could not be loaded as a sound wave." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyAsset_eventLoadAsSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyAsset, nullptr, "LoadAsSoundWave", nullptr, nullptr, Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::ArticyAsset_eventLoadAsSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::ArticyAsset_eventLoadAsSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyAsset::execLoadAsSoundWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=P_THIS->LoadAsSoundWave();
	P_NATIVE_END;
}
// End Class UArticyAsset Function LoadAsSoundWave

// Begin Class UArticyAsset Function LoadAsTexture
struct Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics
{
	struct ArticyAsset_eventLoadAsTexture_Parms
	{
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Load Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loads the asset as a texture.\n\x09 *\n\x09 * @return A pointer to the loaded UTexture, or nullptr if the asset could not be loaded as a texture.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the asset as a texture.\n\n@return A pointer to the loaded UTexture, or nullptr if the asset could not be loaded as a texture." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyAsset_eventLoadAsTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyAsset, nullptr, "LoadAsTexture", nullptr, nullptr, Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::ArticyAsset_eventLoadAsTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::ArticyAsset_eventLoadAsTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyAsset_LoadAsTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyAsset_LoadAsTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyAsset::execLoadAsTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->LoadAsTexture();
	P_NATIVE_END;
}
// End Class UArticyAsset Function LoadAsTexture

// Begin Class UArticyAsset Function LoadAsTexture2D
struct Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics
{
	struct ArticyAsset_eventLoadAsTexture2D_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Load Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loads the asset as a 2D texture.\n\x09 *\n\x09 * @return A pointer to the loaded UTexture2D, or nullptr if the asset could not be loaded as a 2D texture.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the asset as a 2D texture.\n\n@return A pointer to the loaded UTexture2D, or nullptr if the asset could not be loaded as a 2D texture." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyAsset_eventLoadAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyAsset, nullptr, "LoadAsTexture2D", nullptr, nullptr, Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::ArticyAsset_eventLoadAsTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::ArticyAsset_eventLoadAsTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyAsset::execLoadAsTexture2D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->LoadAsTexture2D();
	P_NATIVE_END;
}
// End Class UArticyAsset Function LoadAsTexture2D

// Begin Class UArticyAsset
void UArticyAsset::StaticRegisterNativesUArticyAsset()
{
	UClass* Class = UArticyAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadAsFileMediaSource", &UArticyAsset::execLoadAsFileMediaSource },
		{ "LoadAsset", &UArticyAsset::execLoadAsset },
		{ "LoadAsSoundWave", &UArticyAsset::execLoadAsSoundWave },
		{ "LoadAsTexture", &UArticyAsset::execLoadAsTexture },
		{ "LoadAsTexture2D", &UArticyAsset::execLoadAsTexture2D },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyAsset);
UClass* Z_Construct_UClass_UArticyAsset_NoRegister()
{
	return UArticyAsset::StaticClass();
}
struct Z_Construct_UClass_UArticyAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for all imported assets.\n */" },
#endif
		{ "IncludePath", "ArticyAsset.h" },
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all imported assets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetRef_MetaData[] = {
		{ "Category", "Meta Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The relative path of the referenced asset. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The relative path of the referenced asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Meta Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The category of the referenced asset. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The category of the referenced asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A transient pointer to the asset, used to cache the loaded asset. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A transient pointer to the asset, used to cache the loaded asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetRef;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyAsset_LoadAsFileMediaSource, "LoadAsFileMediaSource" }, // 1356889081
		{ &Z_Construct_UFunction_UArticyAsset_LoadAsset, "LoadAsset" }, // 3252282908
		{ &Z_Construct_UFunction_UArticyAsset_LoadAsSoundWave, "LoadAsSoundWave" }, // 3297854894
		{ &Z_Construct_UFunction_UArticyAsset_LoadAsTexture, "LoadAsTexture" }, // 406332217
		{ &Z_Construct_UFunction_UArticyAsset_LoadAsTexture2D, "LoadAsTexture2D" }, // 3929510546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyAsset_Statics::NewProp_AssetRef = { "AssetRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyAsset, AssetRef), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetRef_MetaData), NewProp_AssetRef_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArticyAsset_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArticyAsset_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyAsset, Category), Z_Construct_UEnum_ArticyRuntime_EArticyAssetCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 1736237018
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UArticyAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyAsset, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyAsset_Statics::NewProp_AssetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyAsset_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyAsset_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyAsset_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyAsset_Statics::ClassParams = {
	&UArticyAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyAsset()
{
	if (!Z_Registration_Info_UClass_UArticyAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyAsset.OuterSingleton, Z_Construct_UClass_UArticyAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyAsset.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyAsset>()
{
	return UArticyAsset::StaticClass();
}
UArticyAsset::UArticyAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyAsset);
UArticyAsset::~UArticyAsset() {}
// End Class UArticyAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArticyAssetCategory_StaticEnum, TEXT("EArticyAssetCategory"), &Z_Registration_Info_UEnum_EArticyAssetCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1736237018U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyAsset, UArticyAsset::StaticClass, TEXT("UArticyAsset"), &Z_Registration_Info_UClass_UArticyAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyAsset), 1048236016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_3000605087(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
