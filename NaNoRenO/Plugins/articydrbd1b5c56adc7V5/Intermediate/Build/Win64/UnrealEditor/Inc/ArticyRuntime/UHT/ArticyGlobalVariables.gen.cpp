// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyGlobalVariables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyGlobalVariables() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseVariableSet();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseVariableSet_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBool();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBool_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyGlobalVariables();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyGlobalVariables_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInt();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyInt_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyReflectable_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyString();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyString_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyVariable();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyVariable_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UShadowStateManager_NoRegister();
ARTICYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyGvName();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Delegate FOnGVChanged
struct Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics
{
	struct _Script_ArticyRuntime_eventOnGVChanged_Parms
	{
		UArticyVariable* Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ArticyRuntime_eventOnGVChanged_Parms, Variable), Z_Construct_UClass_UArticyVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ArticyRuntime, nullptr, "OnGVChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::_Script_ArticyRuntime_eventOnGVChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::_Script_ArticyRuntime_eventOnGVChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGVChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGVChanged, UArticyVariable* Variable)
{
	struct _Script_ArticyRuntime_eventOnGVChanged_Parms
	{
		UArticyVariable* Variable;
	};
	_Script_ArticyRuntime_eventOnGVChanged_Parms Parms;
	Parms.Variable=Variable;
	OnGVChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGVChanged

// Begin ScriptStruct FArticyGvName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyGvName;
class UScriptStruct* FArticyGvName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGvName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyGvName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyGvName, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyGvName"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyGvName.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyGvName>()
{
	return FArticyGvName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyGvName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FullName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyGvName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyGvName_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGvName, FullName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullName_MetaData), NewProp_FullName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyGvName_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGvName, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArticyGvName_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyGvName, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyGvName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGvName_Statics::NewProp_FullName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGvName_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyGvName_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGvName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyGvName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyGvName",
	Z_Construct_UScriptStruct_FArticyGvName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGvName_Statics::PropPointers),
	sizeof(FArticyGvName),
	alignof(FArticyGvName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyGvName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyGvName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyGvName()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyGvName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyGvName.InnerSingleton, Z_Construct_UScriptStruct_FArticyGvName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyGvName.InnerSingleton;
}
// End ScriptStruct FArticyGvName

// Begin Class UArticyVariable
void UArticyVariable::StaticRegisterNativesUArticyVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyVariable);
UClass* Z_Construct_UClass_UArticyVariable_NoRegister()
{
	return UArticyVariable::StaticClass();
}
struct Z_Construct_UClass_UArticyVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyGlobalVariables.h" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVariableChanged_MetaData[] = {
		{ "Category", "Callback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This delegate is broadcast every time the (layer zero) value of this variable changes.\n\x09 * A reference to the instance of the variable is passed as parameter.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This delegate is broadcast every time the (layer zero) value of this variable changes.\nA reference to the instance of the variable is passed as parameter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GVName_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of this variable in the form Namespace.Variable */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this variable in the form Namespace.Variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Store_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVariableChanged;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GVName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Store;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArticyVariable_Statics::NewProp_OnVariableChanged = { "OnVariableChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyVariable, OnVariableChanged), Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVariableChanged_MetaData), NewProp_OnVariableChanged_MetaData) }; // 293273055
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArticyVariable_Statics::NewProp_GVName = { "GVName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyVariable, GVName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GVName_MetaData), NewProp_GVName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyVariable_Statics::NewProp_Store = { "Store", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyVariable, Store), Z_Construct_UClass_UArticyGlobalVariables_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Store_MetaData), NewProp_Store_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyVariable_Statics::NewProp_OnVariableChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyVariable_Statics::NewProp_GVName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyVariable_Statics::NewProp_Store,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyVariable_Statics::ClassParams = {
	&UArticyVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyVariable_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyVariable()
{
	if (!Z_Registration_Info_UClass_UArticyVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyVariable.OuterSingleton, Z_Construct_UClass_UArticyVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyVariable.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyVariable>()
{
	return UArticyVariable::StaticClass();
}
UArticyVariable::UArticyVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyVariable);
// End Class UArticyVariable

// Begin Class UArticyInt Function Set
struct Z_Construct_UFunction_UArticyInt_Set_Statics
{
	struct ArticyInt_eventSet_Parms
	{
		int32 NewValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ValueAccess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the value of this variable.\n\x09 * This internally calls the setter, so it guarantees that the correct shadow state is used (if any).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the value of this variable.\nThis internally calls the setter, so it guarantees that the correct shadow state is used (if any)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyInt_Set_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyInt_eventSet_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyInt_Set_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyInt_eventSet_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyInt_Set_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyInt_Set_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyInt_Set_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInt_Set_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyInt_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyInt, nullptr, "Set", nullptr, nullptr, Z_Construct_UFunction_UArticyInt_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInt_Set_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyInt_Set_Statics::ArticyInt_eventSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyInt_Set_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyInt_Set_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyInt_Set_Statics::ArticyInt_eventSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyInt_Set()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyInt_Set_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyInt::execSet)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Set(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UArticyInt Function Set

// Begin Class UArticyInt
void UArticyInt::StaticRegisterNativesUArticyInt()
{
	UClass* Class = UArticyInt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Set", &UArticyInt::execSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyInt);
UClass* Z_Construct_UClass_UArticyInt_NoRegister()
{
	return UArticyInt::StaticClass();
}
struct Z_Construct_UClass_UArticyInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "IncludePath", "ArticyGlobalVariables.h" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current value of this variable (i.e. the value of a shadow state, if any is active). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current value of this variable (i.e. the value of a shadow state, if any is active)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyInt_Set, "Set" }, // 2355502159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyInt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArticyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyInt, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyInt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyVariable,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyInt_Statics::ClassParams = {
	&UArticyInt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyInt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInt_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyInt_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyInt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyInt()
{
	if (!Z_Registration_Info_UClass_UArticyInt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyInt.OuterSingleton, Z_Construct_UClass_UArticyInt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyInt.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyInt>()
{
	return UArticyInt::StaticClass();
}
UArticyInt::UArticyInt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyInt);
UArticyInt::~UArticyInt() {}
// End Class UArticyInt

// Begin Class UArticyBool Function Set
struct Z_Construct_UFunction_UArticyBool_Set_Statics
{
	struct ArticyBool_eventSet_Parms
	{
		bool NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ValueAccess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the value of this variable.\n\x09 * This internally calls the setter, so it guarantees that the correct shadow state is used (if any).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the value of this variable.\nThis internally calls the setter, so it guarantees that the correct shadow state is used (if any)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((ArticyBool_eventSet_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyBool_eventSet_Parms), &Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyBool_eventSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyBool_eventSet_Parms), &Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyBool_Set_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBool_Set_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBool_Set_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyBool_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyBool, nullptr, "Set", nullptr, nullptr, Z_Construct_UFunction_UArticyBool_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBool_Set_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyBool_Set_Statics::ArticyBool_eventSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBool_Set_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyBool_Set_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyBool_Set_Statics::ArticyBool_eventSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyBool_Set()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyBool_Set_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyBool::execSet)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Set(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UArticyBool Function Set

// Begin Class UArticyBool
void UArticyBool::StaticRegisterNativesUArticyBool()
{
	UClass* Class = UArticyBool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Set", &UArticyBool::execSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyBool);
UClass* Z_Construct_UClass_UArticyBool_NoRegister()
{
	return UArticyBool::StaticClass();
}
struct Z_Construct_UClass_UArticyBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "IncludePath", "ArticyGlobalVariables.h" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current value of this variable (i.e. the value of a shadow state, if any is active). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current value of this variable (i.e. the value of a shadow state, if any is active)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyBool_Set, "Set" }, // 3727110306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UArticyBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((UArticyBool*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyBool), &Z_Construct_UClass_UArticyBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyVariable,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyBool_Statics::ClassParams = {
	&UArticyBool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyBool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBool_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyBool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyBool()
{
	if (!Z_Registration_Info_UClass_UArticyBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyBool.OuterSingleton, Z_Construct_UClass_UArticyBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyBool.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyBool>()
{
	return UArticyBool::StaticClass();
}
UArticyBool::UArticyBool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyBool);
UArticyBool::~UArticyBool() {}
// End Class UArticyBool

// Begin Class UArticyString Function Set
struct Z_Construct_UFunction_UArticyString_Set_Statics
{
	struct ArticyString_eventSet_Parms
	{
		FString NewValue;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ValueAccess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the value of this variable.\n\x09 * This internally calls the setter, so it guarantees that the correct shadow state is used (if any).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the value of this variable.\nThis internally calls the setter, so it guarantees that the correct shadow state is used (if any)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyString_Set_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyString_eventSet_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyString_Set_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyString_eventSet_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyString_Set_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyString_Set_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyString_Set_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyString_Set_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyString_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyString, nullptr, "Set", nullptr, nullptr, Z_Construct_UFunction_UArticyString_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyString_Set_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyString_Set_Statics::ArticyString_eventSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyString_Set_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyString_Set_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyString_Set_Statics::ArticyString_eventSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyString_Set()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyString_Set_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyString::execSet)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->Set(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UArticyString Function Set

// Begin Class UArticyString
void UArticyString::StaticRegisterNativesUArticyString()
{
	UClass* Class = UArticyString::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Set", &UArticyString::execSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyString);
UClass* Z_Construct_UClass_UArticyString_NoRegister()
{
	return UArticyString::StaticClass();
}
struct Z_Construct_UClass_UArticyString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "IncludePath", "ArticyGlobalVariables.h" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current value of this variable (i.e. the value of a shadow state, if any is active). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current value of this variable (i.e. the value of a shadow state, if any is active)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyString_Set, "Set" }, // 3888940704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyString, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyString_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyVariable,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyString_Statics::ClassParams = {
	&UArticyString::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyString_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyString_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyString_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyString_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyString()
{
	if (!Z_Registration_Info_UClass_UArticyString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyString.OuterSingleton, Z_Construct_UClass_UArticyString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyString.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyString>()
{
	return UArticyString::StaticClass();
}
UArticyString::UArticyString(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyString);
UArticyString::~UArticyString() {}
// End Class UArticyString

// Begin Class UArticyBaseVariableSet Function BroadcastOnVariableChanged
struct Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics
{
	struct ArticyBaseVariableSet_eventBroadcastOnVariableChanged_Parms
	{
		UArticyVariable* Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyBaseVariableSet_eventBroadcastOnVariableChanged_Parms, Variable), Z_Construct_UClass_UArticyVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyBaseVariableSet, nullptr, "BroadcastOnVariableChanged", nullptr, nullptr, Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::ArticyBaseVariableSet_eventBroadcastOnVariableChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::ArticyBaseVariableSet_eventBroadcastOnVariableChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyBaseVariableSet::execBroadcastOnVariableChanged)
{
	P_GET_OBJECT(UArticyVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastOnVariableChanged(Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UArticyBaseVariableSet Function BroadcastOnVariableChanged

// Begin Class UArticyBaseVariableSet Function GetVariables
struct Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics
{
	struct ArticyBaseVariableSet_eventGetVariables_Parms
	{
		TArray<UArticyVariable*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyGlobalVariables" },
		{ "keywords", "global variables" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyBaseVariableSet_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyBaseVariableSet, nullptr, "GetVariables", nullptr, nullptr, Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::ArticyBaseVariableSet_eventGetVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::ArticyBaseVariableSet_eventGetVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyBaseVariableSet::execGetVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyVariable*>*)Z_Param__Result=P_THIS->GetVariables();
	P_NATIVE_END;
}
// End Class UArticyBaseVariableSet Function GetVariables

// Begin Class UArticyBaseVariableSet Function GetVariablesOfType
struct Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics
{
	struct ArticyBaseVariableSet_eventGetVariablesOfType_Parms
	{
		TSubclassOf<UArticyVariable> Type;
		TArray<UArticyVariable*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArticyGlobalVariables" },
		{ "DeterminesOutputType", "Type" },
		{ "keywords", "global variables" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyBaseVariableSet_eventGetVariablesOfType_Parms, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyBaseVariableSet_eventGetVariablesOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyBaseVariableSet, nullptr, "GetVariablesOfType", nullptr, nullptr, Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::ArticyBaseVariableSet_eventGetVariablesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::ArticyBaseVariableSet_eventGetVariablesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyBaseVariableSet::execGetVariablesOfType)
{
	P_GET_OBJECT(UClass,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyVariable*>*)Z_Param__Result=P_THIS->GetVariablesOfType(Z_Param_Type);
	P_NATIVE_END;
}
// End Class UArticyBaseVariableSet Function GetVariablesOfType

// Begin Class UArticyBaseVariableSet
void UArticyBaseVariableSet::StaticRegisterNativesUArticyBaseVariableSet()
{
	UClass* Class = UArticyBaseVariableSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastOnVariableChanged", &UArticyBaseVariableSet::execBroadcastOnVariableChanged },
		{ "GetVariables", &UArticyBaseVariableSet::execGetVariables },
		{ "GetVariablesOfType", &UArticyBaseVariableSet::execGetVariablesOfType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyBaseVariableSet);
UClass* Z_Construct_UClass_UArticyBaseVariableSet_NoRegister()
{
	return UArticyBaseVariableSet::StaticClass();
}
struct Z_Construct_UClass_UArticyBaseVariableSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------------------------------------------------------//\n" },
#endif
		{ "IncludePath", "ArticyGlobalVariables.h" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Category", "ArticyGlobalVariables" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVariableChanged_MetaData[] = {
		{ "Category", "Callback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This delegate is broadcast every time a variable inside this namespace changes.\n\x09 * A reference to the instance of the changed variable is passed as parameter.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This delegate is broadcast every time a variable inside this namespace changes.\nA reference to the instance of the changed variable is passed as parameter." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVariableChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyBaseVariableSet_BroadcastOnVariableChanged, "BroadcastOnVariableChanged" }, // 2886847927
		{ &Z_Construct_UFunction_UArticyBaseVariableSet_GetVariables, "GetVariables" }, // 3092293103
		{ &Z_Construct_UFunction_UArticyBaseVariableSet_GetVariablesOfType, "GetVariablesOfType" }, // 545822226
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyBaseVariableSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyBaseVariableSet_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArticyBaseVariableSet_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyBaseVariableSet, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArticyBaseVariableSet_Statics::NewProp_OnVariableChanged = { "OnVariableChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyBaseVariableSet, OnVariableChanged), Z_Construct_UDelegateFunction_ArticyRuntime_OnGVChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVariableChanged_MetaData), NewProp_OnVariableChanged_MetaData) }; // 293273055
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyBaseVariableSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBaseVariableSet_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBaseVariableSet_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyBaseVariableSet_Statics::NewProp_OnVariableChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseVariableSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyBaseVariableSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseVariableSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyBaseVariableSet_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UArticyReflectable_NoRegister, (int32)VTABLE_OFFSET(UArticyBaseVariableSet, IArticyReflectable), false },  // 3143690236
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyBaseVariableSet_Statics::ClassParams = {
	&UArticyBaseVariableSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyBaseVariableSet_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseVariableSet_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyBaseVariableSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyBaseVariableSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyBaseVariableSet()
{
	if (!Z_Registration_Info_UClass_UArticyBaseVariableSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyBaseVariableSet.OuterSingleton, Z_Construct_UClass_UArticyBaseVariableSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyBaseVariableSet.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyBaseVariableSet>()
{
	return UArticyBaseVariableSet::StaticClass();
}
UArticyBaseVariableSet::UArticyBaseVariableSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyBaseVariableSet);
UArticyBaseVariableSet::~UArticyBaseVariableSet() {}
// End Class UArticyBaseVariableSet

// Begin Class UArticyGlobalVariables Function DisableDebugLogging
struct Z_Construct_UFunction_UArticyGlobalVariables_DisableDebugLogging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_DisableDebugLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "DisableDebugLogging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_DisableDebugLogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_DisableDebugLogging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_DisableDebugLogging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_DisableDebugLogging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execDisableDebugLogging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableDebugLogging();
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function DisableDebugLogging

// Begin Class UArticyGlobalVariables Function EnableDebugLogging
struct Z_Construct_UFunction_UArticyGlobalVariables_EnableDebugLogging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_EnableDebugLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "EnableDebugLogging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_EnableDebugLogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_EnableDebugLogging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_EnableDebugLogging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_EnableDebugLogging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execEnableDebugLogging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableDebugLogging();
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function EnableDebugLogging

// Begin Class UArticyGlobalVariables Function GetBoolVariable
struct Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics
{
	struct ArticyGlobalVariables_eventGetBoolVariable_Parms
	{
		FArticyGvName GvName;
		bool bSucceeded;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GvName;
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_GvName = { "GvName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetBoolVariable_Parms, GvName), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
void Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((ArticyGlobalVariables_eventGetBoolVariable_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyGlobalVariables_eventGetBoolVariable_Parms), &Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyGlobalVariables_eventGetBoolVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyGlobalVariables_eventGetBoolVariable_Parms), &Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_GvName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "GetBoolVariable", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::ArticyGlobalVariables_eventGetBoolVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::ArticyGlobalVariables_eventGetBoolVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execGetBoolVariable)
{
	P_GET_STRUCT(FArticyGvName,Z_Param_GvName);
	P_GET_UBOOL_REF(Z_Param_Out_bSucceeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolVariable(Z_Param_GvName,Z_Param_Out_bSucceeded);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function GetBoolVariable

// Begin Class UArticyGlobalVariables Function GetIntVariable
struct Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics
{
	struct ArticyGlobalVariables_eventGetIntVariable_Parms
	{
		FArticyGvName GvName;
		bool bSucceeded;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GvName;
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_GvName = { "GvName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetIntVariable_Parms, GvName), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
void Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((ArticyGlobalVariables_eventGetIntVariable_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyGlobalVariables_eventGetIntVariable_Parms), &Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetIntVariable_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_GvName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "GetIntVariable", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::ArticyGlobalVariables_eventGetIntVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::ArticyGlobalVariables_eventGetIntVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execGetIntVariable)
{
	P_GET_STRUCT(FArticyGvName,Z_Param_GvName);
	P_GET_UBOOL_REF(Z_Param_Out_bSucceeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntVariable(Z_Param_GvName,Z_Param_Out_bSucceeded);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function GetIntVariable

// Begin Class UArticyGlobalVariables Function GetNamespace
struct Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics
{
	struct ArticyGlobalVariables_eventGetNamespace_Parms
	{
		FName Namespace;
		UArticyBaseVariableSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetNamespace_Parms, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetNamespace_Parms, ReturnValue), Z_Construct_UClass_UArticyBaseVariableSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "GetNamespace", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::ArticyGlobalVariables_eventGetNamespace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::ArticyGlobalVariables_eventGetNamespace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execGetNamespace)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Namespace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyBaseVariableSet**)Z_Param__Result=P_THIS->GetNamespace(Z_Param_Namespace);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function GetNamespace

// Begin Class UArticyGlobalVariables Function GetStringVariable
struct Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics
{
	struct ArticyGlobalVariables_eventGetStringVariable_Parms
	{
		FArticyGvName GvName;
		bool bSucceeded;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GvName;
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_GvName = { "GvName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetStringVariable_Parms, GvName), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
void Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((ArticyGlobalVariables_eventGetStringVariable_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyGlobalVariables_eventGetStringVariable_Parms), &Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetStringVariable_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_GvName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "GetStringVariable", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::ArticyGlobalVariables_eventGetStringVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::ArticyGlobalVariables_eventGetStringVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execGetStringVariable)
{
	P_GET_STRUCT(FArticyGvName,Z_Param_GvName);
	P_GET_UBOOL_REF(Z_Param_Out_bSucceeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringVariable(Z_Param_GvName,Z_Param_Out_bSucceeded);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function GetStringVariable

// Begin Class UArticyGlobalVariables Function GetVariableSets
struct Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics
{
	struct ArticyGlobalVariables_eventGetVariableSets_Parms
	{
		TArray<UArticyBaseVariableSet*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyBaseVariableSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventGetVariableSets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "GetVariableSets", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::ArticyGlobalVariables_eventGetVariableSets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::ArticyGlobalVariables_eventGetVariableSets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execGetVariableSets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyBaseVariableSet*>*)Z_Param__Result=P_THIS->GetVariableSets();
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function GetVariableSets

// Begin Class UArticyGlobalVariables Function PrintGlobalVariable
struct Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics
{
	struct ArticyGlobalVariables_eventPrintGlobalVariable_Parms
	{
		FArticyGvName GvName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Exec functions are only supported by a couple singleton classes\n\x09 * To make this exec compatible, one of those exec classes has to forward the call\n\x09 * See https://wiki.unrealengine.com/Exec_Functions for reference*/" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exec functions are only supported by a couple singleton classes\n       * To make this exec compatible, one of those exec classes has to forward the call\n       * See https://wiki.unrealengine.com/Exec_Functions for reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GvName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::NewProp_GvName = { "GvName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventPrintGlobalVariable_Parms, GvName), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::NewProp_GvName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "PrintGlobalVariable", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::ArticyGlobalVariables_eventPrintGlobalVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::ArticyGlobalVariables_eventPrintGlobalVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execPrintGlobalVariable)
{
	P_GET_STRUCT(FArticyGvName,Z_Param_GvName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintGlobalVariable(Z_Param_GvName);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function PrintGlobalVariable

// Begin Class UArticyGlobalVariables Function SetBoolVariable
struct Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics
{
	struct ArticyGlobalVariables_eventSetBoolVariable_Parms
	{
		FArticyGvName GvName;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GvName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::NewProp_GvName = { "GvName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventSetBoolVariable_Parms, GvName), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
void Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::NewProp_Value_SetBit(void* Obj)
{
	((ArticyGlobalVariables_eventSetBoolVariable_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyGlobalVariables_eventSetBoolVariable_Parms), &Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::NewProp_GvName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "SetBoolVariable", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::ArticyGlobalVariables_eventSetBoolVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::ArticyGlobalVariables_eventSetBoolVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execSetBoolVariable)
{
	P_GET_STRUCT(FArticyGvName,Z_Param_GvName);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolVariable(Z_Param_GvName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function SetBoolVariable

// Begin Class UArticyGlobalVariables Function SetIntVariable
struct Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics
{
	struct ArticyGlobalVariables_eventSetIntVariable_Parms
	{
		FArticyGvName GvName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GvName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::NewProp_GvName = { "GvName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventSetIntVariable_Parms, GvName), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventSetIntVariable_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::NewProp_GvName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "SetIntVariable", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::ArticyGlobalVariables_eventSetIntVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::ArticyGlobalVariables_eventSetIntVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execSetIntVariable)
{
	P_GET_STRUCT(FArticyGvName,Z_Param_GvName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntVariable(Z_Param_GvName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function SetIntVariable

// Begin Class UArticyGlobalVariables Function SetStringVariable
struct Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics
{
	struct ArticyGlobalVariables_eventSetStringVariable_Parms
	{
		FArticyGvName GvName;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setter" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GvName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::NewProp_GvName = { "GvName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventSetStringVariable_Parms, GvName), Z_Construct_UScriptStruct_FArticyGvName, METADATA_PARAMS(0, nullptr) }; // 90002509
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyGlobalVariables_eventSetStringVariable_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::NewProp_GvName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "SetStringVariable", nullptr, nullptr, Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::ArticyGlobalVariables_eventSetStringVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::ArticyGlobalVariables_eventSetStringVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execSetStringVariable)
{
	P_GET_STRUCT(FArticyGvName,Z_Param_GvName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringVariable(Z_Param_GvName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function SetStringVariable

// Begin Class UArticyGlobalVariables Function UnloadGlobalVariables
struct Z_Construct_UFunction_UArticyGlobalVariables_UnloadGlobalVariables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Packages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Unloads the global variables, which causes that all changes get removed. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unloads the global variables, which causes that all changes get removed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyGlobalVariables_UnloadGlobalVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyGlobalVariables, nullptr, "UnloadGlobalVariables", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyGlobalVariables_UnloadGlobalVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyGlobalVariables_UnloadGlobalVariables_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArticyGlobalVariables_UnloadGlobalVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyGlobalVariables_UnloadGlobalVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyGlobalVariables::execUnloadGlobalVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadGlobalVariables();
	P_NATIVE_END;
}
// End Class UArticyGlobalVariables Function UnloadGlobalVariables

// Begin Class UArticyGlobalVariables
void UArticyGlobalVariables::StaticRegisterNativesUArticyGlobalVariables()
{
	UClass* Class = UArticyGlobalVariables::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableDebugLogging", &UArticyGlobalVariables::execDisableDebugLogging },
		{ "EnableDebugLogging", &UArticyGlobalVariables::execEnableDebugLogging },
		{ "GetBoolVariable", &UArticyGlobalVariables::execGetBoolVariable },
		{ "GetIntVariable", &UArticyGlobalVariables::execGetIntVariable },
		{ "GetNamespace", &UArticyGlobalVariables::execGetNamespace },
		{ "GetStringVariable", &UArticyGlobalVariables::execGetStringVariable },
		{ "GetVariableSets", &UArticyGlobalVariables::execGetVariableSets },
		{ "PrintGlobalVariable", &UArticyGlobalVariables::execPrintGlobalVariable },
		{ "SetBoolVariable", &UArticyGlobalVariables::execSetBoolVariable },
		{ "SetIntVariable", &UArticyGlobalVariables::execSetIntVariable },
		{ "SetStringVariable", &UArticyGlobalVariables::execSetStringVariable },
		{ "UnloadGlobalVariables", &UArticyGlobalVariables::execUnloadGlobalVariables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyGlobalVariables);
UClass* Z_Construct_UClass_UArticyGlobalVariables_NoRegister()
{
	return UArticyGlobalVariables::StaticClass();
}
struct Z_Construct_UClass_UArticyGlobalVariables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The base class for the (generated) ArticyGlobalVariables class.\n */" },
#endif
		{ "IncludePath", "ArticyGlobalVariables.h" },
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base class for the (generated) ArticyGlobalVariables class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogVariableAccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyGlobalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VariableSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariableSets;
	static void NewProp_bLogVariableAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogVariableAccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyGlobalVariables_DisableDebugLogging, "DisableDebugLogging" }, // 3985611596
		{ &Z_Construct_UFunction_UArticyGlobalVariables_EnableDebugLogging, "EnableDebugLogging" }, // 2433731858
		{ &Z_Construct_UFunction_UArticyGlobalVariables_GetBoolVariable, "GetBoolVariable" }, // 732763859
		{ &Z_Construct_UFunction_UArticyGlobalVariables_GetIntVariable, "GetIntVariable" }, // 1830802695
		{ &Z_Construct_UFunction_UArticyGlobalVariables_GetNamespace, "GetNamespace" }, // 1466804219
		{ &Z_Construct_UFunction_UArticyGlobalVariables_GetStringVariable, "GetStringVariable" }, // 14809282
		{ &Z_Construct_UFunction_UArticyGlobalVariables_GetVariableSets, "GetVariableSets" }, // 1515767595
		{ &Z_Construct_UFunction_UArticyGlobalVariables_PrintGlobalVariable, "PrintGlobalVariable" }, // 404918334
		{ &Z_Construct_UFunction_UArticyGlobalVariables_SetBoolVariable, "SetBoolVariable" }, // 3809643762
		{ &Z_Construct_UFunction_UArticyGlobalVariables_SetIntVariable, "SetIntVariable" }, // 4033741932
		{ &Z_Construct_UFunction_UArticyGlobalVariables_SetStringVariable, "SetStringVariable" }, // 492586077
		{ &Z_Construct_UFunction_UArticyGlobalVariables_UnloadGlobalVariables, "UnloadGlobalVariables" }, // 3597442982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyGlobalVariables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_VariableSets_Inner = { "VariableSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyBaseVariableSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_VariableSets = { "VariableSets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyGlobalVariables, VariableSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableSets_MetaData), NewProp_VariableSets_MetaData) };
void Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_bLogVariableAccess_SetBit(void* Obj)
{
	((UArticyGlobalVariables*)Obj)->bLogVariableAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_bLogVariableAccess = { "bLogVariableAccess", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyGlobalVariables), &Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_bLogVariableAccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogVariableAccess_MetaData), NewProp_bLogVariableAccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyGlobalVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_VariableSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_VariableSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyGlobalVariables_Statics::NewProp_bLogVariableAccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyGlobalVariables_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyGlobalVariables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyGlobalVariables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyGlobalVariables_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UShadowStateManager_NoRegister, (int32)VTABLE_OFFSET(UArticyGlobalVariables, IShadowStateManager), false },  // 464171741
	{ Z_Construct_UClass_UArticyReflectable_NoRegister, (int32)VTABLE_OFFSET(UArticyGlobalVariables, IArticyReflectable), false },  // 3143690236
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyGlobalVariables_Statics::ClassParams = {
	&UArticyGlobalVariables::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyGlobalVariables_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyGlobalVariables_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyGlobalVariables_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyGlobalVariables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyGlobalVariables()
{
	if (!Z_Registration_Info_UClass_UArticyGlobalVariables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyGlobalVariables.OuterSingleton, Z_Construct_UClass_UArticyGlobalVariables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyGlobalVariables.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyGlobalVariables>()
{
	return UArticyGlobalVariables::StaticClass();
}
UArticyGlobalVariables::UArticyGlobalVariables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyGlobalVariables);
UArticyGlobalVariables::~UArticyGlobalVariables() {}
// End Class UArticyGlobalVariables

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyGvName::StaticStruct, Z_Construct_UScriptStruct_FArticyGvName_Statics::NewStructOps, TEXT("ArticyGvName"), &Z_Registration_Info_UScriptStruct_ArticyGvName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyGvName), 90002509U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyVariable, UArticyVariable::StaticClass, TEXT("UArticyVariable"), &Z_Registration_Info_UClass_UArticyVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyVariable), 2714787368U) },
		{ Z_Construct_UClass_UArticyInt, UArticyInt::StaticClass, TEXT("UArticyInt"), &Z_Registration_Info_UClass_UArticyInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyInt), 2895071577U) },
		{ Z_Construct_UClass_UArticyBool, UArticyBool::StaticClass, TEXT("UArticyBool"), &Z_Registration_Info_UClass_UArticyBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyBool), 848741620U) },
		{ Z_Construct_UClass_UArticyString, UArticyString::StaticClass, TEXT("UArticyString"), &Z_Registration_Info_UClass_UArticyString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyString), 102900200U) },
		{ Z_Construct_UClass_UArticyBaseVariableSet, UArticyBaseVariableSet::StaticClass, TEXT("UArticyBaseVariableSet"), &Z_Registration_Info_UClass_UArticyBaseVariableSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyBaseVariableSet), 211312586U) },
		{ Z_Construct_UClass_UArticyGlobalVariables, UArticyGlobalVariables::StaticClass, TEXT("UArticyGlobalVariables"), &Z_Registration_Info_UClass_UArticyGlobalVariables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyGlobalVariables), 1816177602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_1475409283(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyGlobalVariables_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
