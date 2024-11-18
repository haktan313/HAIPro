// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/HAIBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHAIBaseComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent();
	HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_MovementState();
	HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature();
	HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics
	{
		struct _Script_HAIPro_eventOnDoActionDelegate_Parms
		{
			int32 ActionID;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ActionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::NewProp_ActionID = { "ActionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HAIPro_eventOnDoActionDelegate_Parms, ActionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::NewProp_ActionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HAIPro, nullptr, "OnDoActionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::_Script_HAIPro_eventOnDoActionDelegate_Parms), Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDoActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDoActionDelegate, int32 ActionID)
{
	struct _Script_HAIPro_eventOnDoActionDelegate_Parms
	{
		int32 ActionID;
	};
	_Script_HAIPro_eventOnDoActionDelegate_Parms Parms;
	Parms.ActionID=ActionID;
	OnDoActionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics
	{
		struct _Script_HAIPro_eventOnActionEndDelegate_Parms
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
	void Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_HAIPro_eventOnActionEndDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_HAIPro_eventOnActionEndDelegate_Parms), &Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegate for starting an action\n" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Delegate for starting an action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HAIPro, nullptr, "OnActionEndDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::_Script_HAIPro_eventOnActionEndDelegate_Parms), Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActionEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActionEndDelegate, bool bSuccess)
{
	struct _Script_HAIPro_eventOnActionEndDelegate_Parms
	{
		bool bSuccess;
	};
	_Script_HAIPro_eventOnActionEndDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnActionEndDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHAIBaseComponent::execStopBehaviorTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopBehaviorTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHAIBaseComponent::execDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHAIBaseComponent::execSetMovementStateFly)
	{
		P_GET_ENUM(E_MovementState,Z_Param_movementState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementStateFly(E_MovementState(Z_Param_movementState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHAIBaseComponent::execSetMovementStateWalk)
	{
		P_GET_ENUM(E_MovementState,Z_Param_movementState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementStateWalk(E_MovementState(Z_Param_movementState));
		P_NATIVE_END;
	}
	void UHAIBaseComponent::StaticRegisterNativesUHAIBaseComponent()
	{
		UClass* Class = UHAIBaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dead", &UHAIBaseComponent::execDead },
			{ "SetMovementStateFly", &UHAIBaseComponent::execSetMovementStateFly },
			{ "SetMovementStateWalk", &UHAIBaseComponent::execSetMovementStateWalk },
			{ "StopBehaviorTree", &UHAIBaseComponent::execStopBehaviorTree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "Dead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHAIBaseComponent_Dead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics
	{
		struct HAIBaseComponent_eventSetMovementStateFly_Parms
		{
			E_MovementState movementState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_movementState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_movementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState = { "movementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HAIBaseComponent_eventSetMovementStateFly_Parms, movementState), Z_Construct_UEnum_HAIPro_E_MovementState, METADATA_PARAMS(nullptr, 0) }; // 3100350066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "SetMovementStateFly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::HAIBaseComponent_eventSetMovementStateFly_Parms), Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics
	{
		struct HAIBaseComponent_eventSetMovementStateWalk_Parms
		{
			E_MovementState movementState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_movementState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_movementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState = { "movementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HAIBaseComponent_eventSetMovementStateWalk_Parms, movementState), Z_Construct_UEnum_HAIPro_E_MovementState, METADATA_PARAMS(nullptr, 0) }; // 3100350066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "SetMovementStateWalk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::HAIBaseComponent_eventSetMovementStateWalk_Parms), Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics
	{
		struct HAIBaseComponent_eventStopBehaviorTree_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HAIBaseComponent_eventStopBehaviorTree_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HAIBaseComponent_eventStopBehaviorTree_Parms), &Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "Comment", "//The function can call if npc is dead\n" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "The function can call if npc is dead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "StopBehaviorTree", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::HAIBaseComponent_eventStopBehaviorTree_Parms), Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHAIBaseComponent);
	UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister()
	{
		return UHAIBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHAIBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UECodeGen_Private::FNamePropertyParams NewProp_targetsTag_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetsTag_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_targetsTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalFlySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalFlySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastFlySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FastFlySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDoAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHAIBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHAIBaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHAIBaseComponent_Dead, "Dead" }, // 1120632364
		{ &Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly, "SetMovementStateFly" }, // 4188923767
		{ &Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk, "SetMovementStateWalk" }, // 1825607219
		{ &Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree, "StopBehaviorTree" }, // 1531876584
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//Delegate for ending an action\n" },
		{ "IncludePath", "HAIBaseComponent.h" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Delegate for ending an action" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag_Inner = { "targetsTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag_MetaData[] = {
		{ "Category", "HAI" },
		{ "Comment", "//The behavior tree of the AI character\n" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "The behavior tree of the AI character" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag = { "targetsTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, targetsTag), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "Comment", "//The tag of the target actor of the AI character\n" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "The tag of the target actor of the AI character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_NormalFlySpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_NormalFlySpeed = { "NormalFlySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, NormalFlySpeed), METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_NormalFlySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_NormalFlySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_FastFlySpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_FastFlySpeed = { "FastFlySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, FastFlySpeed), METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_FastFlySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_FastFlySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline = { "PatrolSpline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, PatrolSpline), Z_Construct_UClass_AHPatrolSpline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnDoAction_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnDoAction = { "OnDoAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, OnDoAction), Z_Construct_UDelegateFunction_HAIPro_OnDoActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnDoAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnDoAction_MetaData)) }; // 1293617686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnActionEnd_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnActionEnd = { "OnActionEnd", nullptr, (EPropertyFlags)0x0010100000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHAIBaseComponent, OnActionEnd), Z_Construct_UDelegateFunction_HAIPro_OnActionEndDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnActionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnActionEnd_MetaData)) }; // 3680009195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_RunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_NormalFlySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_FastFlySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnDoAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnActionEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHAIBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHAIBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHAIBaseComponent_Statics::ClassParams = {
		&UHAIBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHAIBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHAIBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton, Z_Construct_UClass_UHAIBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UHAIBaseComponent>()
	{
		return UHAIBaseComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHAIBaseComponent);
	UHAIBaseComponent::~UHAIBaseComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHAIBaseComponent, UHAIBaseComponent::StaticClass, TEXT("UHAIBaseComponent"), &Z_Registration_Info_UClass_UHAIBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHAIBaseComponent), 3267963660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_1304438710(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
