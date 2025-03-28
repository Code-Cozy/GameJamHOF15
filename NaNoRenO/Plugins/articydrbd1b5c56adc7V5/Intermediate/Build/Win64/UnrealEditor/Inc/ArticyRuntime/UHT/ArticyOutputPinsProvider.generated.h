// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyOutputPinsProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyOutputPin;
#ifdef ARTICYRUNTIME_ArticyOutputPinsProvider_generated_h
#error "ArticyOutputPinsProvider.generated.h already included, missing '#pragma once' in ArticyOutputPinsProvider.h"
#endif
#define ARTICYRUNTIME_ArticyOutputPinsProvider_generated_h

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOutputPins);


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_CALLBACK_WRAPPERS
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyOutputPinsProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyOutputPinsProvider(UArticyOutputPinsProvider&&); \
	UArticyOutputPinsProvider(const UArticyOutputPinsProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyOutputPinsProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyOutputPinsProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyOutputPinsProvider) \
	NO_API virtual ~UArticyOutputPinsProvider();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyOutputPinsProvider(); \
	friend struct Z_Construct_UClass_UArticyOutputPinsProvider_Statics; \
public: \
	DECLARE_CLASS(UArticyOutputPinsProvider, UArticyFlowObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyOutputPinsProvider)


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_GENERATED_UINTERFACE_BODY() \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyOutputPinsProvider() {} \
public: \
	typedef UArticyOutputPinsProvider UClassType; \
	typedef IArticyOutputPinsProvider ThisClass; \
	static TArray<UArticyOutputPin*> Execute_GetOutputPins(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_18_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_CALLBACK_WRAPPERS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyOutputPinsProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyOutputPinsProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
