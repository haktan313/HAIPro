// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Tasks/BTTask_DoAction.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_DoAction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_DoAction();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_DoAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	DEFINE_FUNCTION(UBTTask_DoAction::execActionEnd)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActionEnd(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	void UBTTask_DoAction::StaticRegisterNativesUBTTask_DoAction()
	{
		UClass* Class = UBTTask_DoAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionEnd", &UBTTask_DoAction::execActionEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics
	{
		struct BTTask_DoAction_eventActionEnd_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((BTTask_DoAction_eventActionEnd_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BTTask_DoAction_eventActionEnd_Parms), &Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_DoAction, nullptr, "ActionEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::BTTask_DoAction_eventActionEnd_Parms), Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_DoAction_ActionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_DoAction);
	UClass* Z_Construct_UClass_UBTTask_DoAction_NoRegister()
	{
		return UBTTask_DoAction::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_DoAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ActionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanDoActionBoolKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CanDoActionBoolKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenTooked_MetaData[];
#endif
		static void NewProp_TokenTooked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TokenTooked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_DoAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_DoAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_DoAction_ActionEnd, "ActionEnd" }, // 2464215108
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_DoAction.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "//Called when the action is ended with delegate \n" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ToolTip", "Called when the action is ended with delegate" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID = { "ActionID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, ActionID), METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "//ID of the action\n" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ToolTip", "ID of the action" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey = { "CanDoActionBoolKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, CanDoActionBoolKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_MetaData[] = {
		{ "Category", "Token" },
		{ "Comment", "//Amount of the token\n" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ToolTip", "Amount of the token" },
	};
#endif
	void Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_SetBit(void* Obj)
	{
		((UBTTask_DoAction*)Obj)->TokenTooked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked = { "TokenTooked", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBTTask_DoAction), &Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "Token" },
		{ "Comment", "//Check if the token is tooken if true give the token to the target actor after the action is ended\n" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ToolTip", "Check if the token is tooken if true give the token to the target actor after the action is ended" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_DoAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_DoAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_DoAction_Statics::ClassParams = {
		&UBTTask_DoAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_DoAction()
	{
		if (!Z_Registration_Info_UClass_UBTTask_DoAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_DoAction.OuterSingleton, Z_Construct_UClass_UBTTask_DoAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_DoAction.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTTask_DoAction>()
	{
		return UBTTask_DoAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_DoAction);
	UBTTask_DoAction::~UBTTask_DoAction() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_DoAction, UBTTask_DoAction::StaticClass, TEXT("UBTTask_DoAction"), &Z_Registration_Info_UClass_UBTTask_DoAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_DoAction), 4289854295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_3337685083(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS