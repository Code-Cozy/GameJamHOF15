// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyGlobalVariables.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyBaseVariableSet;
class UArticyVariable;
struct FArticyGvName;
#ifdef ARTICYRUNTIME_ArticyGlobalVariables_generated_h
#error "ArticyGlobalVariables.generated.h already included, missing '#pragma once' in ArticyGlobalVariables.h"
#endif
#define ARTICYRUNTIME_ArticyGlobalVariables_generated_h

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_47_DELEGATE \
ARTICYRUNTIME_API void FOnGVChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGVChanged, UArticyVariable* Variable);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyGvName_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyGvName>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyVariable(); \
	friend struct Z_Construct_UClass_UArticyVariable_Statics; \
public: \
	DECLARE_CLASS(UArticyVariable, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyVariable)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyVariable(UArticyVariable&&); \
	UArticyVariable(const UArticyVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyVariable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyVariable)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_87_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_90_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyVariable>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSet);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyInt(); \
	friend struct Z_Construct_UClass_UArticyInt_Statics; \
public: \
	DECLARE_CLASS(UArticyInt, UArticyVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyInt)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyInt(UArticyInt&&); \
	UArticyInt(const UArticyInt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyInt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyInt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyInt) \
	NO_API virtual ~UArticyInt();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_166_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_169_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyInt>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_321_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSet);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_321_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyBool(); \
	friend struct Z_Construct_UClass_UArticyBool_Statics; \
public: \
	DECLARE_CLASS(UArticyBool, UArticyVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyBool)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_321_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyBool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyBool(UArticyBool&&); \
	UArticyBool(const UArticyBool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyBool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyBool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyBool) \
	NO_API virtual ~UArticyBool();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_318_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_321_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_321_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_321_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_321_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyBool>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSet);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_360_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyString(); \
	friend struct Z_Construct_UClass_UArticyString_Statics; \
public: \
	DECLARE_CLASS(UArticyString, UArticyVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyString)


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_360_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyString(UArticyString&&); \
	UArticyString(const UArticyString&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyString); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyString); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyString) \
	NO_API virtual ~UArticyString();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_357_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_360_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_360_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_360_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyString>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_413_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastOnVariableChanged); \
	DECLARE_FUNCTION(execGetVariablesOfType); \
	DECLARE_FUNCTION(execGetVariables);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_413_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyBaseVariableSet(); \
	friend struct Z_Construct_UClass_UArticyBaseVariableSet_Statics; \
public: \
	DECLARE_CLASS(UArticyBaseVariableSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyBaseVariableSet) \
	virtual UObject* _getUObject() const override { return const_cast<UArticyBaseVariableSet*>(this); }


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_413_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyBaseVariableSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyBaseVariableSet(UArticyBaseVariableSet&&); \
	UArticyBaseVariableSet(const UArticyBaseVariableSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyBaseVariableSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyBaseVariableSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyBaseVariableSet) \
	NO_API virtual ~UArticyBaseVariableSet();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_410_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_413_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_413_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_413_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_413_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyBaseVariableSet>();

#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_480_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableDebugLogging); \
	DECLARE_FUNCTION(execEnableDebugLogging); \
	DECLARE_FUNCTION(execSetStringVariable); \
	DECLARE_FUNCTION(execSetIntVariable); \
	DECLARE_FUNCTION(execSetBoolVariable); \
	DECLARE_FUNCTION(execGetStringVariable); \
	DECLARE_FUNCTION(execGetIntVariable); \
	DECLARE_FUNCTION(execGetBoolVariable); \
	DECLARE_FUNCTION(execPrintGlobalVariable); \
	DECLARE_FUNCTION(execGetVariableSets); \
	DECLARE_FUNCTION(execGetNamespace); \
	DECLARE_FUNCTION(execUnloadGlobalVariables);


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_480_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyGlobalVariables(); \
	friend struct Z_Construct_UClass_UArticyGlobalVariables_Statics; \
public: \
	DECLARE_CLASS(UArticyGlobalVariables, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyGlobalVariables) \
	virtual UObject* _getUObject() const override { return const_cast<UArticyGlobalVariables*>(this); }


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_480_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyGlobalVariables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyGlobalVariables(UArticyGlobalVariables&&); \
	UArticyGlobalVariables(const UArticyGlobalVariables&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyGlobalVariables); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyGlobalVariables); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyGlobalVariables) \
	NO_API virtual ~UArticyGlobalVariables();


#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_477_PROLOG
#define FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_480_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_480_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_480_INCLASS_NO_PURE_DECLS \
	FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_480_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyGlobalVariables>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
