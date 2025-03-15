// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyObjectWithVertices.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTICYRUNTIME_ArticyObjectWithVertices_generated_h
#error "ArticyObjectWithVertices.generated.h already included, missing '#pragma once' in ArticyObjectWithVertices.h"
#endif
#define ARTICYRUNTIME_ArticyObjectWithVertices_generated_h

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVertices); \
	DECLARE_FUNCTION(execGetVertices);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARTICYRUNTIME_API UArticyObjectWithVertices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyObjectWithVertices(UArticyObjectWithVertices&&); \
	UArticyObjectWithVertices(const UArticyObjectWithVertices&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARTICYRUNTIME_API, UArticyObjectWithVertices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyObjectWithVertices); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyObjectWithVertices) \
	ARTICYRUNTIME_API virtual ~UArticyObjectWithVertices();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyObjectWithVertices(); \
	friend struct Z_Construct_UClass_UArticyObjectWithVertices_Statics; \
public: \
	DECLARE_CLASS(UArticyObjectWithVertices, UArticyObjectWith_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), ARTICYRUNTIME_API) \
	DECLARE_SERIALIZER(UArticyObjectWithVertices)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyObjectWithVertices() {} \
public: \
	typedef UArticyObjectWithVertices UClassType; \
	typedef IArticyObjectWithVertices ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_10_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyObjectWithVertices>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithVertices_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
