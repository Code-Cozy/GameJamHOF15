// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyRuntime/Public/ArticyDatabase.h"
#include "ArticyRuntime/Public/ArticyBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyDatabase() {}

// Begin Cross Module References
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyCloneableObject();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyCloneableObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDatabase();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyDatabase_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyExpressoScripts_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyObject_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyPackage_NoRegister();
ARTICYRUNTIME_API UClass* Z_Construct_UClass_UShadowStateManager_NoRegister();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyDatabaseObjectArray();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyId();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyObjectShadow();
ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyShadowableObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ArticyRuntime();
// End Cross Module References

// Begin ScriptStruct FArticyObjectShadow
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyObjectShadow;
class UScriptStruct* FArticyObjectShadow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyObjectShadow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyObjectShadow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyObjectShadow, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyObjectShadow"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyObjectShadow.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyObjectShadow>()
{
	return FArticyObjectShadow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyObjectShadow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing a shadow of an Articy object.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing a shadow of an Articy object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShadowLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyObjectShadow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::NewProp_ShadowLevel = { "ShadowLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectShadow, ShadowLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowLevel_MetaData), NewProp_ShadowLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyObjectShadow, Object), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::NewProp_ShadowLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyObjectShadow",
	Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::PropPointers),
	sizeof(FArticyObjectShadow),
	alignof(FArticyObjectShadow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyObjectShadow()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyObjectShadow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyObjectShadow.InnerSingleton, Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyObjectShadow.InnerSingleton;
}
// End ScriptStruct FArticyObjectShadow

// Begin ScriptStruct FArticyShadowableObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyShadowableObject;
class UScriptStruct* FArticyShadowableObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyShadowableObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyShadowableObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyShadowableObject, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyShadowableObject"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyShadowableObject.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyShadowableObject>()
{
	return FArticyShadowableObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyShadowableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a shadowable Articy object, capable of managing multiple shadows.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a shadowable Articy object, capable of managing multiple shadows." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCopies_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The original [0] object and its shadows.\n\x09 * Shadows are guaranteed to be stored in ascending order, but\n\x09 * the array index is not the shadow level (except for 0)!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The original [0] object and its shadows.\nShadows are guaranteed to be stored in ascending order, but\nthe array index is not the shadow level (except for 0)!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowCopies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShadowCopies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyShadowableObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::NewProp_ShadowCopies_Inner = { "ShadowCopies", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyObjectShadow, METADATA_PARAMS(0, nullptr) }; // 1573108212
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::NewProp_ShadowCopies = { "ShadowCopies", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyShadowableObject, ShadowCopies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCopies_MetaData), NewProp_ShadowCopies_MetaData) }; // 1573108212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::NewProp_ShadowCopies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::NewProp_ShadowCopies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyShadowableObject",
	Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::PropPointers),
	sizeof(FArticyShadowableObject),
	alignof(FArticyShadowableObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyShadowableObject()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyShadowableObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyShadowableObject.InnerSingleton, Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyShadowableObject.InnerSingleton;
}
// End ScriptStruct FArticyShadowableObject

// Begin Class UArticyCloneableObject
void UArticyCloneableObject::StaticRegisterNativesUArticyCloneableObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyCloneableObject);
UClass* Z_Construct_UClass_UArticyCloneableObject_NoRegister()
{
	return UArticyCloneableObject::StaticClass();
}
struct Z_Construct_UClass_UArticyCloneableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains a reference to a UArticyObject, and to its clones if any.\n */" },
#endif
		{ "IncludePath", "ArticyDatabase.h" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains a reference to a UArticyObject, and to its clones if any." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clones_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The copied instances of the same object.\n\x09 * Clones[0] is the one that is created at startup from the object assets.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The copied instances of the same object.\nClones[0] is the one that is created at startup from the object assets." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Clones_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clones_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Clones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyCloneableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyCloneableObject_Statics::NewProp_Clones_ValueProp = { "Clones", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyShadowableObject, METADATA_PARAMS(0, nullptr) }; // 458209110
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArticyCloneableObject_Statics::NewProp_Clones_Key_KeyProp = { "Clones_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyCloneableObject_Statics::NewProp_Clones = { "Clones", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyCloneableObject, Clones), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clones_MetaData), NewProp_Clones_MetaData) }; // 458209110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyCloneableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyCloneableObject_Statics::NewProp_Clones_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyCloneableObject_Statics::NewProp_Clones_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyCloneableObject_Statics::NewProp_Clones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCloneableObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyCloneableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCloneableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyCloneableObject_Statics::ClassParams = {
	&UArticyCloneableObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArticyCloneableObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCloneableObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyCloneableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyCloneableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyCloneableObject()
{
	if (!Z_Registration_Info_UClass_UArticyCloneableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyCloneableObject.OuterSingleton, Z_Construct_UClass_UArticyCloneableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyCloneableObject.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyCloneableObject>()
{
	return UArticyCloneableObject::StaticClass();
}
UArticyCloneableObject::UArticyCloneableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyCloneableObject);
UArticyCloneableObject::~UArticyCloneableObject() {}
// End Class UArticyCloneableObject

// Begin ScriptStruct FArticyDatabaseObjectArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray;
class UScriptStruct* FArticyDatabaseObjectArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyDatabaseObjectArray, (UObject*)Z_Construct_UPackage__Script_ArticyRuntime(), TEXT("ArticyDatabaseObjectArray"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray.OuterSingleton;
}
template<> ARTICYRUNTIME_API UScriptStruct* StaticStruct<FArticyDatabaseObjectArray>()
{
	return FArticyDatabaseObjectArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains an array of FArticyDatabaseObjects.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains an array of FArticyDatabaseObjects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyDatabaseObjectArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyCloneableObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArticyDatabaseObjectArray, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::NewProp_Objects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
	nullptr,
	&NewStructOps,
	"ArticyDatabaseObjectArray",
	Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::PropPointers),
	sizeof(FArticyDatabaseObjectArray),
	alignof(FArticyDatabaseObjectArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyDatabaseObjectArray()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray.InnerSingleton, Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray.InnerSingleton;
}
// End ScriptStruct FArticyDatabaseObjectArray

// Begin Class UArticyDatabase Function CloneFrom
struct Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics
{
	struct ArticyDatabase_eventCloneFrom_Parms
	{
		FArticyId Id;
		int32 NewCloneId;
		TSubclassOf<UArticyObject> CastTo;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clone an existing object, and assign the NewCloneId to it.\n\x09 * If the clone already exists, nullptr is returned!\n\x09 * If NewCloneId is -1, the next free clone Id will be used.\n\x09 * @param Id The ID of the object to clone.\n\x09 * @param NewCloneId The clone ID for the new instance.\n\x09 * @param CastTo The class to cast the clone to.\n\x09 * @return A pointer to the newly created clone, or nullptr if creation failed.\n\x09 */" },
#endif
		{ "CPP_Default_CastTo", "None" },
		{ "CPP_Default_NewCloneId", "-1" },
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clone an existing object, and assign the NewCloneId to it.\nIf the clone already exists, nullptr is returned!\nIf NewCloneId is -1, the next free clone Id will be used.\n@param Id The ID of the object to clone.\n@param NewCloneId The clone ID for the new instance.\n@param CastTo The class to cast the clone to.\n@return A pointer to the newly created clone, or nullptr if creation failed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCloneId;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFrom_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_NewCloneId = { "NewCloneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFrom_Parms, NewCloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFrom_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFrom_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_NewCloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "CloneFrom", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::ArticyDatabase_eventCloneFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::ArticyDatabase_eventCloneFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_CloneFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_CloneFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execCloneFrom)
{
	P_GET_STRUCT(FArticyId,Z_Param_Id);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCloneId);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->CloneFrom(Z_Param_Id,Z_Param_NewCloneId,Z_Param_CastTo);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function CloneFrom

// Begin Class UArticyDatabase Function CloneFromByName
struct Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics
{
	struct ArticyDatabase_eventCloneFromByName_Parms
	{
		FName TechnicalName;
		int32 NewCloneId;
		TSubclassOf<UArticyObject> CastTo;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clone an existing object, and assign the NewCloneId to it.\n\x09 * If the clone already exists, nullptr is returned!\n\x09 * If NewCloneId is -1, the next free clone Id will be used.\n\x09 * @param TechnicalName The technical name of the object to clone.\n\x09 * @param NewCloneId The clone ID for the new instance.\n\x09 * @param CastTo The class to cast the clone to.\n\x09 * @return A pointer to the newly created clone, or nullptr if creation failed.\n\x09 */" },
#endif
		{ "CPP_Default_CastTo", "None" },
		{ "CPP_Default_NewCloneId", "-1" },
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clone an existing object, and assign the NewCloneId to it.\nIf the clone already exists, nullptr is returned!\nIf NewCloneId is -1, the next free clone Id will be used.\n@param TechnicalName The technical name of the object to clone.\n@param NewCloneId The clone ID for the new instance.\n@param CastTo The class to cast the clone to.\n@return A pointer to the newly created clone, or nullptr if creation failed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCloneId;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFromByName_Parms, TechnicalName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_NewCloneId = { "NewCloneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFromByName_Parms, NewCloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFromByName_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventCloneFromByName_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_NewCloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "CloneFromByName", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::ArticyDatabase_eventCloneFromByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::ArticyDatabase_eventCloneFromByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_CloneFromByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_CloneFromByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execCloneFromByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TechnicalName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCloneId);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->CloneFromByName(Z_Param_TechnicalName,Z_Param_NewCloneId,Z_Param_CastTo);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function CloneFromByName

// Begin Class UArticyDatabase Function GetAllObjects
struct Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics
{
	struct ArticyDatabase_eventGetAllObjects_Parms
	{
		TArray<UArticyObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get all objects.\n\x09* @return An array of pointers to all Articy objects.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all objects.\n@return An array of pointers to all Articy objects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetAllObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetAllObjects", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::ArticyDatabase_eventGetAllObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::ArticyDatabase_eventGetAllObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetAllObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetAllObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetAllObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyObject*>*)Z_Param__Result=P_THIS->GetAllObjects();
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetAllObjects

// Begin Class UArticyDatabase Function GetImportedPackageNames
struct Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics
{
	struct ArticyDatabase_eventGetImportedPackageNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the names of all imported packages.\n\x09 * @return An array of strings representing the imported package names.\n\x09 */" },
#endif
		{ "DisplayName", "Get imported package names" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the names of all imported packages.\n@return An array of strings representing the imported package names." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetImportedPackageNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetImportedPackageNames", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::ArticyDatabase_eventGetImportedPackageNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::ArticyDatabase_eventGetImportedPackageNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetImportedPackageNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetImportedPackageNames();
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetImportedPackageNames

// Begin Class UArticyDatabase Function GetObject
struct Z_Construct_UFunction_UArticyDatabase_GetObject_Statics
{
	struct ArticyDatabase_eventGetObject_Parms
	{
		FArticyId Id;
		int32 CloneId;
		TSubclassOf<UArticyObject> CastTo;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CloneId" },
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get an object by its Id.\n\x09 * If a CloneId other than 0 is provided, a copy of the object with this index must exist.\n\x09 * Otherwise a null-pointer is returned.\n\x09 * @param Id The ID of the object to retrieve.\n\x09 * @param CloneId The clone ID of the object.\n\x09 * @param CastTo The class to cast the object to.\n\x09 * @return A pointer to the Articy object, or nullptr if not found.\n\x09 */" },
#endif
		{ "CPP_Default_CastTo", "None" },
		{ "CPP_Default_CloneId", "0" },
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an object by its Id.\nIf a CloneId other than 0 is provided, a copy of the object with this index must exist.\nOtherwise a null-pointer is returned.\n@param Id The ID of the object to retrieve.\n@param CloneId The clone ID of the object.\n@param CastTo The class to cast the object to.\n@return A pointer to the Articy object, or nullptr if not found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CloneId;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObject_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_CloneId = { "CloneId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObject_Parms, CloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObject_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_CloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::ArticyDatabase_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::ArticyDatabase_eventGetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetObject)
{
	P_GET_STRUCT(FArticyId,Z_Param_Id);
	P_GET_PROPERTY(FIntProperty,Z_Param_CloneId);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetObject(Z_Param_Id,Z_Param_CloneId,Z_Param_CastTo);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetObject

// Begin Class UArticyDatabase Function GetObjectByName
struct Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics
{
	struct ArticyDatabase_eventGetObjectByName_Parms
	{
		FName TechnicalName;
		int32 CloneId;
		TSubclassOf<UArticyObject> CastTo;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CloneId" },
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get an object by its TechnicalName.\n\x09 * If a CloneId other than 0 is provided, a copy of the object with this index must exist,\n\x09 * otherwise a null-pointer is returned.\n\x09 * Note that the TechnicalName is not unique! This will take the first matching object.\n\x09 * @param TechnicalName The technical name of the object to retrieve.\n\x09 * @param CloneId The clone ID of the object.\n\x09 * @param CastTo The class to cast the object to.\n\x09 * @return A pointer to the Articy object, or nullptr if not found.\n\x09 */" },
#endif
		{ "CPP_Default_CastTo", "None" },
		{ "CPP_Default_CloneId", "0" },
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an object by its TechnicalName.\nIf a CloneId other than 0 is provided, a copy of the object with this index must exist,\notherwise a null-pointer is returned.\nNote that the TechnicalName is not unique! This will take the first matching object.\n@param TechnicalName The technical name of the object to retrieve.\n@param CloneId The clone ID of the object.\n@param CastTo The class to cast the object to.\n@return A pointer to the Articy object, or nullptr if not found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CloneId;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectByName_Parms, TechnicalName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_CloneId = { "CloneId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectByName_Parms, CloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectByName_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectByName_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_CloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetObjectByName", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::ArticyDatabase_eventGetObjectByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::ArticyDatabase_eventGetObjectByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetObjectByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetObjectByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetObjectByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TechnicalName);
	P_GET_PROPERTY(FIntProperty,Z_Param_CloneId);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetObjectByName(Z_Param_TechnicalName,Z_Param_CloneId,Z_Param_CastTo);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetObjectByName

// Begin Class UArticyDatabase Function GetObjectFromStringRepresentation
struct Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics
{
	struct ArticyDatabase_eventGetObjectFromStringRepresentation_Parms
	{
		FString StringID_CloneID;
		TSubclassOf<UArticyObject> CastTo;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CloneId" },
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/****\n\x09* Get an object by its Articy String Representation.\n\x09* Use this method to get an Articy Id from a Global Variable String typed\n\x09* that contains the result of an Expresso GetObj(---) method.\n\x09* @param StringID_CloneID The string representation of the object's ID and clone ID.\n\x09* @param CastTo The class to cast the object to.\n\x09* @return A pointer to the Articy object, or nullptr if not found.\n\x09*****/" },
#endif
		{ "CPP_Default_CastTo", "None" },
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an object by its Articy String Representation.\nUse this method to get an Articy Id from a Global Variable String typed\nthat contains the result of an Expresso GetObj(---) method.\n@param StringID_CloneID The string representation of the object's ID and clone ID.\n@param CastTo The class to cast the object to.\n@return A pointer to the Articy object, or nullptr if not found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringID_CloneID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::NewProp_StringID_CloneID = { "StringID_CloneID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectFromStringRepresentation_Parms, StringID_CloneID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectFromStringRepresentation_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectFromStringRepresentation_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::NewProp_StringID_CloneID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetObjectFromStringRepresentation", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::ArticyDatabase_eventGetObjectFromStringRepresentation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::ArticyDatabase_eventGetObjectFromStringRepresentation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetObjectFromStringRepresentation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringID_CloneID);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetObjectFromStringRepresentation(Z_Param_StringID_CloneID,Z_Param_CastTo);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetObjectFromStringRepresentation

// Begin Class UArticyDatabase Function GetObjects
struct Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics
{
	struct ArticyDatabase_eventGetObjects_Parms
	{
		FName TechnicalName;
		int32 CloneId;
		TSubclassOf<UArticyObject> CastTo;
		TArray<UArticyObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CloneId" },
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get all objects with a given TechnicalName.\n\x09 * If a CloneId other than 0 is provided, copies of the objects with this index must exist,\n\x09 * otherwise null-pointers are returned instead.\n\x09 * @param TechnicalName The technical name of the objects to retrieve.\n\x09 * @param CloneId The clone ID of the objects.\n\x09 * @param CastTo The class to cast the objects to.\n\x09 * @return An array of pointers to the Articy objects, or empty if none found.\n\x09 */" },
#endif
		{ "CPP_Default_CastTo", "None" },
		{ "CPP_Default_CloneId", "0" },
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all objects with a given TechnicalName.\nIf a CloneId other than 0 is provided, copies of the objects with this index must exist,\notherwise null-pointers are returned instead.\n@param TechnicalName The technical name of the objects to retrieve.\n@param CloneId The clone ID of the objects.\n@param CastTo The class to cast the objects to.\n@return An array of pointers to the Articy objects, or empty if none found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CloneId;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjects_Parms, TechnicalName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_CloneId = { "CloneId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjects_Parms, CloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_CastTo = { "CastTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjects_Parms, CastTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_CloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_CastTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetObjects", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::ArticyDatabase_eventGetObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::ArticyDatabase_eventGetObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetObjects)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TechnicalName);
	P_GET_PROPERTY(FIntProperty,Z_Param_CloneId);
	P_GET_OBJECT(UClass,Z_Param_CastTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyObject*>*)Z_Param__Result=P_THIS->GetObjects(Z_Param_TechnicalName,Z_Param_CloneId,Z_Param_CastTo);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetObjects

// Begin Class UArticyDatabase Function GetObjectsOfClass
struct Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics
{
	struct ArticyDatabase_eventGetObjectsOfClass_Parms
	{
		TSubclassOf<UArticyObject> Class;
		int32 CloneId;
		TArray<UArticyObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CloneId" },
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get all objects with a given Type.\n\x09* If a CloneId other than 0 is provided, copies of the objects with this index must exist,\n\x09* otherwise they will be not added to the result.\n\x09* @param Class The class type of the objects to retrieve.\n\x09* @param CloneId The clone ID of the objects.\n\x09* @return An array of pointers to the Articy objects, or empty if none found.\n\x09*/" },
#endif
		{ "CPP_Default_CloneId", "0" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all objects with a given Type.\nIf a CloneId other than 0 is provided, copies of the objects with this index must exist,\notherwise they will be not added to the result.\n@param Class The class type of the objects to retrieve.\n@param CloneId The clone ID of the objects.\n@return An array of pointers to the Articy objects, or empty if none found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CloneId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectsOfClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_CloneId = { "CloneId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectsOfClass_Parms, CloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetObjectsOfClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_CloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetObjectsOfClass", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::ArticyDatabase_eventGetObjectsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::ArticyDatabase_eventGetObjectsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetObjectsOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FIntProperty,Z_Param_CloneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UArticyObject*>*)Z_Param__Result=P_THIS->GetObjectsOfClass(Z_Param_Class,Z_Param_CloneId);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetObjectsOfClass

// Begin Class UArticyDatabase Function GetOrClone
struct Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics
{
	struct ArticyDatabase_eventGetOrClone_Parms
	{
		FArticyId Id;
		int32 NewCloneId;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clone an existing object, and assign the NewCloneId to it.\n\x09 * @param Id The ID of the object to retrieve or clone.\n\x09 * @param NewCloneId The clone ID for the new instance.\n\x09 * @return A pointer to the retrieved or newly created clone, or nullptr if not found.\n\x09 */" },
#endif
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clone an existing object, and assign the NewCloneId to it.\n@param Id The ID of the object to retrieve or clone.\n@param NewCloneId The clone ID for the new instance.\n@return A pointer to the retrieved or newly created clone, or nullptr if not found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCloneId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetOrClone_Parms, Id), Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::NewProp_NewCloneId = { "NewCloneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetOrClone_Parms, NewCloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetOrClone_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::NewProp_NewCloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetOrClone", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::ArticyDatabase_eventGetOrClone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::ArticyDatabase_eventGetOrClone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetOrClone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetOrClone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetOrClone)
{
	P_GET_STRUCT(FArticyId,Z_Param_Id);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCloneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetOrClone(Z_Param_Id,Z_Param_NewCloneId);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetOrClone

// Begin Class UArticyDatabase Function GetOrCloneByName
struct Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics
{
	struct ArticyDatabase_eventGetOrCloneByName_Parms
	{
		FName TechnicalName;
		int32 NewCloneId;
		UArticyObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clone an existing object, and assign the NewCloneId to it.\n\x09 * @param TechnicalName The technical name of the object to retrieve or clone.\n\x09 * @param NewCloneId The clone ID for the new instance.\n\x09 * @return A pointer to the retrieved or newly created clone, or nullptr if not found.\n\x09 */" },
#endif
		{ "DeterminesOutputType", "CastTo" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clone an existing object, and assign the NewCloneId to it.\n@param TechnicalName The technical name of the object to retrieve or clone.\n@param NewCloneId The clone ID for the new instance.\n@return A pointer to the retrieved or newly created clone, or nullptr if not found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechnicalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TechnicalName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCloneId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::NewProp_TechnicalName = { "TechnicalName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetOrCloneByName_Parms, TechnicalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechnicalName_MetaData), NewProp_TechnicalName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::NewProp_NewCloneId = { "NewCloneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetOrCloneByName_Parms, NewCloneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventGetOrCloneByName_Parms, ReturnValue), Z_Construct_UClass_UArticyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::NewProp_TechnicalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::NewProp_NewCloneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "GetOrCloneByName", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::ArticyDatabase_eventGetOrCloneByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::ArticyDatabase_eventGetOrCloneByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execGetOrCloneByName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TechnicalName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCloneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArticyObject**)Z_Param__Result=P_THIS->GetOrCloneByName(Z_Param_Out_TechnicalName,Z_Param_NewCloneId);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function GetOrCloneByName

// Begin Class UArticyDatabase Function IsInShadowState
struct Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics
{
	struct ArticyDatabase_eventIsInShadowState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Script Methods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if the database is in shadow state.\n\x09 * Can be used in script methods to determine if the function is called during\n\x09 * a flow player branch calculation.\n\x09 * @return True if the database is in shadow state, false otherwise.\n\x09 */" },
#endif
		{ "DisplayName", "Is in shadow state?" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the database is in shadow state.\nCan be used in script methods to determine if the function is called during\na flow player branch calculation.\n@return True if the database is in shadow state, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyDatabase_eventIsInShadowState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyDatabase_eventIsInShadowState_Parms), &Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "IsInShadowState", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::ArticyDatabase_eventIsInShadowState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::ArticyDatabase_eventIsInShadowState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_IsInShadowState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_IsInShadowState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execIsInShadowState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInShadowState();
	P_NATIVE_END;
}
// End Class UArticyDatabase Function IsInShadowState

// Begin Class UArticyDatabase Function IsPackageDefaultPackage
struct Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics
{
	struct ArticyDatabase_eventIsPackageDefaultPackage_Parms
	{
		FString PackageName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines if a package is a default package.\n\x09 * @param PackageName The name of the package to check.\n\x09 * @return True if the package is a default package, false otherwise.\n\x09 */" },
#endif
		{ "DisplayName", "Is package default package?" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if a package is a default package.\n@param PackageName The name of the package to check.\n@return True if the package is a default package, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventIsPackageDefaultPackage_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyDatabase_eventIsPackageDefaultPackage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyDatabase_eventIsPackageDefaultPackage_Parms), &Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "IsPackageDefaultPackage", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::ArticyDatabase_eventIsPackageDefaultPackage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::ArticyDatabase_eventIsPackageDefaultPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execIsPackageDefaultPackage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPackageDefaultPackage(Z_Param_PackageName);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function IsPackageDefaultPackage

// Begin Class UArticyDatabase Function LoadPackage
struct Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics
{
	struct ArticyDatabase_eventLoadPackage_Parms
	{
		FString PackageName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Load a package of a given name.\n\x09 * @param PackageName The name of the package to load.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load a package of a given name.\n@param PackageName The name of the package to load." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventLoadPackage_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::NewProp_PackageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "LoadPackage", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::ArticyDatabase_eventLoadPackage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::ArticyDatabase_eventLoadPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_LoadPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_LoadPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execLoadPackage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPackage(Z_Param_PackageName);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function LoadPackage

// Begin Class UArticyDatabase Function SetDefaultUserMethodsProvider
struct Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics
{
	struct ArticyDatabase_eventSetDefaultUserMethodsProvider_Parms
	{
		UObject* MethodProvider;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Script Methods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a default method provider, which will be always used whenever scripts get\n\x09 * evaluated / executed without a valid method provider.\n\x09 * @param MethodProvider The method provider object.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a default method provider, which will be always used whenever scripts get\nevaluated / executed without a valid method provider.\n@param MethodProvider The method provider object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MethodProvider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::NewProp_MethodProvider = { "MethodProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventSetDefaultUserMethodsProvider_Parms, MethodProvider), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::NewProp_MethodProvider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "SetDefaultUserMethodsProvider", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::ArticyDatabase_eventSetDefaultUserMethodsProvider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::ArticyDatabase_eventSetDefaultUserMethodsProvider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execSetDefaultUserMethodsProvider)
{
	P_GET_OBJECT(UObject,Z_Param_MethodProvider);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultUserMethodsProvider(Z_Param_MethodProvider);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function SetDefaultUserMethodsProvider

// Begin Class UArticyDatabase Function SetExpressoScriptsClass
struct Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics
{
	struct ArticyDatabase_eventSetExpressoScriptsClass_Parms
	{
		TSubclassOf<UArticyExpressoScripts> NewClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventSetExpressoScriptsClass_Parms, NewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyExpressoScripts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::NewProp_NewClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "SetExpressoScriptsClass", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::ArticyDatabase_eventSetExpressoScriptsClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::ArticyDatabase_eventSetExpressoScriptsClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execSetExpressoScriptsClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExpressoScriptsClass(Z_Param_NewClass);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function SetExpressoScriptsClass

// Begin Class UArticyDatabase Function UnloadDatabase
struct Z_Construct_UFunction_UArticyDatabase_UnloadDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unloads the database, which causes that all changes get removed. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unloads the database, which causes that all changes get removed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_UnloadDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "UnloadDatabase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_UnloadDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_UnloadDatabase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArticyDatabase_UnloadDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_UnloadDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execUnloadDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadDatabase();
	P_NATIVE_END;
}
// End Class UArticyDatabase Function UnloadDatabase

// Begin Class UArticyDatabase Function UnloadPackage
struct Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics
{
	struct ArticyDatabase_eventUnloadPackage_Parms
	{
		FString PackageName;
		bool bQuickUnload;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Load a package of a given name.\n\x09 * @param PackageName The name of the package to unload.\n\x09 * @param bQuickUnload If true, perform a quick unload.\n\x09 * @return True if the package was successfully unloaded, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load a package of a given name.\n@param PackageName The name of the package to unload.\n@param bQuickUnload If true, perform a quick unload.\n@return True if the package was successfully unloaded, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuickUnload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static void NewProp_bQuickUnload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuickUnload;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArticyDatabase_eventUnloadPackage_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
void Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_bQuickUnload_SetBit(void* Obj)
{
	((ArticyDatabase_eventUnloadPackage_Parms*)Obj)->bQuickUnload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_bQuickUnload = { "bQuickUnload", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyDatabase_eventUnloadPackage_Parms), &Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_bQuickUnload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuickUnload_MetaData), NewProp_bQuickUnload_MetaData) };
void Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArticyDatabase_eventUnloadPackage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArticyDatabase_eventUnloadPackage_Parms), &Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_bQuickUnload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDatabase, nullptr, "UnloadPackage", nullptr, nullptr, Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::ArticyDatabase_eventUnloadPackage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::ArticyDatabase_eventUnloadPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArticyDatabase_UnloadPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDatabase_UnloadPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArticyDatabase::execUnloadPackage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
	P_GET_UBOOL(Z_Param_bQuickUnload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnloadPackage(Z_Param_PackageName,Z_Param_bQuickUnload);
	P_NATIVE_END;
}
// End Class UArticyDatabase Function UnloadPackage

// Begin Class UArticyDatabase
void UArticyDatabase::StaticRegisterNativesUArticyDatabase()
{
	UClass* Class = UArticyDatabase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloneFrom", &UArticyDatabase::execCloneFrom },
		{ "CloneFromByName", &UArticyDatabase::execCloneFromByName },
		{ "GetAllObjects", &UArticyDatabase::execGetAllObjects },
		{ "GetImportedPackageNames", &UArticyDatabase::execGetImportedPackageNames },
		{ "GetObject", &UArticyDatabase::execGetObject },
		{ "GetObjectByName", &UArticyDatabase::execGetObjectByName },
		{ "GetObjectFromStringRepresentation", &UArticyDatabase::execGetObjectFromStringRepresentation },
		{ "GetObjects", &UArticyDatabase::execGetObjects },
		{ "GetObjectsOfClass", &UArticyDatabase::execGetObjectsOfClass },
		{ "GetOrClone", &UArticyDatabase::execGetOrClone },
		{ "GetOrCloneByName", &UArticyDatabase::execGetOrCloneByName },
		{ "IsInShadowState", &UArticyDatabase::execIsInShadowState },
		{ "IsPackageDefaultPackage", &UArticyDatabase::execIsPackageDefaultPackage },
		{ "LoadPackage", &UArticyDatabase::execLoadPackage },
		{ "SetDefaultUserMethodsProvider", &UArticyDatabase::execSetDefaultUserMethodsProvider },
		{ "SetExpressoScriptsClass", &UArticyDatabase::execSetExpressoScriptsClass },
		{ "UnloadDatabase", &UArticyDatabase::execUnloadDatabase },
		{ "UnloadPackage", &UArticyDatabase::execUnloadPackage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyDatabase);
UClass* Z_Construct_UClass_UArticyDatabase_NoRegister()
{
	return UArticyDatabase::StaticClass();
}
struct Z_Construct_UClass_UArticyDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The database is used for accessing or cloning any articy object.\n */" },
#endif
		{ "IncludePath", "ArticyDatabase.h" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The database is used for accessing or cloning any articy object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedPackages_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A list of all packages that were imported from articy:draft. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of all packages that were imported from articy:draft." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPackages_MetaData[] = {
		{ "Category", "Articy" },
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedObjectsById_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedObjectsByName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedExpressoScripts_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressoScriptsClass_MetaData[] = {
		{ "Category", "Articy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An instance of this class will be used to execute script fragments. */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An instance of this class will be used to execute script fragments." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedPackages_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedPackages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ImportedPackages;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoadedPackages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedPackages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedObjectsById_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedObjectsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedObjectsById;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedObjectsByName_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedObjectsByName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedObjectsByName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedExpressoScripts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExpressoScriptsClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyDatabase_CloneFrom, "CloneFrom" }, // 3056874969
		{ &Z_Construct_UFunction_UArticyDatabase_CloneFromByName, "CloneFromByName" }, // 2629064044
		{ &Z_Construct_UFunction_UArticyDatabase_GetAllObjects, "GetAllObjects" }, // 2454554389
		{ &Z_Construct_UFunction_UArticyDatabase_GetImportedPackageNames, "GetImportedPackageNames" }, // 1796708633
		{ &Z_Construct_UFunction_UArticyDatabase_GetObject, "GetObject" }, // 941592374
		{ &Z_Construct_UFunction_UArticyDatabase_GetObjectByName, "GetObjectByName" }, // 2829638254
		{ &Z_Construct_UFunction_UArticyDatabase_GetObjectFromStringRepresentation, "GetObjectFromStringRepresentation" }, // 2140416741
		{ &Z_Construct_UFunction_UArticyDatabase_GetObjects, "GetObjects" }, // 1209765086
		{ &Z_Construct_UFunction_UArticyDatabase_GetObjectsOfClass, "GetObjectsOfClass" }, // 728365744
		{ &Z_Construct_UFunction_UArticyDatabase_GetOrClone, "GetOrClone" }, // 4083278647
		{ &Z_Construct_UFunction_UArticyDatabase_GetOrCloneByName, "GetOrCloneByName" }, // 1970428774
		{ &Z_Construct_UFunction_UArticyDatabase_IsInShadowState, "IsInShadowState" }, // 4051866521
		{ &Z_Construct_UFunction_UArticyDatabase_IsPackageDefaultPackage, "IsPackageDefaultPackage" }, // 1797923922
		{ &Z_Construct_UFunction_UArticyDatabase_LoadPackage, "LoadPackage" }, // 3009092174
		{ &Z_Construct_UFunction_UArticyDatabase_SetDefaultUserMethodsProvider, "SetDefaultUserMethodsProvider" }, // 3354351148
		{ &Z_Construct_UFunction_UArticyDatabase_SetExpressoScriptsClass, "SetExpressoScriptsClass" }, // 4174870542
		{ &Z_Construct_UFunction_UArticyDatabase_UnloadDatabase, "UnloadDatabase" }, // 706032364
		{ &Z_Construct_UFunction_UArticyDatabase_UnloadPackage, "UnloadPackage" }, // 1447011596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ImportedPackages_ValueProp = { "ImportedPackages", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UArticyPackage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ImportedPackages_Key_KeyProp = { "ImportedPackages_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ImportedPackages = { "ImportedPackages", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyDatabase, ImportedPackages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedPackages_MetaData), NewProp_ImportedPackages_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedPackages_Inner = { "LoadedPackages", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedPackages = { "LoadedPackages", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyDatabase, LoadedPackages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedPackages_MetaData), NewProp_LoadedPackages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsById_ValueProp = { "LoadedObjectsById", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UArticyCloneableObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsById_Key_KeyProp = { "LoadedObjectsById_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArticyId, METADATA_PARAMS(0, nullptr) }; // 4167114503
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsById = { "LoadedObjectsById", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyDatabase, LoadedObjectsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedObjectsById_MetaData), NewProp_LoadedObjectsById_MetaData) }; // 4167114503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsByName_ValueProp = { "LoadedObjectsByName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArticyDatabaseObjectArray, METADATA_PARAMS(0, nullptr) }; // 2834210997
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsByName_Key_KeyProp = { "LoadedObjectsByName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsByName = { "LoadedObjectsByName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyDatabase, LoadedObjectsByName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedObjectsByName_MetaData), NewProp_LoadedObjectsByName_MetaData) }; // 2834210997
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_CachedExpressoScripts = { "CachedExpressoScripts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyDatabase, CachedExpressoScripts), Z_Construct_UClass_UArticyExpressoScripts_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedExpressoScripts_MetaData), NewProp_CachedExpressoScripts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ExpressoScriptsClass = { "ExpressoScriptsClass", nullptr, (EPropertyFlags)0x0044000000024001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArticyDatabase, ExpressoScriptsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UArticyExpressoScripts_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressoScriptsClass_MetaData), NewProp_ExpressoScriptsClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ImportedPackages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ImportedPackages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ImportedPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedPackages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsByName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsByName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_LoadedObjectsByName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_CachedExpressoScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDatabase_Statics::NewProp_ExpressoScriptsClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArticyDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UArticyDatabase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UShadowStateManager_NoRegister, (int32)VTABLE_OFFSET(UArticyDatabase, IShadowStateManager), false },  // 464171741
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyDatabase_Statics::ClassParams = {
	&UArticyDatabase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArticyDatabase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDatabase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyDatabase()
{
	if (!Z_Registration_Info_UClass_UArticyDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyDatabase.OuterSingleton, Z_Construct_UClass_UArticyDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyDatabase.OuterSingleton;
}
template<> ARTICYRUNTIME_API UClass* StaticClass<UArticyDatabase>()
{
	return UArticyDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyDatabase);
UArticyDatabase::~UArticyDatabase() {}
// End Class UArticyDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyObjectShadow::StaticStruct, Z_Construct_UScriptStruct_FArticyObjectShadow_Statics::NewStructOps, TEXT("ArticyObjectShadow"), &Z_Registration_Info_UScriptStruct_ArticyObjectShadow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyObjectShadow), 1573108212U) },
		{ FArticyShadowableObject::StaticStruct, Z_Construct_UScriptStruct_FArticyShadowableObject_Statics::NewStructOps, TEXT("ArticyShadowableObject"), &Z_Registration_Info_UScriptStruct_ArticyShadowableObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyShadowableObject), 458209110U) },
		{ FArticyDatabaseObjectArray::StaticStruct, Z_Construct_UScriptStruct_FArticyDatabaseObjectArray_Statics::NewStructOps, TEXT("ArticyDatabaseObjectArray"), &Z_Registration_Info_UScriptStruct_ArticyDatabaseObjectArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyDatabaseObjectArray), 2834210997U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyCloneableObject, UArticyCloneableObject::StaticClass, TEXT("UArticyCloneableObject"), &Z_Registration_Info_UClass_UArticyCloneableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyCloneableObject), 1887593959U) },
		{ Z_Construct_UClass_UArticyDatabase, UArticyDatabase::StaticClass, TEXT("UArticyDatabase"), &Z_Registration_Info_UClass_UArticyDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyDatabase), 2155250222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_3825507632(TEXT("/Script/ArticyRuntime"),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GameJamHOF15_NaNoRenO_Plugins_articydrbd1b5c56adc7V5_Source_ArticyRuntime_Public_ArticyDatabase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
