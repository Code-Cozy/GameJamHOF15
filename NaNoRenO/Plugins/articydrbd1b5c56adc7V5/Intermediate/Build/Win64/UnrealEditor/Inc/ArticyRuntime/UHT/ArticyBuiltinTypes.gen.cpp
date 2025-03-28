// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyBuiltinTypes.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyBuiltinTypes() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyComment();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyComment_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyConnection();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyConnection_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDocument();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDocument_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyIncomingConnection();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyIncomingConnection_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLink();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLink_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocation();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocation_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocationImage();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocationImage_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocationText();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyLocationText_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutgoingConnection();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutgoingConnection_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutputPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPath();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPath_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPreviewImage();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPreviewImage_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticySpot();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticySpot_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTextObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTextObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTransformation();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyTransformation_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyUserFolder();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyUserFolder_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyZone();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyZone_NoRegister();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyLocationAnchor();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyRect();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyPreviewImage
void UArticyPreviewImage::StaticRegisterNativesUArticyPreviewImage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyPreviewImage);
UClass* Z_Construct_UClass_UArticyPreviewImage_NoRegister()
{
	return UArticyPreviewImage::StaticClass();
}
struct Z_Construct_UClass_UArticyPreviewImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewBox_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID of the asset. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyPreviewImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_ViewBox = { "ViewBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPreviewImage, ViewBox), Z_Construct_UScriptStruct_FArticyRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewBox_MetaData), NewProp_ViewBox_MetaData) }; // 2865939471
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPreviewImage, Mode), Z_Construct_UEnum_ArticyRuntime_EArticyPreviewImageViewBoxModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3976122611
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyPreviewImage, Asset), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyPreviewImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_ViewBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyPreviewImage_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPreviewImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyPreviewImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPreviewImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyPreviewImage_Statics::ClassParams = {
	&UArticyPreviewImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyPreviewImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPreviewImage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPreviewImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyPreviewImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyPreviewImage()
{
	if (!Z_Registration_Info_UClass_UArticyPreviewImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyPreviewImage.OuterSingleton, Z_Construct_UClass_UArticyPreviewImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyPreviewImage.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyPreviewImage>()
{
	return UArticyPreviewImage::StaticClass();
}
UArticyPreviewImage::UArticyPreviewImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyPreviewImage);
UArticyPreviewImage::~UArticyPreviewImage() {}
// End Class UArticyPreviewImage

// Begin Class UArticyConnection
void UArticyConnection::StaticRegisterNativesUArticyConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyConnection);
UClass* Z_Construct_UClass_UArticyConnection_NoRegister()
{
	return UArticyConnection::StaticClass();
}
struct Z_Construct_UClass_UArticyConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "Label" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyConnection_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyConnection, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyConnection_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyConnection, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyConnection_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyConnection_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyConnection_Statics::ClassParams = {
	&UArticyConnection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyConnection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyConnection()
{
	if (!Z_Registration_Info_UClass_UArticyConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyConnection.OuterSingleton, Z_Construct_UClass_UArticyConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyConnection.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyConnection>()
{
	return UArticyConnection::StaticClass();
}
UArticyConnection::UArticyConnection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyConnection);
UArticyConnection::~UArticyConnection() {}
// End Class UArticyConnection

// Begin Class UArticyOutgoingConnection
void UArticyOutgoingConnection::StaticRegisterNativesUArticyOutgoingConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyOutgoingConnection);
UClass* Z_Construct_UClass_UArticyOutgoingConnection_NoRegister()
{
	return UArticyOutgoingConnection::StaticClass();
}
struct Z_Construct_UClass_UArticyOutgoingConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPin_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "TargetPin" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "Target" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPinObj_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetObj_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPinObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyOutgoingConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_TargetPin = { "TargetPin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyOutgoingConnection, TargetPin), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPin_MetaData), NewProp_TargetPin_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyOutgoingConnection, Target), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 4167114503
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_TargetPinObj = { "TargetPinObj", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyOutgoingConnection, TargetPinObj), Z_Construct_UClass_UArticyFlowPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPinObj_MetaData), NewProp_TargetPinObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_TargetObj = { "TargetObj", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyOutgoingConnection, TargetObj), Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetObj_MetaData), NewProp_TargetObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyOutgoingConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_TargetPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_TargetPinObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyOutgoingConnection_Statics::NewProp_TargetObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutgoingConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyOutgoingConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutgoingConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyOutgoingConnection_Statics::ClassParams = {
	&UArticyOutgoingConnection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyOutgoingConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutgoingConnection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyOutgoingConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyOutgoingConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyOutgoingConnection()
{
	if (!Z_Registration_Info_UClass_UArticyOutgoingConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyOutgoingConnection.OuterSingleton, Z_Construct_UClass_UArticyOutgoingConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyOutgoingConnection.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyOutgoingConnection>()
{
	return UArticyOutgoingConnection::StaticClass();
}
UArticyOutgoingConnection::UArticyOutgoingConnection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyOutgoingConnection);
UArticyOutgoingConnection::~UArticyOutgoingConnection() {}
// End Class UArticyOutgoingConnection

// Begin Class UArticyIncomingConnection
void UArticyIncomingConnection::StaticRegisterNativesUArticyIncomingConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyIncomingConnection);
UClass* Z_Construct_UClass_UArticyIncomingConnection_NoRegister()
{
	return UArticyIncomingConnection::StaticClass();
}
struct Z_Construct_UClass_UArticyIncomingConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePin_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "SourcePin" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePinObj_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObj_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePinObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyIncomingConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_SourcePin = { "SourcePin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyIncomingConnection, SourcePin), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePin_MetaData), NewProp_SourcePin_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyIncomingConnection, Source), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 4167114503
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_SourcePinObj = { "SourcePinObj", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyIncomingConnection, SourcePinObj), Z_Construct_UClass_UArticyOutputPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePinObj_MetaData), NewProp_SourcePinObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_SourceObj = { "SourceObj", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyIncomingConnection, SourceObj), Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObj_MetaData), NewProp_SourceObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyIncomingConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_SourcePin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_SourcePinObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyIncomingConnection_Statics::NewProp_SourceObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyIncomingConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyIncomingConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyIncomingConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyIncomingConnection_Statics::ClassParams = {
	&UArticyIncomingConnection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyIncomingConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyIncomingConnection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyIncomingConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyIncomingConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyIncomingConnection()
{
	if (!Z_Registration_Info_UClass_UArticyIncomingConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyIncomingConnection.OuterSingleton, Z_Construct_UClass_UArticyIncomingConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyIncomingConnection.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyIncomingConnection>()
{
	return UArticyIncomingConnection::StaticClass();
}
UArticyIncomingConnection::UArticyIncomingConnection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyIncomingConnection);
UArticyIncomingConnection::~UArticyIncomingConnection() {}
// End Class UArticyIncomingConnection

// Begin ScriptStruct FArticyLocationAnchor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyLocationAnchor;
class UScriptStruct* FArticyLocationAnchor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyLocationAnchor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyLocationAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyLocationAnchor, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyLocationAnchor"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyLocationAnchor.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyLocationAnchor>()
{
	return FArticyLocationAnchor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPositionX_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "AnchorPositionX" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPositionY_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "AnchorPositionY" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorColor_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "AnchorColor" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorSize_MetaData[] = {
		{ "Category", "Articy" },
		{ "DisplayName", "AnchorSize" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnchorPositionX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnchorPositionY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnchorSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnchorSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyLocationAnchor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorPositionX = { "AnchorPositionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLocationAnchor, AnchorPositionX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPositionX_MetaData), NewProp_AnchorPositionX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorPositionY = { "AnchorPositionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLocationAnchor, AnchorPositionY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPositionY_MetaData), NewProp_AnchorPositionY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorColor = { "AnchorColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLocationAnchor, AnchorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorColor_MetaData), NewProp_AnchorColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorSize = { "AnchorSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyLocationAnchor, AnchorSize), Z_Construct_UEnum_ArticyRuntime_EArticyLocationAnchorSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorSize_MetaData), NewProp_AnchorSize_MetaData) }; // 2772689302
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorPositionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorPositionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewProp_AnchorSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyLocationAnchor",
	Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::PropPointers),
	sizeof(FArticyLocationAnchor),
	alignof(FArticyLocationAnchor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyLocationAnchor()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyLocationAnchor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyLocationAnchor.InnerSingleton, Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyLocationAnchor.InnerSingleton;
}
// End ScriptStruct FArticyLocationAnchor

// Begin Class UArticyTransformation
void UArticyTransformation::StaticRegisterNativesUArticyTransformation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyTransformation);
UClass* Z_Construct_UClass_UArticyTransformation_NoRegister()
{
	return UArticyTransformation::StaticClass();
}
struct Z_Construct_UClass_UArticyTransformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyTransformation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyTransformation, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pivot_MetaData), NewProp_Pivot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyTransformation, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyTransformation, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyTransformation, Matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matrix_MetaData), NewProp_Matrix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyTransformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Pivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyTransformation_Statics::NewProp_Matrix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTransformation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyTransformation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTransformation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyTransformation_Statics::ClassParams = {
	&UArticyTransformation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyTransformation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTransformation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTransformation_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyTransformation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyTransformation()
{
	if (!Z_Registration_Info_UClass_UArticyTransformation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyTransformation.OuterSingleton, Z_Construct_UClass_UArticyTransformation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyTransformation.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyTransformation>()
{
	return UArticyTransformation::StaticClass();
}
UArticyTransformation::UArticyTransformation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyTransformation);
UArticyTransformation::~UArticyTransformation() {}
// End Class UArticyTransformation

// Begin Class UArticyUserFolder
void UArticyUserFolder::StaticRegisterNativesUArticyUserFolder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyUserFolder);
UClass* Z_Construct_UClass_UArticyUserFolder_NoRegister()
{
	return UArticyUserFolder::StaticClass();
}
struct Z_Construct_UClass_UArticyUserFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyUserFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyUserFolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyUserFolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyUserFolder_Statics::ClassParams = {
	&UArticyUserFolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyUserFolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyUserFolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyUserFolder()
{
	if (!Z_Registration_Info_UClass_UArticyUserFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyUserFolder.OuterSingleton, Z_Construct_UClass_UArticyUserFolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyUserFolder.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyUserFolder>()
{
	return UArticyUserFolder::StaticClass();
}
UArticyUserFolder::UArticyUserFolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyUserFolder);
UArticyUserFolder::~UArticyUserFolder() {}
// End Class UArticyUserFolder

// Begin Class UArticyZone
void UArticyZone::StaticRegisterNativesUArticyZone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyZone);
UClass* Z_Construct_UClass_UArticyZone_NoRegister()
{
	return UArticyZone::StaticClass();
}
struct Z_Construct_UClass_UArticyZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyZone_Statics::ClassParams = {
	&UArticyZone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyZone_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyZone()
{
	if (!Z_Registration_Info_UClass_UArticyZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyZone.OuterSingleton, Z_Construct_UClass_UArticyZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyZone.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyZone>()
{
	return UArticyZone::StaticClass();
}
UArticyZone::UArticyZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyZone);
UArticyZone::~UArticyZone() {}
// End Class UArticyZone

// Begin Class UArticyLocation
void UArticyLocation::StaticRegisterNativesUArticyLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyLocation);
UClass* Z_Construct_UClass_UArticyLocation_NoRegister()
{
	return UArticyLocation::StaticClass();
}
struct Z_Construct_UClass_UArticyLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyLocation_Statics::ClassParams = {
	&UArticyLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyLocation()
{
	if (!Z_Registration_Info_UClass_UArticyLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyLocation.OuterSingleton, Z_Construct_UClass_UArticyLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyLocation.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyLocation>()
{
	return UArticyLocation::StaticClass();
}
UArticyLocation::UArticyLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyLocation);
UArticyLocation::~UArticyLocation() {}
// End Class UArticyLocation

// Begin Class UArticyDocument
void UArticyDocument::StaticRegisterNativesUArticyDocument()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyDocument);
UClass* Z_Construct_UClass_UArticyDocument_NoRegister()
{
	return UArticyDocument::StaticClass();
}
struct Z_Construct_UClass_UArticyDocument_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyDocument>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyDocument_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDocument_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyDocument_Statics::ClassParams = {
	&UArticyDocument::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDocument_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyDocument_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyDocument()
{
	if (!Z_Registration_Info_UClass_UArticyDocument.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyDocument.OuterSingleton, Z_Construct_UClass_UArticyDocument_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyDocument.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyDocument>()
{
	return UArticyDocument::StaticClass();
}
UArticyDocument::UArticyDocument(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyDocument);
UArticyDocument::~UArticyDocument() {}
// End Class UArticyDocument

// Begin Class UArticyPath
void UArticyPath::StaticRegisterNativesUArticyPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyPath);
UClass* Z_Construct_UClass_UArticyPath_NoRegister()
{
	return UArticyPath::StaticClass();
}
struct Z_Construct_UClass_UArticyPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyPath_Statics::ClassParams = {
	&UArticyPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyPath()
{
	if (!Z_Registration_Info_UClass_UArticyPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyPath.OuterSingleton, Z_Construct_UClass_UArticyPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyPath.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyPath>()
{
	return UArticyPath::StaticClass();
}
UArticyPath::UArticyPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyPath);
UArticyPath::~UArticyPath() {}
// End Class UArticyPath

// Begin Class UArticySpot
void UArticySpot::StaticRegisterNativesUArticySpot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticySpot);
UClass* Z_Construct_UClass_UArticySpot_NoRegister()
{
	return UArticySpot::StaticClass();
}
struct Z_Construct_UClass_UArticySpot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticySpot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticySpot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticySpot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticySpot_Statics::ClassParams = {
	&UArticySpot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticySpot_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticySpot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticySpot()
{
	if (!Z_Registration_Info_UClass_UArticySpot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticySpot.OuterSingleton, Z_Construct_UClass_UArticySpot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticySpot.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticySpot>()
{
	return UArticySpot::StaticClass();
}
UArticySpot::UArticySpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticySpot);
UArticySpot::~UArticySpot() {}
// End Class UArticySpot

// Begin Class UArticyLocationImage
void UArticyLocationImage::StaticRegisterNativesUArticyLocationImage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyLocationImage);
UClass* Z_Construct_UClass_UArticyLocationImage_NoRegister()
{
	return UArticyLocationImage::StaticClass();
}
struct Z_Construct_UClass_UArticyLocationImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyLocationImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyLocationImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocationImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyLocationImage_Statics::ClassParams = {
	&UArticyLocationImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocationImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyLocationImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyLocationImage()
{
	if (!Z_Registration_Info_UClass_UArticyLocationImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyLocationImage.OuterSingleton, Z_Construct_UClass_UArticyLocationImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyLocationImage.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyLocationImage>()
{
	return UArticyLocationImage::StaticClass();
}
UArticyLocationImage::UArticyLocationImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyLocationImage);
UArticyLocationImage::~UArticyLocationImage() {}
// End Class UArticyLocationImage

// Begin Class UArticyLocationText
void UArticyLocationText::StaticRegisterNativesUArticyLocationText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyLocationText);
UClass* Z_Construct_UClass_UArticyLocationText_NoRegister()
{
	return UArticyLocationText::StaticClass();
}
struct Z_Construct_UClass_UArticyLocationText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyLocationText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyLocationText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocationText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyLocationText_Statics::ClassParams = {
	&UArticyLocationText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLocationText_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyLocationText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyLocationText()
{
	if (!Z_Registration_Info_UClass_UArticyLocationText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyLocationText.OuterSingleton, Z_Construct_UClass_UArticyLocationText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyLocationText.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyLocationText>()
{
	return UArticyLocationText::StaticClass();
}
UArticyLocationText::UArticyLocationText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyLocationText);
UArticyLocationText::~UArticyLocationText() {}
// End Class UArticyLocationText

// Begin Class UArticyLink
void UArticyLink::StaticRegisterNativesUArticyLink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyLink);
UClass* Z_Construct_UClass_UArticyLink_NoRegister()
{
	return UArticyLink::StaticClass();
}
struct Z_Construct_UClass_UArticyLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyLink_Statics::ClassParams = {
	&UArticyLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyLink_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyLink()
{
	if (!Z_Registration_Info_UClass_UArticyLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyLink.OuterSingleton, Z_Construct_UClass_UArticyLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyLink.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyLink>()
{
	return UArticyLink::StaticClass();
}
UArticyLink::UArticyLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyLink);
UArticyLink::~UArticyLink() {}
// End Class UArticyLink

// Begin Class UArticyComment
void UArticyComment::StaticRegisterNativesUArticyComment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyComment);
UClass* Z_Construct_UClass_UArticyComment_NoRegister()
{
	return UArticyComment::StaticClass();
}
struct Z_Construct_UClass_UArticyComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyComment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyComment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyComment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyComment_Statics::ClassParams = {
	&UArticyComment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyComment_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyComment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyComment()
{
	if (!Z_Registration_Info_UClass_UArticyComment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyComment.OuterSingleton, Z_Construct_UClass_UArticyComment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyComment.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyComment>()
{
	return UArticyComment::StaticClass();
}
UArticyComment::UArticyComment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyComment);
UArticyComment::~UArticyComment() {}
// End Class UArticyComment

// Begin Class UArticyTextObject
void UArticyTextObject::StaticRegisterNativesUArticyTextObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyTextObject);
UClass* Z_Construct_UClass_UArticyTextObject_NoRegister()
{
	return UArticyTextObject::StaticClass();
}
struct Z_Construct_UClass_UArticyTextObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyBuiltinTypes.h" },
		{ "ModuleRelativePath", "Public/ArticyBuiltinTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyTextObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyTextObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTextObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyTextObject_Statics::ClassParams = {
	&UArticyTextObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyTextObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyTextObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyTextObject()
{
	if (!Z_Registration_Info_UClass_UArticyTextObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyTextObject.OuterSingleton, Z_Construct_UClass_UArticyTextObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyTextObject.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyTextObject>()
{
	return UArticyTextObject::StaticClass();
}
UArticyTextObject::UArticyTextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyTextObject);
UArticyTextObject::~UArticyTextObject() {}
// End Class UArticyTextObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBuiltinTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyLocationAnchor::StaticStruct, Z_Construct_UScriptStruct_FArticyLocationAnchor_Statics::NewStructOps, TEXT("ArticyLocationAnchor"), &Z_Registration_Info_UScriptStruct_ArticyLocationAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyLocationAnchor), 2956847942U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyPreviewImage, UArticyPreviewImage::StaticClass, TEXT("UArticyPreviewImage"), &Z_Registration_Info_UClass_UArticyPreviewImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyPreviewImage), 1232803946U) },
		{ Z_Construct_UClass_UArticyConnection, UArticyConnection::StaticClass, TEXT("UArticyConnection"), &Z_Registration_Info_UClass_UArticyConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyConnection), 4039509209U) },
		{ Z_Construct_UClass_UArticyOutgoingConnection, UArticyOutgoingConnection::StaticClass, TEXT("UArticyOutgoingConnection"), &Z_Registration_Info_UClass_UArticyOutgoingConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyOutgoingConnection), 245471139U) },
		{ Z_Construct_UClass_UArticyIncomingConnection, UArticyIncomingConnection::StaticClass, TEXT("UArticyIncomingConnection"), &Z_Registration_Info_UClass_UArticyIncomingConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyIncomingConnection), 2126136525U) },
		{ Z_Construct_UClass_UArticyTransformation, UArticyTransformation::StaticClass, TEXT("UArticyTransformation"), &Z_Registration_Info_UClass_UArticyTransformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyTransformation), 1560503733U) },
		{ Z_Construct_UClass_UArticyUserFolder, UArticyUserFolder::StaticClass, TEXT("UArticyUserFolder"), &Z_Registration_Info_UClass_UArticyUserFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyUserFolder), 503145833U) },
		{ Z_Construct_UClass_UArticyZone, UArticyZone::StaticClass, TEXT("UArticyZone"), &Z_Registration_Info_UClass_UArticyZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyZone), 1262497978U) },
		{ Z_Construct_UClass_UArticyLocation, UArticyLocation::StaticClass, TEXT("UArticyLocation"), &Z_Registration_Info_UClass_UArticyLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyLocation), 2240280016U) },
		{ Z_Construct_UClass_UArticyDocument, UArticyDocument::StaticClass, TEXT("UArticyDocument"), &Z_Registration_Info_UClass_UArticyDocument, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyDocument), 964233387U) },
		{ Z_Construct_UClass_UArticyPath, UArticyPath::StaticClass, TEXT("UArticyPath"), &Z_Registration_Info_UClass_UArticyPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyPath), 1594843169U) },
		{ Z_Construct_UClass_UArticySpot, UArticySpot::StaticClass, TEXT("UArticySpot"), &Z_Registration_Info_UClass_UArticySpot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticySpot), 2647542184U) },
		{ Z_Construct_UClass_UArticyLocationImage, UArticyLocationImage::StaticClass, TEXT("UArticyLocationImage"), &Z_Registration_Info_UClass_UArticyLocationImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyLocationImage), 2292199399U) },
		{ Z_Construct_UClass_UArticyLocationText, UArticyLocationText::StaticClass, TEXT("UArticyLocationText"), &Z_Registration_Info_UClass_UArticyLocationText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyLocationText), 2648533951U) },
		{ Z_Construct_UClass_UArticyLink, UArticyLink::StaticClass, TEXT("UArticyLink"), &Z_Registration_Info_UClass_UArticyLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyLink), 296019932U) },
		{ Z_Construct_UClass_UArticyComment, UArticyComment::StaticClass, TEXT("UArticyComment"), &Z_Registration_Info_UClass_UArticyComment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyComment), 1957313340U) },
		{ Z_Construct_UClass_UArticyTextObject, UArticyTextObject::StaticClass, TEXT("UArticyTextObject"), &Z_Registration_Info_UClass_UArticyTextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyTextObject), 413704153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBuiltinTypes_h_1236127183(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBuiltinTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBuiltinTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBuiltinTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyBuiltinTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
