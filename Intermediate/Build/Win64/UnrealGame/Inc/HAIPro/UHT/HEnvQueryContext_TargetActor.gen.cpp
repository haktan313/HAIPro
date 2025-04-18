// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/HEnvQueryContext_TargetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHEnvQueryContext_TargetActor() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
HAIPRO_API UClass* Z_Construct_UClass_UHEnvQueryContext_TargetActor();
HAIPRO_API UClass* Z_Construct_UClass_UHEnvQueryContext_TargetActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References

// Begin Class UHEnvQueryContext_TargetActor
void UHEnvQueryContext_TargetActor::StaticRegisterNativesUHEnvQueryContext_TargetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHEnvQueryContext_TargetActor);
UClass* Z_Construct_UClass_UHEnvQueryContext_TargetActor_NoRegister()
{
	return UHEnvQueryContext_TargetActor::StaticClass();
}
struct Z_Construct_UClass_UHEnvQueryContext_TargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HEnvQueryContext_TargetActor.h" },
		{ "ModuleRelativePath", "Public/HEnvQueryContext_TargetActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHEnvQueryContext_TargetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHEnvQueryContext_TargetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHEnvQueryContext_TargetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHEnvQueryContext_TargetActor_Statics::ClassParams = {
	&UHEnvQueryContext_TargetActor::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHEnvQueryContext_TargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHEnvQueryContext_TargetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHEnvQueryContext_TargetActor()
{
	if (!Z_Registration_Info_UClass_UHEnvQueryContext_TargetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHEnvQueryContext_TargetActor.OuterSingleton, Z_Construct_UClass_UHEnvQueryContext_TargetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHEnvQueryContext_TargetActor.OuterSingleton;
}
template<> HAIPRO_API UClass* StaticClass<UHEnvQueryContext_TargetActor>()
{
	return UHEnvQueryContext_TargetActor::StaticClass();
}
UHEnvQueryContext_TargetActor::UHEnvQueryContext_TargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHEnvQueryContext_TargetActor);
UHEnvQueryContext_TargetActor::~UHEnvQueryContext_TargetActor() {}
// End Class UHEnvQueryContext_TargetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_build_5_5_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HEnvQueryContext_TargetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHEnvQueryContext_TargetActor, UHEnvQueryContext_TargetActor::StaticClass, TEXT("UHEnvQueryContext_TargetActor"), &Z_Registration_Info_UClass_UHEnvQueryContext_TargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHEnvQueryContext_TargetActor), 3182993614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_build_5_5_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HEnvQueryContext_TargetActor_h_3006210013(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_build_5_5_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HEnvQueryContext_TargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_build_5_5_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HEnvQueryContext_TargetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
