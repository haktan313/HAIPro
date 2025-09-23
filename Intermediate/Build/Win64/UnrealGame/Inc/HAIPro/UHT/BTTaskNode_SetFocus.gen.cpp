// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/Tasks/BTTaskNode_SetFocus.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTaskNode_SetFocus() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
HAIPRO_API UClass* Z_Construct_UClass_UBTTaskNode_SetFocus();
HAIPRO_API UClass* Z_Construct_UClass_UBTTaskNode_SetFocus_NoRegister();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTaskNode_SetFocus *****************************************************
void UBTTaskNode_SetFocus::StaticRegisterNativesUBTTaskNode_SetFocus()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTaskNode_SetFocus;
UClass* UBTTaskNode_SetFocus::GetPrivateStaticClass()
{
	using TClass = UBTTaskNode_SetFocus;
	if (!Z_Registration_Info_UClass_UBTTaskNode_SetFocus.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTaskNode_SetFocus"),
			Z_Registration_Info_UClass_UBTTaskNode_SetFocus.InnerSingleton,
			StaticRegisterNativesUBTTaskNode_SetFocus,
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
	return Z_Registration_Info_UClass_UBTTaskNode_SetFocus.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTaskNode_SetFocus_NoRegister()
{
	return UBTTaskNode_SetFocus::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_SetFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTaskNode_SetFocus.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Tasks/BTTaskNode_SetFocus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Tasks/BTTaskNode_SetFocus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_SetFocus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::NewProp_FocusTarget = { "FocusTarget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTaskNode_SetFocus, FocusTarget), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusTarget_MetaData), NewProp_FocusTarget_MetaData) }; // 815030858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::NewProp_FocusTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::ClassParams = {
	&UBTTaskNode_SetFocus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode_SetFocus()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode_SetFocus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode_SetFocus.OuterSingleton, Z_Construct_UClass_UBTTaskNode_SetFocus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_SetFocus.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_SetFocus);
UBTTaskNode_SetFocus::~UBTTaskNode_SetFocus() {}
// ********** End Class UBTTaskNode_SetFocus *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetFocus_h__Script_HAIPro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode_SetFocus, UBTTaskNode_SetFocus::StaticClass, TEXT("UBTTaskNode_SetFocus"), &Z_Registration_Info_UClass_UBTTaskNode_SetFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode_SetFocus), 965546163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetFocus_h__Script_HAIPro_2261386087(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetFocus_h__Script_HAIPro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetFocus_h__Script_HAIPro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
