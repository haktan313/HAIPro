// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Tasks/BTTask_SetStatePassive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetStatePassive() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	HAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetStatePassive();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetStatePassive_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	DEFINE_FUNCTION(UBTTask_SetStatePassive::execSetStateAsPassive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateAsPassive();
		P_NATIVE_END;
	}
	void UBTTask_SetStatePassive::StaticRegisterNativesUBTTask_SetStatePassive()
	{
		UClass* Class = UBTTask_SetStatePassive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetStateAsPassive", &UBTTask_SetStatePassive::execSetStateAsPassive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_SetStatePassive, nullptr, "SetStateAsPassive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetStatePassive);
	UClass* Z_Construct_UClass_UBTTask_SetStatePassive_NoRegister()
	{
		return UBTTask_SetStatePassive::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetStatePassive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_howManySecondsBeforePassive_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_howManySecondsBeforePassive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetStatePassive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_SetStatePassive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive, "SetStateAsPassive" }, // 3165174186
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetStatePassive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_SetStatePassive.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive = { "howManySecondsBeforePassive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_SetStatePassive, howManySecondsBeforePassive), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_SetStatePassive, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_MyOwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_MyOwnerComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_SetStatePassive, AIController), Z_Construct_UClass_AHAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_AIController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_MyOwnerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_AIController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetStatePassive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetStatePassive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::ClassParams = {
		&UBTTask_SetStatePassive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetStatePassive()
	{
		if (!Z_Registration_Info_UClass_UBTTask_SetStatePassive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetStatePassive.OuterSingleton, Z_Construct_UClass_UBTTask_SetStatePassive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_SetStatePassive.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTTask_SetStatePassive>()
	{
		return UBTTask_SetStatePassive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetStatePassive);
	UBTTask_SetStatePassive::~UBTTask_SetStatePassive() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetStatePassive, UBTTask_SetStatePassive::StaticClass, TEXT("UBTTask_SetStatePassive"), &Z_Registration_Info_UClass_UBTTask_SetStatePassive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetStatePassive), 121828560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_2625977335(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
