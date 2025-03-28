// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyObjectWithSpeaker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyObject;
struct FArticyId;
#ifdef ARTICYRUNTIME_ArticyObjectWithSpeaker_generated_h
#error "ArticyObjectWithSpeaker.generated.h already included, missing '#pragma once' in ArticyObjectWithSpeaker.h"
#endif
#define ARTICYRUNTIME_ArticyObjectWithSpeaker_generated_h

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSpeakerId); \
	DECLARE_FUNCTION(execSetSpeaker); \
	DECLARE_FUNCTION(execGetSpeakerId); \
	DECLARE_FUNCTION(execGetSpeaker);


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARTICYRUNTIME_API UArticyObjectWithSpeaker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyObjectWithSpeaker(UArticyObjectWithSpeaker&&); \
	UArticyObjectWithSpeaker(const UArticyObjectWithSpeaker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARTICYRUNTIME_API, UArticyObjectWithSpeaker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyObjectWithSpeaker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyObjectWithSpeaker) \
	ARTICYRUNTIME_API virtual ~UArticyObjectWithSpeaker();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyObjectWithSpeaker(); \
	friend struct Z_Construct_UClass_UArticyObjectWithSpeaker_Statics; \
public: \
	DECLARE_CLASS(UArticyObjectWithSpeaker, UArticyObjectWith_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), ARTICYRUNTIME_API) \
	DECLARE_SERIALIZER(UArticyObjectWithSpeaker)


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_GENERATED_UINTERFACE_BODY() \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyObjectWithSpeaker() {} \
public: \
	typedef UArticyObjectWithSpeaker UClassType; \
	typedef IArticyObjectWithSpeaker ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_14_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyObjectWithSpeaker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithSpeaker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
