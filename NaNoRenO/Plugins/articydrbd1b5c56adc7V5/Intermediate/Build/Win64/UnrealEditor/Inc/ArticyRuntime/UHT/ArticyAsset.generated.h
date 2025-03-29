// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFileMediaSource;
class UObject;
class USoundWave;
class UTexture2D;
class UTexture;
#ifdef ARTICYRUNTIME_ArticyAsset_generated_h
#error "ArticyAsset.generated.h already included, missing '#pragma once' in ArticyAsset.h"
#endif
#define ARTICYRUNTIME_ArticyAsset_generated_h

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadAsFileMediaSource); \
	DECLARE_FUNCTION(execLoadAsSoundWave); \
	DECLARE_FUNCTION(execLoadAsTexture2D); \
	DECLARE_FUNCTION(execLoadAsTexture); \
	DECLARE_FUNCTION(execLoadAsset);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyAsset(); \
	friend struct Z_Construct_UClass_UArticyAsset_Statics; \
public: \
	DECLARE_CLASS(UArticyAsset, UArticyObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyAsset)


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyAsset(UArticyAsset&&); \
	UArticyAsset(const UArticyAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyAsset) \
	NO_API virtual ~UArticyAsset();


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_40_PROLOG
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_43_INCLASS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyAsset_h


#define FOREACH_ENUM_EARTICYASSETCATEGORY(op) \
	op(EArticyAssetCategory::None) \
	op(EArticyAssetCategory::Image) \
	op(EArticyAssetCategory::Video) \
	op(EArticyAssetCategory::Audio) \
	op(EArticyAssetCategory::Document) \
	op(EArticyAssetCategory::Misc) \
	op(EArticyAssetCategory::All) 

enum class EArticyAssetCategory : uint8;
template<> struct TIsUEnumClass<EArticyAssetCategory> { enum { Value = true }; };
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyAssetCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
