// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/Interfaces/ArticyNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyNode() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInputPinsProvider_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyNode();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyNode_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyOutputPinsProvider_NoRegister();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyPausableType();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyNode Function GetType
struct Z_Construct_UFunction_UArticyNode_GetType_Statics
{
	struct ArticyNode_eventGetType_Parms
	{
		EArticyPausableType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Gets the type of this node.\n\x09 *\n\x09 * This function returns the type of the node, which is pausable. It is intended\n\x09 * to be overridden in derived classes.\n\x09 *\n\x09 * @return The type of the node as EArticyPausableType.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/ArticyNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the type of this node.\n\nThis function returns the type of the node, which is pausable. It is intended\nto be overridden in derived classes.\n\n@return The type of the node as EArticyPausableType." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArticyNode_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArticyNode_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyNode_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_ArticyRuntime_EArticyPausableType, METADATA_PARAMS(0, nullptr) }; // 3039501119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyNode_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyNode_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyNode_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyNode_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyNode_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyNode, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UArticyNode_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyNode_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyNode_GetType_Statics::ArticyNode_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyNode_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyNode_GetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyNode_GetType_Statics::ArticyNode_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyNode_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyNode_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyNode::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EArticyPausableType*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// End Class UArticyNode Function GetType

// Begin Class UArticyNode
void UArticyNode::StaticRegisterNativesUArticyNode()
{
	UClass* Class = UArticyNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetType", &UArticyNode::execGetType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyNode);
UClass* Z_Construct_UClass_UArticyNode_NoRegister()
{
	return UArticyNode::StaticClass();
}
struct Z_Construct_UClass_UArticyNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UArticyNode\n * @brief Base class for all nodes (fragments) in the flow.\n *\n * This class serves as the base for all nodes within the flow system,\n * implementing both input and output pin interfaces to allow for node exploration.\n */" },
#endif
		{ "IncludePath", "Interfaces/ArticyNode.h" },
		{ "ModuleRelativePath", "Public/Interfaces/ArticyNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UArticyNode\n@brief Base class for all nodes (fragments) in the flow.\n\nThis class serves as the base for all nodes within the flow system,\nimplementing both input and output pin interfaces to allow for node exploration." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyNode_GetType, "GetType" }, // 2618883539
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyNode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyInputPinsProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyNode, IArticyInputPinsProvider), false },  // 1277042050
	{ Z_Construct_UClass_UArticyOutputPinsProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyNode, IArticyOutputPinsProvider), false },  // 3593836391
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyNode_Statics::ClassParams = {
	&UArticyNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyNode()
{
	if (!Z_Registration_Info_UClass_UArticyNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyNode.OuterSingleton, Z_Construct_UClass_UArticyNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyNode.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyNode>()
{
	return UArticyNode::StaticClass();
}
UArticyNode::UArticyNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyNode);
UArticyNode::~UArticyNode() {}
// End Class UArticyNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyNode, UArticyNode::StaticClass, TEXT("UArticyNode"), &Z_Registration_Info_UClass_UArticyNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyNode), 2185841065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyNode_h_2500860917(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_Interfaces_ArticyNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
