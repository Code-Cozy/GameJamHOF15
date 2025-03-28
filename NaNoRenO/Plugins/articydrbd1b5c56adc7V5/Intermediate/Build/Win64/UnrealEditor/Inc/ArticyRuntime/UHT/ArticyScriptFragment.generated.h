// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyScriptFragment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyScriptCondition;
class UArticyScriptInstruction;
#ifdef ARTICYRUNTIME_ArticyScriptFragment_generated_h
#error "ArticyScriptFragment.generated.h already included, missing '#pragma once' in ArticyScriptFragment.h"
#endif
#define ARTICYRUNTIME_ArticyScriptFragment_generated_h

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyScriptFragment(); \
	friend struct Z_Construct_UClass_UArticyScriptFragment_Statics; \
public: \
	DECLARE_CLASS(UArticyScriptFragment, UArticyPrimitive, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyScriptFragment)


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyScriptFragment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyScriptFragment(UArticyScriptFragment&&); \
	UArticyScriptFragment(const UArticyScriptFragment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyScriptFragment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyScriptFragment); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyScriptFragment) \
	NO_API virtual ~UArticyScriptFragment();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_19_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_22_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyScriptFragment>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyScriptCondition(); \
	friend struct Z_Construct_UClass_UArticyScriptCondition_Statics; \
public: \
	DECLARE_CLASS(UArticyScriptCondition, UArticyScriptFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyScriptCondition) \
	virtual UObject* _getUObject() const override { return const_cast<UArticyScriptCondition*>(this); }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyScriptCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyScriptCondition(UArticyScriptCondition&&); \
	UArticyScriptCondition(const UArticyScriptCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyScriptCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyScriptCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyScriptCondition) \
	NO_API virtual ~UArticyScriptCondition();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_68_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_71_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyScriptCondition>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCondition);


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyCondition(); \
	friend struct Z_Construct_UClass_UArticyCondition_Statics; \
public: \
	DECLARE_CLASS(UArticyCondition, UArticyNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyCondition) \
	virtual UObject* _getUObject() const override { return const_cast<UArticyCondition*>(this); }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyCondition(UArticyCondition&&); \
	UArticyCondition(const UArticyCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyCondition) \
	NO_API virtual ~UArticyCondition();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_88_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_91_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyCondition>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyScriptInstruction(); \
	friend struct Z_Construct_UClass_UArticyScriptInstruction_Statics; \
public: \
	DECLARE_CLASS(UArticyScriptInstruction, UArticyScriptFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyScriptInstruction) \
	virtual UObject* _getUObject() const override { return const_cast<UArticyScriptInstruction*>(this); }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyScriptInstruction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyScriptInstruction(UArticyScriptInstruction&&); \
	UArticyScriptInstruction(const UArticyScriptInstruction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyScriptInstruction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyScriptInstruction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyScriptInstruction) \
	NO_API virtual ~UArticyScriptInstruction();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_141_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_144_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyScriptInstruction>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInstruction);


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyInstruction(); \
	friend struct Z_Construct_UClass_UArticyInstruction_Statics; \
public: \
	DECLARE_CLASS(UArticyInstruction, UArticyNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyInstruction) \
	virtual UObject* _getUObject() const override { return const_cast<UArticyInstruction*>(this); }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyInstruction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyInstruction(UArticyInstruction&&); \
	UArticyInstruction(const UArticyInstruction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyInstruction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyInstruction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyInstruction) \
	NO_API virtual ~UArticyInstruction();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_160_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_163_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyInstruction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
