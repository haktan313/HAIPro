// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/Tasks/BTTaskNode_SetNextPatrolPoint.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTaskNode_SetNextPatrolPoint() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
HAIPRO_API UClass* Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint();
HAIPRO_API UClass* Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTaskNode_SetNextPatrolPoint *******************************************
void UBTTaskNode_SetNextPatrolPoint::StaticRegisterNativesUBTTaskNode_SetNextPatrolPoint()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint;
UClass* UBTTaskNode_SetNextPatrolPoint::GetPrivateStaticClass()
{
	using TClass = UBTTaskNode_SetNextPatrolPoint;
	if (!Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTaskNode_SetNextPatrolPoint"),
			Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint.InnerSingleton,
			StaticRegisterNativesUBTTaskNode_SetNextPatrolPoint,
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
	return Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_NoRegister()
{
	return UBTTaskNode_SetNextPatrolPoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTaskNode_SetNextPatrolPoint.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Tasks/BTTaskNode_SetNextPatrolPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextPatrolPointKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Tasks/BTTaskNode_SetNextPatrolPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextPatrolPointKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_SetNextPatrolPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::NewProp_NextPatrolPointKey = { "NextPatrolPointKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTaskNode_SetNextPatrolPoint, NextPatrolPointKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextPatrolPointKey_MetaData), NewProp_NextPatrolPointKey_MetaData) }; // 815030858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::NewProp_NextPatrolPointKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::ClassParams = {
	&UBTTaskNode_SetNextPatrolPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint.OuterSingleton, Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_SetNextPatrolPoint);
UBTTaskNode_SetNextPatrolPoint::~UBTTaskNode_SetNextPatrolPoint() {}
// ********** End Class UBTTaskNode_SetNextPatrolPoint *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetNextPatrolPoint_h__Script_HAIPro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode_SetNextPatrolPoint, UBTTaskNode_SetNextPatrolPoint::StaticClass, TEXT("UBTTaskNode_SetNextPatrolPoint"), &Z_Registration_Info_UClass_UBTTaskNode_SetNextPatrolPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode_SetNextPatrolPoint), 860172621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetNextPatrolPoint_h__Script_HAIPro_2887493243(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetNextPatrolPoint_h__Script_HAIPro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_BehaviorTree_Tasks_BTTaskNode_SetNextPatrolPoint_h__Script_HAIPro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
