// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyConditionProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyGlobalVariables;
class UObject;
#ifdef ARTICYRUNTIME_ArticyConditionProvider_generated_h
#error "ArticyConditionProvider.generated.h already included, missing '#pragma once' in ArticyConditionProvider.h"
#endif
#define ARTICYRUNTIME_ArticyConditionProvider_generated_h

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEvaluate);


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyConditionProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyConditionProvider(UArticyConditionProvider&&); \
	UArticyConditionProvider(const UArticyConditionProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyConditionProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyConditionProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyConditionProvider) \
	NO_API virtual ~UArticyConditionProvider();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyConditionProvider(); \
	friend struct Z_Construct_UClass_UArticyConditionProvider_Statics; \
public: \
	DECLARE_CLASS(UArticyConditionProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyConditionProvider)


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_GENERATED_UINTERFACE_BODY() \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyConditionProvider() {} \
public: \
	typedef UArticyConditionProvider UClassType; \
	typedef IArticyConditionProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_10_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyConditionProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyConditionProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
