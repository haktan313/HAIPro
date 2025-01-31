// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/HAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_AHAIController();
	HAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	DEFINE_FUNCTION(AHAIController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	void AHAIController::StaticRegisterNativesAHAIController()
	{
		UClass* Class = AHAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerceptionUpdated", &AHAIController::execOnPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics
	{
		struct HAIController_eventOnPerceptionUpdated_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HAIController_eventOnPerceptionUpdated_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::HAIController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHAIController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHAIController);
	UClass* Z_Construct_UClass_AHAIController_NoRegister()
	{
		return AHAIController::StaticClass();
	}
	struct Z_Construct_UClass_AHAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdFollowingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdFollowingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HAIBaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HAIBaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HearingConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 1346824300
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HAIController.h" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowingComponent = { "CrowdFollowingComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHAIController, CrowdFollowingComponent), Z_Construct_UClass_UCrowdFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent = { "HAIBaseComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHAIController, HAIBaseComponent), Z_Construct_UClass_UHAIBaseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig = { "HearingConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHAIController, HearingConfig), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig = { "DamageConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHAIController, DamageConfig), Z_Construct_UClass_UAISenseConfig_Damage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::NewProp_targetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHAIController, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::NewProp_targetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::NewProp_targetActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_targetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHAIController_Statics::ClassParams = {
		&AHAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHAIController()
	{
		if (!Z_Registration_Info_UClass_AHAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHAIController.OuterSingleton, Z_Construct_UClass_AHAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHAIController.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<AHAIController>()
	{
		return AHAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHAIController);
	AHAIController::~AHAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHAIController, AHAIController::StaticClass, TEXT("AHAIController"), &Z_Registration_Info_UClass_AHAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHAIController), 309690438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_1461128055(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
