// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IArticyFlowObject;
class UArticyObject;
class UObject;
struct FArticyBranch;
struct FArticyGvName;
struct FArticyId;
struct FArticyRef;
#ifdef ARTICYRUNTIME_ArticyFunctionLibrary_generated_h
#error "ArticyFunctionLibrary.generated.h already included, missing '#pragma once' in ArticyFunctionLibrary.h"
#endif
#define ARTICYRUNTIME_ArticyFunctionLibrary_generated_h

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNodeSeenCounter); \
	DECLARE_FUNCTION(execGetNodeSeenCounter); \
	DECLARE_FUNCTION(execGetBranchTarget); \
	DECLARE_FUNCTION(execArticyGvName_MakeFromVariableAndNamespace); \
	DECLARE_FUNCTION(execArticyGvName_MakeFromFullName); \
	DECLARE_FUNCTION(execArticyId_IsValid); \
	DECLARE_FUNCTION(execArticyId_NotEqual); \
	DECLARE_FUNCTION(execArticyId_Equal); \
	DECLARE_FUNCTION(execArticyId_ToString); \
	DECLARE_FUNCTION(execArticyId_FromString); \
	DECLARE_FUNCTION(execArticyId_GetObject); \
	DECLARE_FUNCTION(execMatchesEffective); \
	DECLARE_FUNCTION(execMatchesRaw); \
	DECLARE_FUNCTION(execArticyRef_SetObjectId); \
	DECLARE_FUNCTION(execArticyRef_GetObjectId); \
	DECLARE_FUNCTION(execArticyRef_SetObject); \
	DECLARE_FUNCTION(execArticyRef_GetObject);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyFunctionLibrary(); \
	friend struct Z_Construct_UClass_UArticyFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UArticyFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyFunctionLibrary)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyFunctionLibrary(UArticyFunctionLibrary&&); \
	UArticyFunctionLibrary(const UArticyFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyFunctionLibrary) \
	NO_API virtual ~UArticyFunctionLibrary();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_15_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
