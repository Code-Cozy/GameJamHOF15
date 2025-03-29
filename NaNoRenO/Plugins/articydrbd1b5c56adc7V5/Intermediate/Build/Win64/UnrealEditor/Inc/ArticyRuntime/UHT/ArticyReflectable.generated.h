// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyReflectable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTICYRUNTIME_ArticyReflectable_generated_h
#error "ArticyReflectable.generated.h already included, missing '#pragma once' in ArticyReflectable.h"
#endif
#define ARTICYRUNTIME_ArticyReflectable_generated_h

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyReflectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyReflectable(UArticyReflectable&&); \
	UArticyReflectable(const UArticyReflectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyReflectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyReflectable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyReflectable) \
	NO_API virtual ~UArticyReflectable();


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyReflectable(); \
	friend struct Z_Construct_UClass_UArticyReflectable_Statics; \
public: \
	DECLARE_CLASS(UArticyReflectable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyReflectable)


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyReflectable() {} \
public: \
	typedef UArticyReflectable UClassType; \
	typedef IArticyReflectable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_15_PROLOG
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyReflectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyReflectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
