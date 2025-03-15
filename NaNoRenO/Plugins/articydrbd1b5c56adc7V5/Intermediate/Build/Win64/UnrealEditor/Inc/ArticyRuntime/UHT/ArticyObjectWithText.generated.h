// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyObjectWithText.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundWave;
#ifdef ARTICYRUNTIME_ArticyObjectWithText_generated_h
#error "ArticyObjectWithText.generated.h already included, missing '#pragma once' in ArticyObjectWithText.h"
#endif
#define ARTICYRUNTIME_ArticyObjectWithText_generated_h

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVOAsset); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARTICYRUNTIME_API UArticyObjectWithText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyObjectWithText(UArticyObjectWithText&&); \
	UArticyObjectWithText(const UArticyObjectWithText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARTICYRUNTIME_API, UArticyObjectWithText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyObjectWithText); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyObjectWithText) \
	ARTICYRUNTIME_API virtual ~UArticyObjectWithText();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyObjectWithText(); \
	friend struct Z_Construct_UClass_UArticyObjectWithText_Statics; \
public: \
	DECLARE_CLASS(UArticyObjectWithText, UArticyObjectWith_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), ARTICYRUNTIME_API) \
	DECLARE_SERIALIZER(UArticyObjectWithText)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyObjectWithText() {} \
public: \
	typedef UArticyObjectWithText UClassType; \
	typedef IArticyObjectWithText ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_16_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyObjectWithText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
