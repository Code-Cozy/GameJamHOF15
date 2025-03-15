// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyFlowClasses.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyFlowClasses() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDialogue();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDialogue_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDialogueFragment();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDialogueFragment_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowFragment();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowFragment_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPin_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyHub();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyHub_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyJump();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyJump_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyNode();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPrimitive_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin Class UArticyFlowFragment
void UArticyFlowFragment::StaticRegisterNativesUArticyFlowFragment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyFlowFragment);
UClass* Z_Construct_UClass_UArticyFlowFragment_NoRegister()
{
	return UArticyFlowFragment::StaticClass();
}
struct Z_Construct_UClass_UArticyFlowFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a flow fragment in the Articy flow system.\n */" },
#endif
		{ "IncludePath", "ArticyFlowClasses.h" },
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a flow fragment in the Articy flow system." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyFlowFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyFlowFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyFlowFragment_Statics::ClassParams = {
	&UArticyFlowFragment::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyFlowFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyFlowFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyFlowFragment()
{
	if (!Z_Registration_Info_UClass_UArticyFlowFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyFlowFragment.OuterSingleton, Z_Construct_UClass_UArticyFlowFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyFlowFragment.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyFlowFragment>()
{
	return UArticyFlowFragment::StaticClass();
}
UArticyFlowFragment::UArticyFlowFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyFlowFragment);
UArticyFlowFragment::~UArticyFlowFragment() {}
// End Class UArticyFlowFragment

// Begin Class UArticyDialogue
void UArticyDialogue::StaticRegisterNativesUArticyDialogue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyDialogue);
UClass* Z_Construct_UClass_UArticyDialogue_NoRegister()
{
	return UArticyDialogue::StaticClass();
}
struct Z_Construct_UClass_UArticyDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a dialogue in the Articy flow system.\n */" },
#endif
		{ "IncludePath", "ArticyFlowClasses.h" },
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a dialogue in the Articy flow system." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyDialogue_Statics::ClassParams = {
	&UArticyDialogue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyDialogue()
{
	if (!Z_Registration_Info_UClass_UArticyDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyDialogue.OuterSingleton, Z_Construct_UClass_UArticyDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyDialogue.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyDialogue>()
{
	return UArticyDialogue::StaticClass();
}
UArticyDialogue::UArticyDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyDialogue);
UArticyDialogue::~UArticyDialogue() {}
// End Class UArticyDialogue

// Begin Class UArticyDialogueFragment
void UArticyDialogueFragment::StaticRegisterNativesUArticyDialogueFragment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyDialogueFragment);
UClass* Z_Construct_UClass_UArticyDialogueFragment_NoRegister()
{
	return UArticyDialogueFragment::StaticClass();
}
struct Z_Construct_UClass_UArticyDialogueFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a dialogue fragment in the Articy flow system.\n */" },
#endif
		{ "IncludePath", "ArticyFlowClasses.h" },
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a dialogue fragment in the Articy flow system." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyDialogueFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyDialogueFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyDialogueFragment_Statics::ClassParams = {
	&UArticyDialogueFragment::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyDialogueFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyDialogueFragment()
{
	if (!Z_Registration_Info_UClass_UArticyDialogueFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyDialogueFragment.OuterSingleton, Z_Construct_UClass_UArticyDialogueFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyDialogueFragment.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyDialogueFragment>()
{
	return UArticyDialogueFragment::StaticClass();
}
UArticyDialogueFragment::UArticyDialogueFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyDialogueFragment);
UArticyDialogueFragment::~UArticyDialogueFragment() {}
// End Class UArticyDialogueFragment

// Begin Class UArticyHub
void UArticyHub::StaticRegisterNativesUArticyHub()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyHub);
UClass* Z_Construct_UClass_UArticyHub_NoRegister()
{
	return UArticyHub::StaticClass();
}
struct Z_Construct_UClass_UArticyHub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a hub in the Articy flow system.\n */" },
#endif
		{ "IncludePath", "ArticyFlowClasses.h" },
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a hub in the Articy flow system." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyHub>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyHub_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyHub_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyHub_Statics::ClassParams = {
	&UArticyHub::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyHub_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyHub_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyHub()
{
	if (!Z_Registration_Info_UClass_UArticyHub.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyHub.OuterSingleton, Z_Construct_UClass_UArticyHub_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyHub.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyHub>()
{
	return UArticyHub::StaticClass();
}
UArticyHub::UArticyHub(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyHub);
UArticyHub::~UArticyHub() {}
// End Class UArticyHub

// Begin Class UArticyJump
void UArticyJump::StaticRegisterNativesUArticyJump()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyJump);
UClass* Z_Construct_UClass_UArticyJump_NoRegister()
{
	return UArticyJump::StaticClass();
}
struct Z_Construct_UClass_UArticyJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a jump in the Articy flow system.\n */" },
#endif
		{ "IncludePath", "ArticyFlowClasses.h" },
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a jump in the Articy flow system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPin_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID of the target pin. */" },
#endif
		{ "DisplayName", "TargetPin" },
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the target pin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID of the target object. */" },
#endif
		{ "DisplayName", "Target" },
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the target object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPinObj_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached pointer to the target pin object. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached pointer to the target pin object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetObj_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached pointer to the target object. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyFlowClasses.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached pointer to the target object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPinObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyJump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyJump_Statics::NewProp_TargetPin = { "TargetPin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyJump, TargetPin), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPin_MetaData), NewProp_TargetPin_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyJump_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyJump, Target), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 4167114503
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyJump_Statics::NewProp_TargetPinObj = { "TargetPinObj", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyJump, TargetPinObj), Z_Construct_UClass_UArticyFlowPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPinObj_MetaData), NewProp_TargetPinObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyJump_Statics::NewProp_TargetObj = { "TargetObj", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyJump, TargetObj), Z_Construct_UClass_UArticyPrimitive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetObj_MetaData), NewProp_TargetObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyJump_Statics::NewProp_TargetPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyJump_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyJump_Statics::NewProp_TargetPinObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyJump_Statics::NewProp_TargetObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyJump_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyJump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UArticyNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyJump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyJump_Statics::ClassParams = {
	&UArticyJump::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyJump_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyJump_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyJump_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyJump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyJump()
{
	if (!Z_Registration_Info_UClass_UArticyJump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyJump.OuterSingleton, Z_Construct_UClass_UArticyJump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyJump.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyJump>()
{
	return UArticyJump::StaticClass();
}
UArticyJump::UArticyJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyJump);
UArticyJump::~UArticyJump() {}
// End Class UArticyJump

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowClasses_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyFlowFragment, UArticyFlowFragment::StaticClass, TEXT("UArticyFlowFragment"), &Z_Registration_Info_UClass_UArticyFlowFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyFlowFragment), 1826205953U) },
		{ Z_Construct_UClass_UArticyDialogue, UArticyDialogue::StaticClass, TEXT("UArticyDialogue"), &Z_Registration_Info_UClass_UArticyDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyDialogue), 3531119712U) },
		{ Z_Construct_UClass_UArticyDialogueFragment, UArticyDialogueFragment::StaticClass, TEXT("UArticyDialogueFragment"), &Z_Registration_Info_UClass_UArticyDialogueFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyDialogueFragment), 3466694991U) },
		{ Z_Construct_UClass_UArticyHub, UArticyHub::StaticClass, TEXT("UArticyHub"), &Z_Registration_Info_UClass_UArticyHub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyHub), 3010172705U) },
		{ Z_Construct_UClass_UArticyJump, UArticyJump::StaticClass, TEXT("UArticyJump"), &Z_Registration_Info_UClass_UArticyJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyJump), 702755894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowClasses_h_743642619(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowClasses_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyFlowClasses_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
