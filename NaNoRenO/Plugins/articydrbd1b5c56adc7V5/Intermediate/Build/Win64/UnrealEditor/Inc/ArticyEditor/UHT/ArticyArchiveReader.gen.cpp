// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyEditor/Public/ArticyArchiveReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyArchiveReader() {}

// Begin Cross Module References
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyArchiveReader();
ARTICYEDITOR_API UClass* Z_Construct_UClass_UArticyArchiveReader_NoRegister();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyArchiveFileData();
ARTICYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FArticyArchiveHeader();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArticyEditor();
// End Cross Module References

// Begin ScriptStruct FArticyArchiveHeader
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyArchiveHeader;
class UScriptStruct* FArticyArchiveHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyArchiveHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyArchiveHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyArchiveHeader, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyArchiveHeader"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyArchiveHeader.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyArchiveHeader>()
{
	return FArticyArchiveHeader::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyArchiveHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure that represents the header of an Articy archive.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyArchiveReader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure that represents the header of an Articy archive." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyArchiveHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyArchiveHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyArchiveHeader",
	nullptr,
	0,
	sizeof(FArticyArchiveHeader),
	alignof(FArticyArchiveHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyArchiveHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyArchiveHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyArchiveHeader()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyArchiveHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyArchiveHeader.InnerSingleton, Z_Construct_UScriptStruct_FArticyArchiveHeader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyArchiveHeader.InnerSingleton;
}
// End ScriptStruct FArticyArchiveHeader

// Begin ScriptStruct FArticyArchiveFileData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArticyArchiveFileData;
class UScriptStruct* FArticyArchiveFileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyArchiveFileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArticyArchiveFileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArticyArchiveFileData, (UObject*)Z_Construct_UPackage__Script_ArticyEditor(), TEXT("ArticyArchiveFileData"));
	}
	return Z_Registration_Info_UScriptStruct_ArticyArchiveFileData.OuterSingleton;
}
template<> ARTICYEDITOR_API UScriptStruct* StaticStruct<FArticyArchiveFileData>()
{
	return FArticyArchiveFileData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArticyArchiveFileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure that represents metadata for a file within an Articy archive.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ArticyArchiveReader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure that represents metadata for a file within an Articy archive." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArticyArchiveFileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArticyArchiveFileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
	nullptr,
	&NewStructOps,
	"ArticyArchiveFileData",
	nullptr,
	0,
	sizeof(FArticyArchiveFileData),
	alignof(FArticyArchiveFileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArticyArchiveFileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArticyArchiveFileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArticyArchiveFileData()
{
	if (!Z_Registration_Info_UScriptStruct_ArticyArchiveFileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArticyArchiveFileData.InnerSingleton, Z_Construct_UScriptStruct_FArticyArchiveFileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArticyArchiveFileData.InnerSingleton;
}
// End ScriptStruct FArticyArchiveFileData

// Begin Class UArticyArchiveReader
void UArticyArchiveReader::StaticRegisterNativesUArticyArchiveReader()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyArchiveReader);
UClass* Z_Construct_UClass_UArticyArchiveReader_NoRegister()
{
	return UArticyArchiveReader::StaticClass();
}
struct Z_Construct_UClass_UArticyArchiveReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class responsible for reading and processing Articy archives.\n */" },
#endif
		{ "IncludePath", "ArticyArchiveReader.h" },
		{ "ModuleRelativePath", "Public/ArticyArchiveReader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class responsible for reading and processing Articy archives." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyArchiveReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArticyArchiveReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArticyEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyArchiveReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyArchiveReader_Statics::ClassParams = {
	&UArticyArchiveReader::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArticyArchiveReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UArticyArchiveReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArticyArchiveReader()
{
	if (!Z_Registration_Info_UClass_UArticyArchiveReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyArchiveReader.OuterSingleton, Z_Construct_UClass_UArticyArchiveReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArticyArchiveReader.OuterSingleton;
}
template<> ARTICYEDITOR_API UClass* StaticClass<UArticyArchiveReader>()
{
	return UArticyArchiveReader::StaticClass();
}
UArticyArchiveReader::UArticyArchiveReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyArchiveReader);
UArticyArchiveReader::~UArticyArchiveReader() {}
// End Class UArticyArchiveReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyArchiveReader_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArticyArchiveHeader::StaticStruct, Z_Construct_UScriptStruct_FArticyArchiveHeader_Statics::NewStructOps, TEXT("ArticyArchiveHeader"), &Z_Registration_Info_UScriptStruct_ArticyArchiveHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyArchiveHeader), 2169143453U) },
		{ FArticyArchiveFileData::StaticStruct, Z_Construct_UScriptStruct_FArticyArchiveFileData_Statics::NewStructOps, TEXT("ArticyArchiveFileData"), &Z_Registration_Info_UScriptStruct_ArticyArchiveFileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArticyArchiveFileData), 3502155797U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArticyArchiveReader, UArticyArchiveReader::StaticClass, TEXT("UArticyArchiveReader"), &Z_Registration_Info_UClass_UArticyArchiveReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyArchiveReader), 642546524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyArchiveReader_h_3851769530(TEXT("/Script/ArticyEditor"),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyArchiveReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyArchiveReader_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyArchiveReader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_petrichoria_Plugins_articydrbd1b5c56adc7V5_Source_ArticyEditor_Public_ArticyArchiveReader_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
