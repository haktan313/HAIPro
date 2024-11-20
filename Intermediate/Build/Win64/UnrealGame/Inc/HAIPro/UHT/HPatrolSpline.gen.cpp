// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/HPatrolSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPatrolSpline() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline();
	HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	void AHPatrolSpline::StaticRegisterNativesAHPatrolSpline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHPatrolSpline);
	UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister()
	{
		return AHPatrolSpline::StaticClass();
	}
	struct Z_Construct_UClass_AHPatrolSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHPatrolSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HPatrolSpline.h" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_direction_MetaData[] = {
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHPatrolSpline, direction), METADATA_PARAMS(Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHPatrolSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHPatrolSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHPatrolSpline_Statics::ClassParams = {
		&AHPatrolSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHPatrolSpline()
	{
		if (!Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton, Z_Construct_UClass_AHPatrolSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<AHPatrolSpline>()
	{
		return AHPatrolSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPatrolSpline);
	AHPatrolSpline::~AHPatrolSpline() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHPatrolSpline, AHPatrolSpline::StaticClass, TEXT("AHPatrolSpline"), &Z_Registration_Info_UClass_AHPatrolSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHPatrolSpline), 1215512164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_3983163222(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
