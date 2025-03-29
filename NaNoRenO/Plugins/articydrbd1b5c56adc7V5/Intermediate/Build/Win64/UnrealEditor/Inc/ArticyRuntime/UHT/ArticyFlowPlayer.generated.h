// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyFlowPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IArticyFlowObject;
class UArticyGlobalVariables;
class UObject;
struct FArticyBranch;
struct FArticyId;
struct FArticyRef;
#ifdef ARTICYRUNTIME_ArticyFlowPlayer_generated_h
#error "ArticyFlowPlayer.generated.h already included, missing '#pragma once' in ArticyFlowPlayer.h"
#endif
#define ARTICYRUNTIME_ArticyFlowPlayer_generated_h

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyBranch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyBranch>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_184_DELEGATE \
static void FOnPushState_DelegateWrapper(const FMulticastScriptDelegate& OnPushState);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_185_DELEGATE \
static void FOnPopState_DelegateWrapper(const FMulticastScriptDelegate& OnPopState);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_186_DELEGATE \
static void FOnPlayerPaused_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerPaused, const TScriptInterface<IArticyFlowObject>& PausedOn);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_187_DELEGATE \
static void FOnBranchesUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnBranchesUpdated, TArray<FArticyBranch> const& AvailableBranches);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIgnoresInvalidBranches); \
	DECLARE_FUNCTION(execGetAvailableBranches); \
	DECLARE_FUNCTION(execUpdateAvailableBranches); \
	DECLARE_FUNCTION(execGetMethodsProvider); \
	DECLARE_FUNCTION(execGetGVs); \
	DECLARE_FUNCTION(execShouldPauseOn); \
	DECLARE_FUNCTION(execPlayBranch); \
	DECLARE_FUNCTION(execFinishCurrentPausedObject); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetCursor); \
	DECLARE_FUNCTION(execSetCursorTo); \
	DECLARE_FUNCTION(execSetIgnoreInvalidBranches); \
	DECLARE_FUNCTION(execGetStartNode); \
	DECLARE_FUNCTION(execSetStartNodeWithFlowObject); \
	DECLARE_FUNCTION(execSetStartNodeById); \
	DECLARE_FUNCTION(execSetStartNode);


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyFlowPlayer(); \
	friend struct Z_Construct_UClass_UArticyFlowPlayer_Statics; \
public: \
	DECLARE_CLASS(UArticyFlowPlayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyFlowPlayer)


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyFlowPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyFlowPlayer(UArticyFlowPlayer&&); \
	UArticyFlowPlayer(const UArticyFlowPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyFlowPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyFlowPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyFlowPlayer) \
	NO_API virtual ~UArticyFlowPlayer();


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_67_PROLOG
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_70_INCLASS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyFlowPlayer>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_363_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArticyFlowDebugger(); \
	friend struct Z_Construct_UClass_AArticyFlowDebugger_Statics; \
public: \
	DECLARE_CLASS(AArticyFlowDebugger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(AArticyFlowDebugger)


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_363_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArticyFlowDebugger(AArticyFlowDebugger&&); \
	AArticyFlowDebugger(const AArticyFlowDebugger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArticyFlowDebugger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArticyFlowDebugger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArticyFlowDebugger) \
	NO_API virtual ~AArticyFlowDebugger();


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_360_PROLOG
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_363_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_363_INCLASS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_363_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class AArticyFlowDebugger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h


#define FOREACH_ENUM_EARTICYPAUSABLETYPE(op) \
	op(EArticyPausableType::FlowFragment) \
	op(EArticyPausableType::Dialogue) \
	op(EArticyPausableType::DialogueFragment) \
	op(EArticyPausableType::Hub) \
	op(EArticyPausableType::Jump) \
	op(EArticyPausableType::Condition) \
	op(EArticyPausableType::Instruction) \
	op(EArticyPausableType::Pin) 

enum class EArticyPausableType : uint8;
template<> struct TIsUEnumClass<EArticyPausableType> { enum { Value = true }; };
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyPausableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
