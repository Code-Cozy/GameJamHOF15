// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyTextExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTICYRUNTIME_ArticyTextExtension_generated_h
#error "ArticyTextExtension.generated.h already included, missing '#pragma once' in ArticyTextExtension.h"
#endif
#define ARTICYRUNTIME_ArticyTextExtension_generated_h

#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyTextExtension(); \
	friend struct Z_Construct_UClass_UArticyTextExtension_Statics; \
public: \
	DECLARE_CLASS(UArticyTextExtension, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), NO_API) \
	DECLARE_SERIALIZER(UArticyTextExtension)


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyTextExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyTextExtension(UArticyTextExtension&&); \
	UArticyTextExtension(const UArticyTextExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyTextExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyTextExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyTextExtension) \
	NO_API virtual ~UArticyTextExtension();


#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_25_PROLOG
#define FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_28_INCLASS_NO_PURE_DECLS \
	FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyTextExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyTextExtension_h


#define FOREACH_ENUM_EARTICYOBJECTTYPE(op) \
	op(EArticyObjectType::UArticyBool) \
	op(EArticyObjectType::UArticyInt) \
	op(EArticyObjectType::UArticyString) \
	op(EArticyObjectType::Other) 

enum class EArticyObjectType : uint8;
template<> struct TIsUEnumClass<EArticyObjectType> { enum { Value = true }; };
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
