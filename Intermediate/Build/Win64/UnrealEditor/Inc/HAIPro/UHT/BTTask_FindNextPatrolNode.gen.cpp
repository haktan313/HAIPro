// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Tasks/BTTask_FindNextPatrolNode.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindNextPatrolNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindNextPatrolNode();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindNextPatrolNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	void UBTTask_FindNextPatrolNode::StaticRegisterNativesUBTTask_FindNextPatrolNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindNextPatrolNode);
	UClass* Z_Construct_UClass_UBTTask_FindNextPatrolNode_NoRegister()
	{
		return UBTTask_FindNextPatrolNode::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pointVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_FindNextPatrolNode.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindNextPatrolNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::NewProp_pointVector_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindNextPatrolNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::NewProp_pointVector = { "pointVector", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_FindNextPatrolNode, pointVector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::NewProp_pointVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::NewProp_pointVector_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::NewProp_pointVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindNextPatrolNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::ClassParams = {
		&UBTTask_FindNextPatrolNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindNextPatrolNode()
	{
		if (!Z_Registration_Info_UClass_UBTTask_FindNextPatrolNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindNextPatrolNode.OuterSingleton, Z_Construct_UClass_UBTTask_FindNextPatrolNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_FindNextPatrolNode.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTTask_FindNextPatrolNode>()
	{
		return UBTTask_FindNextPatrolNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindNextPatrolNode);
	UBTTask_FindNextPatrolNode::~UBTTask_FindNextPatrolNode() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindNextPatrolNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindNextPatrolNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindNextPatrolNode, UBTTask_FindNextPatrolNode::StaticClass, TEXT("UBTTask_FindNextPatrolNode"), &Z_Registration_Info_UClass_UBTTask_FindNextPatrolNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindNextPatrolNode), 3189863921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindNextPatrolNode_h_2532611230(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindNextPatrolNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindNextPatrolNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
