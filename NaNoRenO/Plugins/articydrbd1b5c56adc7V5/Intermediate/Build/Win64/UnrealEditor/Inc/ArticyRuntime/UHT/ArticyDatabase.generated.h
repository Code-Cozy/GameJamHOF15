// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyExpressoScripts;
class UArticyObject;
class UObject;
struct FArticyId;
#ifdef ARTICYRUNTIME_ArticyDatabase_generated_h
#error "ArticyDatabase.generated.h already included, missing '#pragma once' in ArticyDatabase.h"
#endif
#define ARTICYRUNTIME_ArticyDatabase_generated_h

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyObjectShadow_Statics; \
	ARTICYRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyObjectShadow>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyShadowableObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyShadowableObject>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyCloneableObject(); \
	friend struct Z_Construct_UClass_UArticyCloneableObject_Statics; \
public: \
	DECLARE_CLASS(UArticyCloneableObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyCloneableObject)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyCloneableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyCloneableObject(UArticyCloneableObject&&); \
	UArticyCloneableObject(const UArticyCloneableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyCloneableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyCloneableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyCloneableObject) \
	NO_API virtual ~UArticyCloneableObject();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_103_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_106_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyCloneableObject>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyDatabaseObjectArray>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetExpressoScriptsClass); \
	DECLARE_FUNCTION(execGetOrCloneByName); \
	DECLARE_FUNCTION(execGetOrClone); \
	DECLARE_FUNCTION(execCloneFromByName); \
	DECLARE_FUNCTION(execCloneFrom); \
	DECLARE_FUNCTION(execGetAllObjects); \
	DECLARE_FUNCTION(execGetObjectsOfClass); \
	DECLARE_FUNCTION(execGetObjects); \
	DECLARE_FUNCTION(execGetObjectFromStringRepresentation); \
	DECLARE_FUNCTION(execGetObjectByName); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execUnloadPackage); \
	DECLARE_FUNCTION(execLoadPackage); \
	DECLARE_FUNCTION(execIsPackageDefaultPackage); \
	DECLARE_FUNCTION(execGetImportedPackageNames); \
	DECLARE_FUNCTION(execIsInShadowState); \
	DECLARE_FUNCTION(execSetDefaultUserMethodsProvider); \
	DECLARE_FUNCTION(execUnloadDatabase);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyDatabase(); \
	friend struct Z_Construct_UClass_UArticyDatabase_Statics; \
public: \
	DECLARE_CLASS(UArticyDatabase, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyDatabase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UArticyDatabase*>(this); }


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_173_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyDatabase(UArticyDatabase&&); \
	UArticyDatabase(const UArticyDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArticyDatabase) \
	NO_API virtual ~UArticyDatabase();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_170_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_173_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
