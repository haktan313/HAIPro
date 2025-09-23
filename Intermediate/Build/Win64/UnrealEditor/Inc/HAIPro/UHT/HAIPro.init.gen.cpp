// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHAIPro_init() {}
	HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature();
	HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HAIPro;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HAIPro()
	{
		if (!Z_Registration_Info_UPackage__Script_HAIPro.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HAIPro",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3ECE8114,
				0x9E3C65EA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HAIPro.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HAIPro.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HAIPro(Z_Construct_UPackage__Script_HAIPro, TEXT("/Script/HAIPro"), Z_Registration_Info_UPackage__Script_HAIPro, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3ECE8114, 0x9E3C65EA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
