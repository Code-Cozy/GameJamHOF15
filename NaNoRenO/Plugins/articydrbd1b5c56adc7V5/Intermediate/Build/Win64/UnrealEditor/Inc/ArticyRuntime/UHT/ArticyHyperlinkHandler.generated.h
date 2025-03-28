// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ArticyHyperlinkHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArticyObject;
class URichTextBlock;
#ifdef ARTICYRUNTIME_ArticyHyperlinkHandler_generated_h
#error "ArticyHyperlinkHandler.generated.h already included, missing '#pragma once' in ArticyHyperlinkHandler.h"
#endif
#define ARTICYRUNTIME_ArticyHyperlinkHandler_generated_h

#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_CALLBACK_WRAPPERS
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARTICYRUNTIME_API UArticyHyperlinkHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArticyHyperlinkHandler(UArticyHyperlinkHandler&&); \
	UArticyHyperlinkHandler(const UArticyHyperlinkHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARTICYRUNTIME_API, UArticyHyperlinkHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyHyperlinkHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyHyperlinkHandler) \
	ARTICYRUNTIME_API virtual ~UArticyHyperlinkHandler();


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArticyHyperlinkHandler(); \
	friend struct Z_Construct_UClass_UArticyHyperlinkHandler_Statics; \
public: \
	DECLARE_CLASS(UArticyHyperlinkHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArticyRuntime"), ARTICYRUNTIME_API) \
	DECLARE_SERIALIZER(UArticyHyperlinkHandler)


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_GENERATED_UINTERFACE_BODY() \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArticyHyperlinkHandler() {} \
public: \
	typedef UArticyHyperlinkHandler UClassType; \
	typedef IArticyHyperlinkHandler ThisClass; \
	static void Execute_OnHyperlinkNavigated(UObject* O, UArticyObject* Destination, URichTextBlock* Origin); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_13_PROLOG
#define FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_CALLBACK_WRAPPERS \
	FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYRUNTIME_API UClass* StaticClass<class UArticyHyperlinkHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
