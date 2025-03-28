// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyBaseTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTICYRUNTIME_ArticyBaseTypes_generated_h
#error "ArticyBaseTypes.generated.h already included, missing '#pragma once' in ArticyBaseTypes.h"
#endif
#define ARTICYRUNTIME_ArticyBaseTypes_generated_h

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyId_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyId>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticySize_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticySize>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyRect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyRect>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyStdString_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyStdString>();

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyMultiLanguageString_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FArticyStdString Super;


template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<struct FArticyMultiLanguageString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBaseTypes_h


#define FOREACH_ENUM_EARTICYPREVIEWIMAGEVIEWBOXMODES(op) \
	op(EArticyPreviewImageViewBoxModes::FromAsset) \
	op(EArticyPreviewImageViewBoxModes::Custom) 

enum class EArticyPreviewImageViewBoxModes : uint8;
template<> struct TIsUEnumClass<EArticyPreviewImageViewBoxModes> { enum { Value = true }; };
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyPreviewImageViewBoxModes>();

#define FOREACH_ENUM_EARTICYLOCATIONANCHORSIZE(op) \
	op(EArticyLocationAnchorSize::Small) \
	op(EArticyLocationAnchorSize::Medium) \
	op(EArticyLocationAnchorSize::Large) 

enum class EArticyLocationAnchorSize : uint8;
template<> struct TIsUEnumClass<EArticyLocationAnchorSize> { enum { Value = true }; };
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyLocationAnchorSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
