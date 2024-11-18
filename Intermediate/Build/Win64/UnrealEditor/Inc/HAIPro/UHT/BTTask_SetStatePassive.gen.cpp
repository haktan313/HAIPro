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
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
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
		{ "Comment", "//Set the state of the AI character as passive\n" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
		{ "ToolTip", "Set the state of the AI character as passive" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive = { "howManySecondsBeforePassive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_SetStatePassive, howManySecondsBeforePassive), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive,
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
		0x001000A0u,
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
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetStatePassive, UBTTask_SetStatePassive::StaticClass, TEXT("UBTTask_SetStatePassive"), &Z_Registration_Info_UClass_UBTTask_SetStatePassive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetStatePassive), 3244396237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_4284592980(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
