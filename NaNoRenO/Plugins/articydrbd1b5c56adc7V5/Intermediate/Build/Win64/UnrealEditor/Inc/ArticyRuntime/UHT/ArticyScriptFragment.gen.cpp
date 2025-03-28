// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyScriptFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyScriptFragment() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyCondition();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyCondition_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyConditionProvider_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInstruction();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInstruction_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInstructionProvider_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyNode();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyScriptCondition();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyScriptCondition_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyScriptFragment();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyScriptFragment_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyScriptInstruction();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyScriptInstruction_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyScriptFragment
void UArticyScriptFragment::StaticRegisterNativesUArticyScriptFragment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyScriptFragment);
UClass* Z_Construct_UClass_UArticyScriptFragment_NoRegister()
{
	return UArticyScriptFragment::StaticClass();
}
struct Z_Construct_UClass_UArticyScriptFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for the script fragments (ArticyScriptCondition or ArticyScriptInstruction).\n *\n * This class represents a fragment of a script, which may contain an expression used for conditions\n * or instructions within the Articy runtime environment.\n */" },
#endif
		{ "IncludePath", "ArticyScriptFragment.h" },
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for the script fragments (ArticyScriptCondition or ArticyScriptInstruction).\n\nThis class represents a fragment of a script, which may contain an expression used for conditions\nor instructions within the Articy runtime environment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The expression associated with this script fragment.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expression associated with this script fragment." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyScriptFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyScriptFragment_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyScriptFragment, Expression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyScriptFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyScriptFragment_Statics::NewProp_Expression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptFragment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyScriptFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyPrimitive,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyScriptFragment_Statics::ClassParams = {
	&UArticyScriptFragment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyScriptFragment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptFragment_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyScriptFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyScriptFragment()
{
	if (!Z_Registration_Info_UClass_UArticyScriptFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyScriptFragment.OuterSingleton, Z_Construct_UClass_UArticyScriptFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyScriptFragment.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyScriptFragment>()
{
	return UArticyScriptFragment::StaticClass();
}
UArticyScriptFragment::UArticyScriptFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyScriptFragment);
UArticyScriptFragment::~UArticyScriptFragment() {}
// End Class UArticyScriptFragment

// Begin Class UArticyScriptCondition
void UArticyScriptCondition::StaticRegisterNativesUArticyScriptCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyScriptCondition);
UClass* Z_Construct_UClass_UArticyScriptCondition_NoRegister()
{
	return UArticyScriptCondition::StaticClass();
}
struct Z_Construct_UClass_UArticyScriptCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A script condition that evaluates an expression.\n */" },
#endif
		{ "IncludePath", "ArticyScriptFragment.h" },
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A script condition that evaluates an expression." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyScriptCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyScriptCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyScriptFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyScriptCondition_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyConditionProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyScriptCondition, IArticyConditionProvider), false },  // 1214385518
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyScriptCondition_Statics::ClassParams = {
	&UArticyScriptCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyScriptCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyScriptCondition()
{
	if (!Z_Registration_Info_UClass_UArticyScriptCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyScriptCondition.OuterSingleton, Z_Construct_UClass_UArticyScriptCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyScriptCondition.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyScriptCondition>()
{
	return UArticyScriptCondition::StaticClass();
}
UArticyScriptCondition::UArticyScriptCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyScriptCondition);
UArticyScriptCondition::~UArticyScriptCondition() {}
// End Class UArticyScriptCondition

// Begin Class UArticyCondition Function GetCondition
struct Z_Construct_UFunction_UArticyCondition_GetCondition_Statics
{
	struct ArticyCondition_eventGetCondition_Parms
	{
		UArticyScriptCondition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Retrieves the script condition associated with this condition node.\n     *\n     * @return A pointer to the script condition.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the script condition associated with this condition node.\n\n@return A pointer to the script condition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyCondition_eventGetCondition_Parms, ReturnValue), Z_Construct_UClass_UArticyScriptCondition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyCondition, nullptr, "GetCondition", nullptr, nullptr, Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::ArticyCondition_eventGetCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::ArticyCondition_eventGetCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyCondition_GetCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyCondition_GetCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyCondition::execGetCondition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyScriptCondition**)Z_Param__Result=P_THIS->GetCondition();
	P_NATIVE_END;
}
// End Class UArticyCondition Function GetCondition

// Begin Class UArticyCondition
void UArticyCondition::StaticRegisterNativesUArticyCondition()
{
	UClass* Class = UArticyCondition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCondition", &UArticyCondition::execGetCondition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyCondition);
UClass* Z_Construct_UClass_UArticyCondition_NoRegister()
{
	return UArticyCondition::StaticClass();
}
struct Z_Construct_UClass_UArticyCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A condition node, which has a script condition.\n */" },
#endif
		{ "IncludePath", "ArticyScriptFragment.h" },
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A condition node, which has a script condition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The script condition associated with this condition node.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The script condition associated with this condition node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyCondition_GetCondition, "GetCondition" }, // 1064459296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyCondition_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyCondition, Condition), Z_Construct_UClass_UArticyScriptCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyCondition_Statics::NewProp_Condition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyCondition_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyConditionProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyCondition, IArticyConditionProvider), false },  // 1214385518
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyCondition_Statics::ClassParams = {
	&UArticyCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyCondition_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCondition_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyCondition()
{
	if (!Z_Registration_Info_UClass_UArticyCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyCondition.OuterSingleton, Z_Construct_UClass_UArticyCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyCondition.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyCondition>()
{
	return UArticyCondition::StaticClass();
}
UArticyCondition::UArticyCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyCondition);
UArticyCondition::~UArticyCondition() {}
// End Class UArticyCondition

// Begin Class UArticyScriptInstruction
void UArticyScriptInstruction::StaticRegisterNativesUArticyScriptInstruction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyScriptInstruction);
UClass* Z_Construct_UClass_UArticyScriptInstruction_NoRegister()
{
	return UArticyScriptInstruction::StaticClass();
}
struct Z_Construct_UClass_UArticyScriptInstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A script instruction that executes an expression.\n */" },
#endif
		{ "IncludePath", "ArticyScriptFragment.h" },
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A script instruction that executes an expression." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyScriptInstruction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyScriptInstruction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyScriptFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptInstruction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyScriptInstruction_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyInstructionProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyScriptInstruction, IArticyInstructionProvider), false },  // 1219177634
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyScriptInstruction_Statics::ClassParams = {
	&UArticyScriptInstruction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyScriptInstruction_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyScriptInstruction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyScriptInstruction()
{
	if (!Z_Registration_Info_UClass_UArticyScriptInstruction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyScriptInstruction.OuterSingleton, Z_Construct_UClass_UArticyScriptInstruction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyScriptInstruction.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyScriptInstruction>()
{
	return UArticyScriptInstruction::StaticClass();
}
UArticyScriptInstruction::UArticyScriptInstruction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyScriptInstruction);
UArticyScriptInstruction::~UArticyScriptInstruction() {}
// End Class UArticyScriptInstruction

// Begin Class UArticyInstruction Function GetInstruction
struct Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics
{
	struct ArticyInstruction_eventGetInstruction_Parms
	{
		UArticyScriptInstruction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Instruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Retrieves the script instruction associated with this instruction node.\n     *\n     * @return A pointer to the script instruction.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the script instruction associated with this instruction node.\n\n@return A pointer to the script instruction." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyInstruction_eventGetInstruction_Parms, ReturnValue), Z_Construct_UClass_UArticyScriptInstruction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyInstruction, nullptr, "GetInstruction", nullptr, nullptr, Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::ArticyInstruction_eventGetInstruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::ArticyInstruction_eventGetInstruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyInstruction_GetInstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyInstruction_GetInstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyInstruction::execGetInstruction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyScriptInstruction**)Z_Param__Result=P_THIS->GetInstruction();
	P_NATIVE_END;
}
// End Class UArticyInstruction Function GetInstruction

// Begin Class UArticyInstruction
void UArticyInstruction::StaticRegisterNativesUArticyInstruction()
{
	UClass* Class = UArticyInstruction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstruction", &UArticyInstruction::execGetInstruction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyInstruction);
UClass* Z_Construct_UClass_UArticyInstruction_NoRegister()
{
	return UArticyInstruction::StaticClass();
}
struct Z_Construct_UClass_UArticyInstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An instruction node, which has a script instruction.\n */" },
#endif
		{ "IncludePath", "ArticyScriptFragment.h" },
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An instruction node, which has a script instruction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instruction_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The script instruction associated with this instruction node.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyScriptFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The script instruction associated with this instruction node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instruction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyInstruction_GetInstruction, "GetInstruction" }, // 4060103348
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyInstruction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyInstruction_Statics::NewProp_Instruction = { "Instruction", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyInstruction, Instruction), Z_Construct_UClass_UArticyScriptInstruction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instruction_MetaData), NewProp_Instruction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyInstruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyInstruction_Statics::NewProp_Instruction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInstruction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyInstruction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInstruction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyInstruction_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyInstructionProvider_NoRegister, (int32)VTABLE_OFFSET(UArticyInstruction, IArticyInstructionProvider), false },  // 1219177634
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyInstruction_Statics::ClassParams = {
	&UArticyInstruction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyInstruction_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInstruction_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInstruction_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyInstruction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyInstruction()
{
	if (!Z_Registration_Info_UClass_UArticyInstruction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyInstruction.OuterSingleton, Z_Construct_UClass_UArticyInstruction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyInstruction.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyInstruction>()
{
	return UArticyInstruction::StaticClass();
}
UArticyInstruction::UArticyInstruction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyInstruction);
UArticyInstruction::~UArticyInstruction() {}
// End Class UArticyInstruction

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyScriptFragment, UArticyScriptFragment::StaticClass, TEXT("UArticyScriptFragment"), &Z_Registration_Info_UClass_UArticyScriptFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyScriptFragment), 3576972193U) },
		{ Z_Construct_UClass_UArticyScriptCondition, UArticyScriptCondition::StaticClass, TEXT("UArticyScriptCondition"), &Z_Registration_Info_UClass_UArticyScriptCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyScriptCondition), 310032446U) },
		{ Z_Construct_UClass_UArticyCondition, UArticyCondition::StaticClass, TEXT("UArticyCondition"), &Z_Registration_Info_UClass_UArticyCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyCondition), 2870830794U) },
		{ Z_Construct_UClass_UArticyScriptInstruction, UArticyScriptInstruction::StaticClass, TEXT("UArticyScriptInstruction"), &Z_Registration_Info_UClass_UArticyScriptInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyScriptInstruction), 3249469046U) },
		{ Z_Construct_UClass_UArticyInstruction, UArticyInstruction::StaticClass, TEXT("UArticyInstruction"), &Z_Registration_Info_UClass_UArticyInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyInstruction), 732454966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_3154351705(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyScriptFragment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
