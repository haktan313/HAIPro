// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTree/HStateTreeAIComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHStateTreeAIComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeAIComponent();
HAIPRO_API UClass* Z_Construct_UClass_UHStateTreeAIComponent();
HAIPRO_API UClass* Z_Construct_UClass_UHStateTreeAIComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHStateTreeAIComponent ***************************************************
void UHStateTreeAIComponent::StaticRegisterNativesUHStateTreeAIComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHStateTreeAIComponent;
UClass* UHStateTreeAIComponent::GetPrivateStaticClass()
{
	using TClass = UHStateTreeAIComponent;
	if (!Z_Registration_Info_UClass_UHStateTreeAIComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HStateTreeAIComponent"),
			Z_Registration_Info_UClass_UHStateTreeAIComponent.InnerSingleton,
			StaticRegisterNativesUHStateTreeAIComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHStateTreeAIComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHStateTreeAIComponent_NoRegister()
{
	return UHStateTreeAIComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHStateTreeAIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Collision Sockets Collision" },
		{ "IncludePath", "StateTree/HStateTreeAIComponent.h" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeAIComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHStateTreeAIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHStateTreeAIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeAIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHStateTreeAIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHStateTreeAIComponent_Statics::ClassParams = {
	&UHStateTreeAIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHStateTreeAIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHStateTreeAIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHStateTreeAIComponent()
{
	if (!Z_Registration_Info_UClass_UHStateTreeAIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHStateTreeAIComponent.OuterSingleton, Z_Construct_UClass_UHStateTreeAIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHStateTreeAIComponent.OuterSingleton;
}
UHStateTreeAIComponent::UHStateTreeAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHStateTreeAIComponent);
UHStateTreeAIComponent::~UHStateTreeAIComponent() {}
// ********** End Class UHStateTreeAIComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeAIComponent_h__Script_HAIPro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHStateTreeAIComponent, UHStateTreeAIComponent::StaticClass, TEXT("UHStateTreeAIComponent"), &Z_Registration_Info_UClass_UHStateTreeAIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHStateTreeAIComponent), 3115454446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeAIComponent_h__Script_HAIPro_3097445830(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeAIComponent_h__Script_HAIPro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeAIComponent_h__Script_HAIPro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
