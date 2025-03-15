// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ArticyEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ArticyEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_ArticyEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ArticyEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x49D8638B,
				0x2A3EFD27,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ArticyEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ArticyEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ArticyEditor(Z_Construct_UPackage__Script_ArticyEditor, TEXT("/Script/ArticyEditor"), Z_Registration_Info_UPackage__Script_ArticyEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x49D8638B, 0x2A3EFD27));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
