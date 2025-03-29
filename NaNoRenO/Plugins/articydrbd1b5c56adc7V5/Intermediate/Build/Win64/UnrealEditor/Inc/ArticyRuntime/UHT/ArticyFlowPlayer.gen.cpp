// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyFlowPlayer.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
#include "ArticyRuntime/Public/ArticyRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyFlowPlayer() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_AArticyFlowDebugger();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_AArticyFlowDebugger_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyAlternativeGlobalVariables_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPlayer();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPlayer_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyGlobalVariables_NoRegister();
ARTICYRUNTIME_API UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyPausableType();
ARTICYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature();
ARTICYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature();
ARTICYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature();
ARTICYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyBranch();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyRef();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Enum EArticyPausableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArticyPausableType;
static UEnum* EArticyPausableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArticyPausableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArticyPausableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArticyRuntime_EArticyPausableType, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("EArticyPausableType"));
	}
	return Z_Registration_Info_UEnum_EArticyPausableType.OuterSingleton;
}
template<> ARTICYRUNTIME_API UEnum* StaticEnum<EArticyPausableType>()
{
	return EArticyPausableType_StaticEnum();
}
struct Z_Construct_UEnum_ArticyRuntime_EArticyPausableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the various types of Articy flow nodes that can be paused on.\n */" },
#endif
		{ "Condition.Name", "EArticyPausableType::Condition" },
		{ "Dialogue.Name", "EArticyPausableType::Dialogue" },
		{ "DialogueFragment.Name", "EArticyPausableType::DialogueFragment" },
		{ "FlowFragment.Name", "EArticyPausableType::FlowFragment" },
		{ "Hub.Name", "EArticyPausableType::Hub" },
		{ "Instruction.Name", "EArticyPausableType::Instruction" },
		{ "Jump.Name", "EArticyPausableType::Jump" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
		{ "Pin.Name", "EArticyPausableType::Pin" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the various types of Articy flow nodes that can be paused on." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArticyPausableType::FlowFragment", (int64)EArticyPausableType::FlowFragment },
		{ "EArticyPausableType::Dialogue", (int64)EArticyPausableType::Dialogue },
		{ "EArticyPausableType::DialogueFragment", (int64)EArticyPausableType::DialogueFragment },
		{ "EArticyPausableType::Hub", (int64)EArticyPausableType::Hub },
		{ "EArticyPausableType::Jump", (int64)EArticyPausableType::Jump },
		{ "EArticyPausableType::Condition", (int64)EArticyPausableType::Condition },
		{ "EArticyPausableType::Instruction", (int64)EArticyPausableType::Instruction },
		{ "EArticyPausableType::Pin", (int64)EArticyPausableType::Pin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArticyRuntime_EArticyPausableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	"EArticyPausableType",
	"EArticyPausableType",
	Z_Construct_UEnum_ArticyRuntime_EArticyPausableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyPausableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArticyRuntime_EArticyPausableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArticyRuntime_EArticyPausableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArticyRuntime_EArticyPausableType()
{
	if (!Z_Registration_Info_UEnum_EArticyPausableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArticyPausableType.InnerSingleton, Z_Construct_UEnum_ArticyRuntime_EArticyPausableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArticyPausableType.InnerSingleton;
}
// End Enum EArticyPausableType

// Begin ScriptStruct FArticyBranch
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyBranch;
class UScriptStruct* FArticyBranch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyBranch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyBranch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyBranch, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyBranch"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyBranch.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyBranch>()
{
	return FArticyBranch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyBranch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a branch in the Articy flow, which consists of a path of nodes.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a branch in the Articy flow, which consists of a path of nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The list of nodes this branch contains.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of nodes this branch contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is true if all conditions along the path evaluate to true. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is true if all conditions along the path evaluate to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyBranch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyBranch, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FArticyBranch*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArticyBranch), &Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyBranch, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyBranch_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyBranch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyBranch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyBranch",
	Z_Construct_UScriptStruct_FArticyBranch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyBranch_Statics::PropPointers),
	sizeof(FArticyBranch),
	alignof(FArticyBranch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyBranch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyBranch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyBranch()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyBranch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyBranch.InnerSingleton, Z_Construct_UScriptStruct_FArticyBranch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyBranch.InnerSingleton;
}
// End ScriptStruct FArticyBranch

// Begin Delegate FOnPushState
struct Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "OnPushState__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UArticyFlowPlayer::FOnPushState_DelegateWrapper(const FMulticastScriptDelegate& OnPushState)
{
	OnPushState.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPushState

// Begin Delegate FOnPopState
struct Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "OnPopState__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UArticyFlowPlayer::FOnPopState_DelegateWrapper(const FMulticastScriptDelegate& OnPopState)
{
	OnPopState.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPopState

// Begin Delegate FOnPlayerPaused
struct Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics
{
	struct ArticyFlowPlayer_eventOnPlayerPaused_Parms
	{
		TScriptInterface<IArticyFlowObject> PausedOn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PausedOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::NewProp_PausedOn = { "PausedOn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventOnPlayerPaused_Parms, PausedOn), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::NewProp_PausedOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "OnPlayerPaused__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::ArticyFlowPlayer_eventOnPlayerPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::ArticyFlowPlayer_eventOnPlayerPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UArticyFlowPlayer::FOnPlayerPaused_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerPaused, const TScriptInterface<IArticyFlowObject>& PausedOn)
{
	struct ArticyFlowPlayer_eventOnPlayerPaused_Parms
	{
		TScriptInterface<IArticyFlowObject> PausedOn;
	};
	ArticyFlowPlayer_eventOnPlayerPaused_Parms Parms;
	Parms.PausedOn=PausedOn;
	OnPlayerPaused.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerPaused

// Begin Delegate FOnBranchesUpdated
struct Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics
{
	struct ArticyFlowPlayer_eventOnBranchesUpdated_Parms
	{
		TArray<FArticyBranch> AvailableBranches;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableBranches_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableBranches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableBranches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::NewProp_AvailableBranches_Inner = { "AvailableBranches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(0, nullptr) }; // 4044271609
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::NewProp_AvailableBranches = { "AvailableBranches", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventOnBranchesUpdated_Parms, AvailableBranches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableBranches_MetaData), NewProp_AvailableBranches_MetaData) }; // 4044271609
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::NewProp_AvailableBranches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::NewProp_AvailableBranches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "OnBranchesUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::ArticyFlowPlayer_eventOnBranchesUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::ArticyFlowPlayer_eventOnBranchesUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UArticyFlowPlayer::FOnBranchesUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnBranchesUpdated, TArray<FArticyBranch> const& AvailableBranches)
{
	struct ArticyFlowPlayer_eventOnBranchesUpdated_Parms
	{
		TArray<FArticyBranch> AvailableBranches;
	};
	ArticyFlowPlayer_eventOnBranchesUpdated_Parms Parms;
	Parms.AvailableBranches=AvailableBranches;
	OnBranchesUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBranchesUpdated

// Begin Class UArticyFlowPlayer Function FinishCurrentPausedObject
struct Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics
{
	struct ArticyFlowPlayer_eventFinishCurrentPausedObject_Parms
	{
		int32 PinIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Calls the script on an output pin of the current object */" },
#endif
		{ "CPP_Default_PinIndex", "0" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls the script on an output pin of the current object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PinIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::NewProp_PinIndex = { "PinIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventFinishCurrentPausedObject_Parms, PinIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::NewProp_PinIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "FinishCurrentPausedObject", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::ArticyFlowPlayer_eventFinishCurrentPausedObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::ArticyFlowPlayer_eventFinishCurrentPausedObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execFinishCurrentPausedObject)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PinIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishCurrentPausedObject(Z_Param_PinIndex);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function FinishCurrentPausedObject

// Begin Class UArticyFlowPlayer Function GetAvailableBranches
struct Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics
{
	struct ArticyFlowPlayer_eventGetAvailableBranches_Parms
	{
		TArray<FArticyBranch> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the currently available branches. This does not re-explore the branches. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the currently available branches. This does not re-explore the branches." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(0, nullptr) }; // 4044271609
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventGetAvailableBranches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4044271609
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "GetAvailableBranches", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::ArticyFlowPlayer_eventGetAvailableBranches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::ArticyFlowPlayer_eventGetAvailableBranches_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execGetAvailableBranches)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FArticyBranch>*)Z_Param__Result=P_THIS->GetAvailableBranches();
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function GetAvailableBranches

// Begin Class UArticyFlowPlayer Function GetCursor
struct Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics
{
	struct ArticyFlowPlayer_eventGetCursor_Parms
	{
		TScriptInterface<IArticyFlowObject> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the Cursor (current node). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Cursor (current node)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000582, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventGetCursor_Parms, ReturnValue), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "GetCursor", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::ArticyFlowPlayer_eventGetCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::ArticyFlowPlayer_eventGetCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_GetCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_GetCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execGetCursor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IArticyFlowObject>*)Z_Param__Result=P_THIS->GetCursor();
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function GetCursor

// Begin Class UArticyFlowPlayer Function GetGVs
struct Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics
{
	struct ArticyFlowPlayer_eventGetGVs_Parms
	{
		UArticyGlobalVariables* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Get the GV instance used for expresso script execution.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the GV instance used for expresso script execution." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventGetGVs_Parms, ReturnValue), Z_Construct_UClass_UArticyGlobalVariables_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "GetGVs", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::ArticyFlowPlayer_eventGetGVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::ArticyFlowPlayer_eventGetGVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_GetGVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_GetGVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execGetGVs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyGlobalVariables**)Z_Param__Result=P_THIS->GetGVs();
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function GetGVs

// Begin Class UArticyFlowPlayer Function GetMethodsProvider
struct Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics
{
	struct ArticyFlowPlayer_eventGetMethodsProvider_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Get the UserMethodsProvider used for resolving user defined methods.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the UserMethodsProvider used for resolving user defined methods." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventGetMethodsProvider_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "GetMethodsProvider", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::ArticyFlowPlayer_eventGetMethodsProvider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::ArticyFlowPlayer_eventGetMethodsProvider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execGetMethodsProvider)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetMethodsProvider();
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function GetMethodsProvider

// Begin Class UArticyFlowPlayer Function GetStartNode
struct Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics
{
	struct ArticyFlowPlayer_eventGetStartNode_Parms
	{
		FArticyRef ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the last set StartOn node */" },
#endif
		{ "DisplayName", "Get Start Node" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the last set StartOn node" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventGetStartNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(0, nullptr) }; // 321074496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "GetStartNode", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::ArticyFlowPlayer_eventGetStartNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::ArticyFlowPlayer_eventGetStartNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execGetStartNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FArticyRef*)Z_Param__Result=P_THIS->GetStartNode();
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function GetStartNode

// Begin Class UArticyFlowPlayer Function IgnoresInvalidBranches
struct Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics
{
	struct ArticyFlowPlayer_eventIgnoresInvalidBranches_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wether bIgnoreInvalidBranches is set. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wether bIgnoreInvalidBranches is set." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyFlowPlayer_eventIgnoresInvalidBranches_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFlowPlayer_eventIgnoresInvalidBranches_Parms), &Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "IgnoresInvalidBranches", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::ArticyFlowPlayer_eventIgnoresInvalidBranches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::ArticyFlowPlayer_eventIgnoresInvalidBranches_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execIgnoresInvalidBranches)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IgnoresInvalidBranches();
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function IgnoresInvalidBranches

// Begin Class UArticyFlowPlayer Function Play
struct Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics
{
	struct ArticyFlowPlayer_eventPlay_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Play a branch, identified by its index in the AvailableBranches array. */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a branch, identified by its index in the AvailableBranches array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventPlay_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::ArticyFlowPlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::ArticyFlowPlayer_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execPlay)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function Play

// Begin Class UArticyFlowPlayer Function PlayBranch
struct Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics
{
	struct ArticyFlowPlayer_eventPlayBranch_Parms
	{
		FArticyBranch Branch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Traverse this branch to the end, executing all scripts and updating the Cursor\n     * to the branche's target.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traverse this branch to the end, executing all scripts and updating the Cursor\nto the branche's target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventPlayBranch_Parms, Branch), Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) }; // 4044271609
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "PlayBranch", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::ArticyFlowPlayer_eventPlayBranch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::ArticyFlowPlayer_eventPlayBranch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execPlayBranch)
{
	P_GET_STRUCT_REF(FArticyBranch,Z_Param_Out_Branch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayBranch(Z_Param_Out_Branch);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function PlayBranch

// Begin Class UArticyFlowPlayer Function SetCursorTo
struct Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics
{
	struct ArticyFlowPlayer_eventSetCursorTo_Parms
	{
		TScriptInterface<IArticyFlowObject> Node;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the Cursor (current node) to this Node and updates the available branches. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Cursor (current node) to this Node and updates the available branches." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventSetCursorTo_Parms, Node), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "SetCursorTo", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::ArticyFlowPlayer_eventSetCursorTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::ArticyFlowPlayer_eventSetCursorTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execSetCursorTo)
{
	P_GET_TINTERFACE(IArticyFlowObject,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCursorTo(Z_Param_Node);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function SetCursorTo

// Begin Class UArticyFlowPlayer Function SetIgnoreInvalidBranches
struct Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics
{
	struct ArticyFlowPlayer_eventSetIgnoreInvalidBranches_Parms
	{
		bool bNewIgnoreInvalidBranches;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the last set StartOn node */" },
#endif
		{ "DisplayName", "Set Ignore Invalid Branches" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the last set StartOn node" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewIgnoreInvalidBranches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIgnoreInvalidBranches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::NewProp_bNewIgnoreInvalidBranches_SetBit(void* Obj)
{
	((ArticyFlowPlayer_eventSetIgnoreInvalidBranches_Parms*)Obj)->bNewIgnoreInvalidBranches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::NewProp_bNewIgnoreInvalidBranches = { "bNewIgnoreInvalidBranches", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFlowPlayer_eventSetIgnoreInvalidBranches_Parms), &Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::NewProp_bNewIgnoreInvalidBranches_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::NewProp_bNewIgnoreInvalidBranches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "SetIgnoreInvalidBranches", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::ArticyFlowPlayer_eventSetIgnoreInvalidBranches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::ArticyFlowPlayer_eventSetIgnoreInvalidBranches_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execSetIgnoreInvalidBranches)
{
	P_GET_UBOOL(Z_Param_bNewIgnoreInvalidBranches);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIgnoreInvalidBranches(Z_Param_bNewIgnoreInvalidBranches);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function SetIgnoreInvalidBranches

// Begin Class UArticyFlowPlayer Function SetStartNode
struct Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics
{
	struct ArticyFlowPlayer_eventSetStartNode_Parms
	{
		FArticyRef NewId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the StartOn node to a certain node. */" },
#endif
		{ "DisplayName", "Set Start Node (ArticyRef)" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the StartOn node to a certain node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::NewProp_NewId = { "NewId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventSetStartNode_Parms, NewId), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(0, nullptr) }; // 321074496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::NewProp_NewId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "SetStartNode", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::ArticyFlowPlayer_eventSetStartNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::ArticyFlowPlayer_eventSetStartNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execSetStartNode)
{
	P_GET_STRUCT(FArticyRef,Z_Param_NewId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartNode(Z_Param_NewId);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function SetStartNode

// Begin Class UArticyFlowPlayer Function SetStartNodeById
struct Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics
{
	struct ArticyFlowPlayer_eventSetStartNodeById_Parms
	{
		FArticyId NewId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "DisplayName", "Set Start Node (ArticyID)" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::NewProp_NewId = { "NewId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventSetStartNodeById_Parms, NewId), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::NewProp_NewId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "SetStartNodeById", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::ArticyFlowPlayer_eventSetStartNodeById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::ArticyFlowPlayer_eventSetStartNodeById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execSetStartNodeById)
{
	P_GET_STRUCT(FArticyId,Z_Param_NewId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartNodeById(Z_Param_NewId);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function SetStartNodeById

// Begin Class UArticyFlowPlayer Function SetStartNodeWithFlowObject
struct Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics
{
	struct ArticyFlowPlayer_eventSetStartNodeWithFlowObject_Parms
	{
		TScriptInterface<IArticyFlowObject> Node;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the StartOn node to a certain node. */" },
#endif
		{ "DisplayName", "Set Start Node (FlowObject)" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the StartOn node to a certain node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventSetStartNodeWithFlowObject_Parms, Node), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "SetStartNodeWithFlowObject", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::ArticyFlowPlayer_eventSetStartNodeWithFlowObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::ArticyFlowPlayer_eventSetStartNodeWithFlowObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execSetStartNodeWithFlowObject)
{
	P_GET_TINTERFACE(IArticyFlowObject,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartNodeWithFlowObject(Z_Param_Node);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function SetStartNodeWithFlowObject

// Begin Class UArticyFlowPlayer Function ShouldPauseOn
struct Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics
{
	struct ArticyFlowPlayer_eventShouldPauseOn_Parms
	{
		TScriptInterface<IArticyFlowObject> Node;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Node;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyFlowPlayer_eventShouldPauseOn_Parms, Node), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyFlowPlayer_eventShouldPauseOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyFlowPlayer_eventShouldPauseOn_Parms), &Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "ShouldPauseOn", nullptr, nullptr, Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::ArticyFlowPlayer_eventShouldPauseOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::ArticyFlowPlayer_eventShouldPauseOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execShouldPauseOn)
{
	P_GET_TINTERFACE(IArticyFlowObject,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldPauseOn(Z_Param_Node);
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function ShouldPauseOn

// Begin Class UArticyFlowPlayer Function UpdateAvailableBranches
struct Z_Construct_UFunction_UArticyFlowPlayer_UpdateAvailableBranches_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explore branches starting from the current StartOn node. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explore branches starting from the current StartOn node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyFlowPlayer_UpdateAvailableBranches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyFlowPlayer, nullptr, "UpdateAvailableBranches", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyFlowPlayer_UpdateAvailableBranches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyFlowPlayer_UpdateAvailableBranches_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArticyFlowPlayer_UpdateAvailableBranches()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyFlowPlayer_UpdateAvailableBranches_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyFlowPlayer::execUpdateAvailableBranches)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAvailableBranches();
	P_NATIVE_END;
}
// End Class UArticyFlowPlayer Function UpdateAvailableBranches

// Begin Class UArticyFlowPlayer
void UArticyFlowPlayer::StaticRegisterNativesUArticyFlowPlayer()
{
	UClass* Class = UArticyFlowPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishCurrentPausedObject", &UArticyFlowPlayer::execFinishCurrentPausedObject },
		{ "GetAvailableBranches", &UArticyFlowPlayer::execGetAvailableBranches },
		{ "GetCursor", &UArticyFlowPlayer::execGetCursor },
		{ "GetGVs", &UArticyFlowPlayer::execGetGVs },
		{ "GetMethodsProvider", &UArticyFlowPlayer::execGetMethodsProvider },
		{ "GetStartNode", &UArticyFlowPlayer::execGetStartNode },
		{ "IgnoresInvalidBranches", &UArticyFlowPlayer::execIgnoresInvalidBranches },
		{ "Play", &UArticyFlowPlayer::execPlay },
		{ "PlayBranch", &UArticyFlowPlayer::execPlayBranch },
		{ "SetCursorTo", &UArticyFlowPlayer::execSetCursorTo },
		{ "SetIgnoreInvalidBranches", &UArticyFlowPlayer::execSetIgnoreInvalidBranches },
		{ "SetStartNode", &UArticyFlowPlayer::execSetStartNode },
		{ "SetStartNodeById", &UArticyFlowPlayer::execSetStartNodeById },
		{ "SetStartNodeWithFlowObject", &UArticyFlowPlayer::execSetStartNodeWithFlowObject },
		{ "ShouldPauseOn", &UArticyFlowPlayer::execShouldPauseOn },
		{ "UpdateAvailableBranches", &UArticyFlowPlayer::execUpdateAvailableBranches },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyFlowPlayer);
UClass* Z_Construct_UClass_UArticyFlowPlayer_NoRegister()
{
	return UArticyFlowPlayer::StaticClass();
}
struct Z_Construct_UClass_UArticyFlowPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This component handles traversal of the flow, starting and halting at specific nodes.\n * The GlobalVariables instance and the UserMethodProvider used for this flow player\n * instance can be specified.\n */" },
#endif
		{ "IncludePath", "ArticyFlowPlayer.h" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This component handles traversal of the flow, starting and halting at specific nodes.\nThe GlobalVariables instance and the UserMethodProvider used for this flow player\ninstance can be specified." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseOn_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ArticyRuntime.EArticyPausableType" },
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EArticyPausableType\n" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EArticyPausableType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnShadowOpStart_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This event is broadcast whenever a new ShadowedOperation starts. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This event is broadcast whenever a new ShadowedOperation starts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnShadowOpEnd_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This event is broadcast once the current ShadowedOperation ends. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This event is broadcast once the current ShadowedOperation ends." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerPaused_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This delegate is called when the flow player pauses on one of the object types set up in\n     * \"PauseOn\", or if the branch is done.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This delegate is called when the flow player pauses on one of the object types set up in\n\"PauseOn\", or if the branch is done." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBranchesUpdated_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This delegate is called when the AvailableBranches change.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This delegate is called when the AvailableBranches change." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExploreLimit_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n      * If a branch reaches this length, exploration on it is aborted.\n      */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a branch reaches this length, exploration on it is aborted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowLevelLimit_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * If more than this amount of ShadowLevels are needed at the same time,\n     * branch exploration will abort.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If more than this amount of ShadowLevels are needed at the same time,\nbranch exploration will abort." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInvalidBranches_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Invalid branches will not be part of the AvailableBranches.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invalid branches will not be part of the AvailableBranches." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOn_MetaData[] = {
		{ "ArticyClassRestriction", "ArticyNode" },
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableBranches_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All the branches available at the current flow position. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the branches available at the current flow position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGV_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The instance of the global variables to be used with this flow player instance.\n     * This property is private so it can only be directly changed through the editor,\n     * so we can ensure that the needed setup is triggered every time this changes.\n     *\n     * Keep as nullptr if you want to use the default shared global variables.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The instance of the global variables to be used with this flow player instance.\nThis property is private so it can only be directly changed through the editor,\nso we can ensure that the needed setup is triggered every time this changes.\n\nKeep as nullptr if you want to use the default shared global variables." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMethodsProvider_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This object will be used to resolve user-defined ScriptMethods. It must implement\n     * the project-specific I<ProjectName>MethodsProvider interface (through blueprint or\n     * through inheritance).\n     * This property is private so it can only be directly changed through the editor,\n     * so we can ensure that the needed setup is triggered every time this changes.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This object will be used to resolve user-defined ScriptMethods. It must implement\nthe project-specific I<ProjectName>MethodsProvider interface (through blueprint or\nthrough inheritance).\nThis property is private so it can only be directly changed through the editor,\nso we can ensure that the needed setup is triggered every time this changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowLevel_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current shadow level (0 == live state). */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current shadow level (0 == live state)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cursor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current position in the flow. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current position in the flow." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PauseOn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShadowOpStart;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShadowOpEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerPaused;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBranchesUpdated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExploreLimit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowLevelLimit;
	static void NewProp_bIgnoreInvalidBranches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInvalidBranches;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartOn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableBranches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableBranches;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideGV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserMethodsProvider;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShadowLevel;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Cursor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyFlowPlayer_FinishCurrentPausedObject, "FinishCurrentPausedObject" }, // 1561026022
		{ &Z_Construct_UFunction_UArticyFlowPlayer_GetAvailableBranches, "GetAvailableBranches" }, // 4254506182
		{ &Z_Construct_UFunction_UArticyFlowPlayer_GetCursor, "GetCursor" }, // 2951595913
		{ &Z_Construct_UFunction_UArticyFlowPlayer_GetGVs, "GetGVs" }, // 2346555628
		{ &Z_Construct_UFunction_UArticyFlowPlayer_GetMethodsProvider, "GetMethodsProvider" }, // 85636254
		{ &Z_Construct_UFunction_UArticyFlowPlayer_GetStartNode, "GetStartNode" }, // 2757933967
		{ &Z_Construct_UFunction_UArticyFlowPlayer_IgnoresInvalidBranches, "IgnoresInvalidBranches" }, // 3195695292
		{ &Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature, "OnBranchesUpdated__DelegateSignature" }, // 944180817
		{ &Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature, "OnPlayerPaused__DelegateSignature" }, // 3512846934
		{ &Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature, "OnPopState__DelegateSignature" }, // 279019240
		{ &Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature, "OnPushState__DelegateSignature" }, // 213793549
		{ &Z_Construct_UFunction_UArticyFlowPlayer_Play, "Play" }, // 4177641130
		{ &Z_Construct_UFunction_UArticyFlowPlayer_PlayBranch, "PlayBranch" }, // 3463538245
		{ &Z_Construct_UFunction_UArticyFlowPlayer_SetCursorTo, "SetCursorTo" }, // 2845769718
		{ &Z_Construct_UFunction_UArticyFlowPlayer_SetIgnoreInvalidBranches, "SetIgnoreInvalidBranches" }, // 1722489419
		{ &Z_Construct_UFunction_UArticyFlowPlayer_SetStartNode, "SetStartNode" }, // 3435622813
		{ &Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeById, "SetStartNodeById" }, // 2014129701
		{ &Z_Construct_UFunction_UArticyFlowPlayer_SetStartNodeWithFlowObject, "SetStartNodeWithFlowObject" }, // 3189232330
		{ &Z_Construct_UFunction_UArticyFlowPlayer_ShouldPauseOn, "ShouldPauseOn" }, // 4156985189
		{ &Z_Construct_UFunction_UArticyFlowPlayer_UpdateAvailableBranches, "UpdateAvailableBranches" }, // 965858751
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyFlowPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_PauseOn = { "PauseOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, PauseOn), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseOn_MetaData), NewProp_PauseOn_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnShadowOpStart = { "OnShadowOpStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, OnShadowOpStart), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPushState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnShadowOpStart_MetaData), NewProp_OnShadowOpStart_MetaData) }; // 213793549
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnShadowOpEnd = { "OnShadowOpEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, OnShadowOpEnd), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPopState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnShadowOpEnd_MetaData), NewProp_OnShadowOpEnd_MetaData) }; // 279019240
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnPlayerPaused = { "OnPlayerPaused", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, OnPlayerPaused), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnPlayerPaused__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerPaused_MetaData), NewProp_OnPlayerPaused_MetaData) }; // 3512846934
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnBranchesUpdated = { "OnBranchesUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, OnBranchesUpdated), Z_Construct_UDelegateFunction_UArticyFlowPlayer_OnBranchesUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBranchesUpdated_MetaData), NewProp_OnBranchesUpdated_MetaData) }; // 944180817
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_ExploreLimit = { "ExploreLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, ExploreLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExploreLimit_MetaData), NewProp_ExploreLimit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_ShadowLevelLimit = { "ShadowLevelLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, ShadowLevelLimit), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowLevelLimit_MetaData), NewProp_ShadowLevelLimit_MetaData) };
void Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_bIgnoreInvalidBranches_SetBit(void* Obj)
{
	((UArticyFlowPlayer*)Obj)->bIgnoreInvalidBranches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_bIgnoreInvalidBranches = { "bIgnoreInvalidBranches", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArticyFlowPlayer), &Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_bIgnoreInvalidBranches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreInvalidBranches_MetaData), NewProp_bIgnoreInvalidBranches_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_StartOn = { "StartOn", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, StartOn), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOn_MetaData), NewProp_StartOn_MetaData) }; // 321074496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_AvailableBranches_Inner = { "AvailableBranches", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(0, nullptr) }; // 4044271609
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_AvailableBranches = { "AvailableBranches", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, AvailableBranches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableBranches_MetaData), NewProp_AvailableBranches_MetaData) }; // 4044271609
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OverrideGV = { "OverrideGV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, OverrideGV), Z_Construct_UClass_UArticyAlternativeGlobalVariables_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideGV_MetaData), NewProp_OverrideGV_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_UserMethodsProvider = { "UserMethodsProvider", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, UserMethodsProvider), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMethodsProvider_MetaData), NewProp_UserMethodsProvider_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_ShadowLevel = { "ShadowLevel", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, ShadowLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowLevel_MetaData), NewProp_ShadowLevel_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyFlowPlayer, Cursor), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cursor_MetaData), NewProp_Cursor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyFlowPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_PauseOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnShadowOpStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnShadowOpEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnPlayerPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OnBranchesUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_ExploreLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_ShadowLevelLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_bIgnoreInvalidBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_StartOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_AvailableBranches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_AvailableBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_OverrideGV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_UserMethodsProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_ShadowLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyFlowPlayer_Statics::NewProp_Cursor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyFlowPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyFlowPlayer_Statics::ClassParams = {
	&UArticyFlowPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyFlowPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPlayer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyFlowPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyFlowPlayer()
{
	if (!Z_Registration_Info_UClass_UArticyFlowPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyFlowPlayer.OuterSingleton, Z_Construct_UClass_UArticyFlowPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyFlowPlayer.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyFlowPlayer>()
{
	return UArticyFlowPlayer::StaticClass();
}
UArticyFlowPlayer::UArticyFlowPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyFlowPlayer);
UArticyFlowPlayer::~UArticyFlowPlayer() {}
// End Class UArticyFlowPlayer

// Begin Class AArticyFlowDebugger
void AArticyFlowDebugger::StaticRegisterNativesAArticyFlowDebugger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArticyFlowDebugger);
UClass* Z_Construct_UClass_AArticyFlowDebugger_NoRegister()
{
	return AArticyFlowDebugger::StaticClass();
}
struct Z_Construct_UClass_AArticyFlowDebugger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents an actor for debugging Articy flows.\n */" },
#endif
		{ "HideCategories", "Replication Physics Rendering Input Collision Actor LOD Cooking" },
		{ "IncludePath", "ArticyFlowPlayer.h" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an actor for debugging Articy flows." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowPlayer_MetaData[] = {
		{ "Category", "Articy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticyImporterIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArticyFlowPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlowPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArticyImporterIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArticyFlowDebugger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArticyFlowDebugger_Statics::NewProp_FlowPlayer = { "FlowPlayer", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArticyFlowDebugger, FlowPlayer), Z_Construct_UClass_UArticyFlowPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowPlayer_MetaData), NewProp_FlowPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArticyFlowDebugger_Statics::NewProp_ArticyImporterIcon = { "ArticyImporterIcon", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArticyFlowDebugger, ArticyImporterIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticyImporterIcon_MetaData), NewProp_ArticyImporterIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArticyFlowDebugger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArticyFlowDebugger_Statics::NewProp_FlowPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArticyFlowDebugger_Statics::NewProp_ArticyImporterIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArticyFlowDebugger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArticyFlowDebugger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArticyFlowDebugger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArticyFlowDebugger_Statics::ClassParams = {
	&AArticyFlowDebugger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AArticyFlowDebugger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AArticyFlowDebugger_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArticyFlowDebugger_Statics::Class_MetaDataParams), Z_Construct_UClass_AArticyFlowDebugger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArticyFlowDebugger()
{
	if (!Z_Registration_Info_UClass_AArticyFlowDebugger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArticyFlowDebugger.OuterSingleton, Z_Construct_UClass_AArticyFlowDebugger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArticyFlowDebugger.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<AArticyFlowDebugger>()
{
	return AArticyFlowDebugger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArticyFlowDebugger);
AArticyFlowDebugger::~AArticyFlowDebugger() {}
// End Class AArticyFlowDebugger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArticyPausableType_StaticEnum, TEXT("EArticyPausableType"), &Z_Registration_Info_UEnum_EArticyPausableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3039501119U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyBranch::StaticStruct, Z_Construct_UScriptStruct_FArticyBranch_Statics::NewStructOps, TEXT("ArticyBranch"), &Z_Registration_Info_UScriptStruct_ArticyBranch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyBranch), 4044271609U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyFlowPlayer, UArticyFlowPlayer::StaticClass, TEXT("UArticyFlowPlayer"), &Z_Registration_Info_UClass_UArticyFlowPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyFlowPlayer), 4159771894U) },
		{ Z_Construct_UClass_AArticyFlowDebugger, AArticyFlowDebugger::StaticClass, TEXT("AArticyFlowDebugger"), &Z_Registration_Info_UClass_AArticyFlowDebugger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArticyFlowDebugger), 607620139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_458476245(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowPlayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
