// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyInputPinsProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyInputPin;
#ifdef ARTICYRUNTIME_ArticyInputPinsProvider_generated_h
#error "ArticyInputPinsProvider.generated.h already included, missing '#pragma once' in ArticyInputPinsProvider.h"
#endif
#define ARTICYRUNTIME_ArticyInputPinsProvider_generated_h

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputPins);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_CALLBACK_WRAPPERS
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyInputPinsProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyInputPinsProvider(UArticyInputPinsProvider&&); \
	UArticyInputPinsProvider(const UArticyInputPinsProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyInputPinsProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyInputPinsProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyInputPinsProvider) \
	NO_API virtual ~UArticyInputPinsProvider();


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyInputPinsProvider(); \
	friend struct Z_Construct_UClass_UArticyInputPinsProvider_Statics; \
public: \
	DECLARE_CLASS(UArticyInputPinsProvider, UArticyFlowObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyInputPinsProvider)


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyInputPinsProvider() {} \
public: \
	typedef UArticyInputPinsProvider UClassType; \
	typedef IArticyInputPinsProvider ThisClass; \
	static TArray<UArticyInputPin*> Execute_GetInputPins(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_19_PROLOG
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_CALLBACK_WRAPPERS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyInputPinsProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyInputPinsProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
