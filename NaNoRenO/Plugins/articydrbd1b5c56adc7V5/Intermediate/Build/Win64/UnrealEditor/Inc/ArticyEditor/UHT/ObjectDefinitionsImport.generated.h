// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectDefinitionsImport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTICYEDITOR_ObjectDefinitionsImport_generated_h
#error "ObjectDefinitionsImport.generated.h already included, missing '#pragma once' in ObjectDefinitionsImport.h"
#endif
#define ARTICYEDITOR_ObjectDefinitionsImport_generated_h

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyTemplateConstraint_Statics; \
	ARTICYEDITOR_API static class UScriptStruct* StaticStruct();


template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<struct FArticyTemplateConstraint>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyPropertyDef_Statics; \
	ARTICYEDITOR_API static class UScriptStruct* StaticStruct();


template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<struct FArticyPropertyDef>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyEnumValue_Statics; \
	ARTICYEDITOR_API static class UScriptStruct* StaticStruct();


template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<struct FArticyEnumValue>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyTemplateFeatureDef_Statics; \
	ARTICYEDITOR_API static class UScriptStruct* StaticStruct();


template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<struct FArticyTemplateFeatureDef>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyTemplateDef_Statics; \
	ARTICYEDITOR_API static class UScriptStruct* StaticStruct();


template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<struct FArticyTemplateDef>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_373_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyObjectDef_Statics; \
	ARTICYEDITOR_API static class UScriptStruct* StaticStruct();


template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<struct FArticyObjectDef>();

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h_486_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArticyObjectDefinitions_Statics; \
	ARTICYEDITOR_API static class UScriptStruct* StaticStruct();


template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<struct FArticyObjectDefinitions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ObjectDefinitionsImport_h


#define FOREACH_ENUM_EOBJECTDEFTYPE(op) \
	op(EObjectDefType::Model) \
	op(EObjectDefType::Enum) \
	op(EObjectDefType::Template) 

enum class EObjectDefType : uint8;
template<> struct TIsUEnumClass<EObjectDefType> { enum { Value = true }; };
template<> ARTICYEDITOR_API UEnum* StaticEnum<EObjectDefType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
