// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyObjectWithStageDirections.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTICYRUNTIME_ArticyObjectWithStageDirections_generated_h
#error "ArticyObjectWithStageDirections.generated.h already included, missing '#pragma once' in ArticyObjectWithStageDirections.h"
#endif
#define ARTICYRUNTIME_ArticyObjectWithStageDirections_generated_h

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStageDirections); \
	DECLARE_FUNCTION(execGetStageDirections);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARTICYRUNTIME_API UArticyObjectWithStageDirections(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyObjectWithStageDirections(UArticyObjectWithStageDirections&&); \
	UArticyObjectWithStageDirections(const UArticyObjectWithStageDirections&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARTICYRUNTIME_API, UArticyObjectWithStageDirections); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyObjectWithStageDirections); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyObjectWithStageDirections) \
	ARTICYRUNTIME_API virtual ~UArticyObjectWithStageDirections();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyObjectWithStageDirections(); \
	friend struct Z_Construct_UClass_UArticyObjectWithStageDirections_Statics; \
public: \
	DECLARE_CLASS(UArticyObjectWithStageDirections, UArticyObjectWith_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), ARTICYRUNTIME_API) \
	DECLARE_SERIALIZER(UArticyObjectWithStageDirections)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyObjectWithStageDirections() {} \
public: \
	typedef UArticyObjectWithStageDirections UClassType; \
	typedef IArticyObjectWithStageDirections ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_10_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyObjectWithStageDirections>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithStageDirections_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
