// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/Tasks/BTTaskNode_ClearFocus.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTaskNode_ClearFocus() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
HAIPRO_API UClass* Z_Construct_UClass_UBTTaskNode_ClearFocus();
HAIPRO_API UClass* Z_Construct_UClass_UBTTaskNode_ClearFocus_NoRegister();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTaskNode_ClearFocus ***************************************************
void UBTTaskNode_ClearFocus::StaticRegisterNativesUBTTaskNode_ClearFocus()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTaskNode_ClearFocus;
UClass* UBTTaskNode_ClearFocus::GetPrivateStaticClass()
{
	using TClass = UBTTaskNode_ClearFocus;
	if (!Z_Registration_Info_UClass_UBTTaskNode_ClearFocus.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTaskNode_ClearFocus"),
			Z_Registration_Info_UClass_UBTTaskNode_ClearFocus.InnerSingleton,
			StaticRegisterNativesUBTTaskNode_ClearFocus,
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
	return Z_Registration_Info_UClass_UBTTaskNode_ClearFocus.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTaskNode_ClearFocus_NoRegister()
{
	return UBTTaskNode_ClearFocus::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_ClearFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTaskNode_ClearFocus.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Tasks/BTTaskNode_ClearFocus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_ClearFocus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTaskNode_ClearFocus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_ClearFocus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_ClearFocus_Statics::ClassParams = {
	&UBTTaskNode_ClearFocus::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_ClearFocus_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_ClearFocus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode_ClearFocus()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode_ClearFocus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode_ClearFocus.OuterSingleton, Z_Construct_UClass_UBTTaskNode_ClearFocus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_ClearFocus.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_ClearFocus);
UBTTaskNode_ClearFocus::~UBTTaskNode_ClearFocus() {}
// ********** End Class UBTTaskNode_ClearFocus *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_ClearFocus_h__Script_HAIPro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode_ClearFocus, UBTTaskNode_ClearFocus::StaticClass, TEXT("UBTTaskNode_ClearFocus"), &Z_Registration_Info_UClass_UBTTaskNode_ClearFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode_ClearFocus), 669925925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_ClearFocus_h__Script_HAIPro_3508557772(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_ClearFocus_h__Script_HAIPro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_ClearFocus_h__Script_HAIPro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
