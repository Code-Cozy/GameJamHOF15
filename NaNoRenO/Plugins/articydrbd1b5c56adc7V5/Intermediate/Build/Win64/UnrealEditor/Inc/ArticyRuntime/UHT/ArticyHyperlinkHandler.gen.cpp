// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyHyperlinkHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyHyperlinkHandler() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyHyperlinkHandler();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyHyperlinkHandler_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Interface UArticyHyperlinkHandler Function OnHyperlinkNavigated
struct ArticyHyperlinkHandler_eventOnHyperlinkNavigated_Parms
{
	UArticyObject* Destination;
	URichTextBlock* Origin;
};
void IArticyHyperlinkHandler::OnHyperlinkNavigated(UArticyObject* Destination, URichTextBlock* Origin)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHyperlinkNavigated instead.");
}
static FName NAME_UArticyHyperlinkHandler_OnHyperlinkNavigated = FName(TEXT("OnHyperlinkNavigated"));
void IArticyHyperlinkHandler::Execute_OnHyperlinkNavigated(UObject* O, UArticyObject* Destination, URichTextBlock* Origin)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UArticyHyperlinkHandler::StaticClass()));
	ArticyHyperlinkHandler_eventOnHyperlinkNavigated_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UArticyHyperlinkHandler_OnHyperlinkNavigated);
	if (Func)
	{
		Parms.Destination=Destination;
		Parms.Origin=Origin;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n      * Called whenever a hyperlink is clicked\n      */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyHyperlinkHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called whenever a hyperlink is clicked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyHyperlinkHandler_eventOnHyperlinkNavigated_Parms, Destination), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyHyperlinkHandler_eventOnHyperlinkNavigated_Parms, Origin), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::NewProp_Origin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyHyperlinkHandler, nullptr, "OnHyperlinkNavigated", nullptr, nullptr, Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::PropPointers), sizeof(ArticyHyperlinkHandler_eventOnHyperlinkNavigated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::Function_MetaDataParams) };
static_assert(sizeof(ArticyHyperlinkHandler_eventOnHyperlinkNavigated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UArticyHyperlinkHandler Function OnHyperlinkNavigated

// Begin Interface UArticyHyperlinkHandler
void UArticyHyperlinkHandler::StaticRegisterNativesUArticyHyperlinkHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyHyperlinkHandler);
UClass* Z_Construct_UClass_UArticyHyperlinkHandler_NoRegister()
{
	return UArticyHyperlinkHandler::StaticClass();
}
struct Z_Construct_UClass_UArticyHyperlinkHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/ArticyHyperlinkHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyHyperlinkHandler_OnHyperlinkNavigated, "OnHyperlinkNavigated" }, // 2829120757
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArticyHyperlinkHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyHyperlinkHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyHyperlinkHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyHyperlinkHandler_Statics::ClassParams = {
	&UArticyHyperlinkHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyHyperlinkHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyHyperlinkHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyHyperlinkHandler()
{
	if (!Z_Registration_Info_UClass_UArticyHyperlinkHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyHyperlinkHandler.OuterSingleton, Z_Construct_UClass_UArticyHyperlinkHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyHyperlinkHandler.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyHyperlinkHandler>()
{
	return UArticyHyperlinkHandler::StaticClass();
}
UArticyHyperlinkHandler::UArticyHyperlinkHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyHyperlinkHandler);
UArticyHyperlinkHandler::~UArticyHyperlinkHandler() {}
// End Interface UArticyHyperlinkHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyHyperlinkHandler, UArticyHyperlinkHandler::StaticClass, TEXT("UArticyHyperlinkHandler"), &Z_Registration_Info_UClass_UArticyHyperlinkHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyHyperlinkHandler), 2866011224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_1388693692(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyHyperlinkHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
