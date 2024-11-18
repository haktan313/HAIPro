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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_AHAIController();
	HAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();
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
		{ "Comment", "//Called when the AI controller possesses a pawn\n" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ToolTip", "Called when the AI controller possesses a pawn" },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2993177023
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HAIController.h" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHAIController_Statics::ClassParams = {
		&AHAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHAIController, AHAIController::StaticClass, TEXT("AHAIController"), &Z_Registration_Info_UClass_AHAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHAIController), 4146673945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_571565885(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
