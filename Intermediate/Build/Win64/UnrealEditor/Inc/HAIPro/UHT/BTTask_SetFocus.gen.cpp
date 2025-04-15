// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Tasks/BTTask_SetFocus.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetFocus() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetFocus();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetFocus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	void UBTTask_SetFocus::StaticRegisterNativesUBTTask_SetFocus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetFocus);
	UClass* Z_Construct_UClass_UBTTask_SetFocus_NoRegister()
	{
		return UBTTask_SetFocus::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetFocus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetFocus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFocus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_SetFocus.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetFocus.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFocus_Statics::NewProp_targetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetFocus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SetFocus_Statics::NewProp_targetActorKey = { "targetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_SetFocus, targetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFocus_Statics::NewProp_targetActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocus_Statics::NewProp_targetActorKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocus_Statics::NewProp_targetActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetFocus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetFocus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetFocus_Statics::ClassParams = {
		&UBTTask_SetFocus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SetFocus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFocus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetFocus()
	{
		if (!Z_Registration_Info_UClass_UBTTask_SetFocus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetFocus.OuterSingleton, Z_Construct_UClass_UBTTask_SetFocus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_SetFocus.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTTask_SetFocus>()
	{
		return UBTTask_SetFocus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetFocus);
	UBTTask_SetFocus::~UBTTask_SetFocus() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetFocus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetFocus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetFocus, UBTTask_SetFocus::StaticClass, TEXT("UBTTask_SetFocus"), &Z_Registration_Info_UClass_UBTTask_SetFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetFocus), 3005153285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetFocus_h_1753869457(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetFocus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetFocus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
