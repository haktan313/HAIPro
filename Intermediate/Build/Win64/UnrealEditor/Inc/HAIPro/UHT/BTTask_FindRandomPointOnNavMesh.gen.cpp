// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Tasks/BTTask_FindRandomPointOnNavMesh.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindRandomPointOnNavMesh() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	void UBTTask_FindRandomPointOnNavMesh::StaticRegisterNativesUBTTask_FindRandomPointOnNavMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindRandomPointOnNavMesh);
	UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_NoRegister()
	{
		return UBTTask_FindRandomPointOnNavMesh::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pointVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_FindRandomPointOnNavMesh.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOnNavMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Radius" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOnNavMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_FindRandomPointOnNavMesh, Radius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_pointVector_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOnNavMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_pointVector = { "pointVector", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_FindRandomPointOnNavMesh, pointVector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_pointVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_pointVector_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_pointVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindRandomPointOnNavMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::ClassParams = {
		&UBTTask_FindRandomPointOnNavMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh()
	{
		if (!Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh.OuterSingleton, Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTTask_FindRandomPointOnNavMesh>()
	{
		return UBTTask_FindRandomPointOnNavMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindRandomPointOnNavMesh);
	UBTTask_FindRandomPointOnNavMesh::~UBTTask_FindRandomPointOnNavMesh() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh, UBTTask_FindRandomPointOnNavMesh::StaticClass, TEXT("UBTTask_FindRandomPointOnNavMesh"), &Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindRandomPointOnNavMesh), 3214307054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_1226958493(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
