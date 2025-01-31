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
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_DoAction();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_DoAction_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_DoActionResult();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	DEFINE_FUNCTION(UBTTask_DoAction::execActionEnd)
	{
		P_GET_ENUM(E_DoActionResult,Z_Param_DoActionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActionEnd(E_DoActionResult(Z_Param_DoActionResult));
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
			E_DoActionResult DoActionResult;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DoActionResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DoActionResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult = { "DoActionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_DoAction_eventActionEnd_Parms, DoActionResult), Z_Construct_UEnum_HAIPro_E_DoActionResult, METADATA_PARAMS(nullptr, 0) }; // 357980464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult,
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HAIBaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HAIBaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
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
		{ &Z_Construct_UFunction_UBTTask_DoAction_ActionEnd, "ActionEnd" }, // 2339776448
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
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID = { "ActionID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, ActionID), METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey = { "CanDoActionBoolKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, CanDoActionBoolKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_MyOwnerComp_MetaData[] = {
		{ "Comment", "//Blackboard key for checking if the AI character can do the action\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ToolTip", "Blackboard key for checking if the AI character can do the action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_MyOwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_MyOwnerComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_HAIBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_HAIBaseComponent = { "HAIBaseComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, HAIBaseComponent), Z_Construct_UClass_UHAIBaseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_HAIBaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_HAIBaseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_MetaData[] = {
		{ "Category", "Token" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
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
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_DoAction, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_MyOwnerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_HAIBaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_Pawn,
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
		0x009000A0u,
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
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_DoAction, UBTTask_DoAction::StaticClass, TEXT("UBTTask_DoAction"), &Z_Registration_Info_UClass_UBTTask_DoAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_DoAction), 2231906524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_822978413(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
