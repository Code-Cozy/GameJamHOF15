// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyPackage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UArticyObject;
class UArticyObject;
struct FArticyId;
#ifdef ARTICYRUNTIME_ArticyPackage_generated_h
#error "ArticyPackage.generated.h already included, missing '#pragma once' in ArticyPackage.h"
#endif
#define ARTICYRUNTIME_ArticyPackage_generated_h

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetByTechnicalName); \
	DECLARE_FUNCTION(execGetAssetById); \
	DECLARE_FUNCTION(execGetAssetsDict); \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execAssetNum);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyPackage(); \
	friend struct Z_Construct_UClass_UArticyPackage_Statics; \
public: \
	DECLARE_CLASS(UArticyPackage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyPackage)


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyPackage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyPackage(UArticyPackage&&); \
	UArticyPackage(const UArticyPackage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyPackage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyPackage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyPackage) \
	NO_API virtual ~UArticyPackage();


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_13_PROLOG
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyPackage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyPackage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
