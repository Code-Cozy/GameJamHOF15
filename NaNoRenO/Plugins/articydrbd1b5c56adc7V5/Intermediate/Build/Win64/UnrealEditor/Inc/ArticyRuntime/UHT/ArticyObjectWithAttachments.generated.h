// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyObjectWithAttachments.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyPrimitive;
struct FArticyId;
#ifdef ARTICYRUNTIME_ArticyObjectWithAttachments_generated_h
#error "ArticyObjectWithAttachments.generated.h already included, missing '#pragma once' in ArticyObjectWithAttachments.h"
#endif
#define ARTICYRUNTIME_ArticyObjectWithAttachments_generated_h

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAttachments); \
	DECLARE_FUNCTION(execSetAttachmentIds); \
	DECLARE_FUNCTION(execGetAttachments); \
	DECLARE_FUNCTION(execGetAttachmentIds);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARTICYRUNTIME_API UArticyObjectWithAttachments(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyObjectWithAttachments(UArticyObjectWithAttachments&&); \
	UArticyObjectWithAttachments(const UArticyObjectWithAttachments&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARTICYRUNTIME_API, UArticyObjectWithAttachments); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyObjectWithAttachments); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyObjectWithAttachments) \
	ARTICYRUNTIME_API virtual ~UArticyObjectWithAttachments();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyObjectWithAttachments(); \
	friend struct Z_Construct_UClass_UArticyObjectWithAttachments_Statics; \
public: \
	DECLARE_CLASS(UArticyObjectWithAttachments, UArticyObjectWith_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), ARTICYRUNTIME_API) \
	DECLARE_SERIALIZER(UArticyObjectWithAttachments)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyObjectWithAttachments() {} \
public: \
	typedef UArticyObjectWithAttachments UClassType; \
	typedef IArticyObjectWithAttachments ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_12_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyObjectWithAttachments>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyObjectWithAttachments_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
