// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIBaseComponent.h"
#include "HPatrolSpline.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHAIBaseComponent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
HAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();
HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister();
HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent();
HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_DominantSense();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult();
HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature();
HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_F_PatrolData();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum E_DominantSense ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_DominantSense;
static UEnum* E_DominantSense_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_DominantSense.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_DominantSense.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_DominantSense, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_DominantSense"));
	}
	return Z_Registration_Info_UEnum_E_DominantSense.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_DominantSense>()
{
	return E_DominantSense_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_DominantSense_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "E_DominantSense::Damage" },
		{ "Hearing.DisplayName", "Hearing" },
		{ "Hearing.Name", "E_DominantSense::Hearing" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "Sight.DisplayName", "Sight" },
		{ "Sight.Name", "E_DominantSense::Sight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_DominantSense::Sight", (int64)E_DominantSense::Sight },
		{ "E_DominantSense::Hearing", (int64)E_DominantSense::Hearing },
		{ "E_DominantSense::Damage", (int64)E_DominantSense::Damage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_DominantSense",
	"E_DominantSense",
	Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_DominantSense()
{
	if (!Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton, Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton;
}
// ********** End Enum E_DominantSense *************************************************************

// ********** Begin Enum E_BehaviorTreeActionEndResult *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult;
static UEnum* E_BehaviorTreeActionEndResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_BehaviorTreeActionEndResult"));
	}
	return Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_BehaviorTreeActionEndResult>()
{
	return E_BehaviorTreeActionEndResult_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aborted.DisplayName", "Aborted" },
		{ "Aborted.Name", "E_BehaviorTreeActionEndResult::Aborted" },
		{ "BlueprintType", "true" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "E_BehaviorTreeActionEndResult::Failed" },
		{ "InProgress.DisplayName", "InProgress" },
		{ "InProgress.Name", "E_BehaviorTreeActionEndResult::InProgress" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "E_BehaviorTreeActionEndResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_BehaviorTreeActionEndResult::Success", (int64)E_BehaviorTreeActionEndResult::Success },
		{ "E_BehaviorTreeActionEndResult::Failed", (int64)E_BehaviorTreeActionEndResult::Failed },
		{ "E_BehaviorTreeActionEndResult::Aborted", (int64)E_BehaviorTreeActionEndResult::Aborted },
		{ "E_BehaviorTreeActionEndResult::InProgress", (int64)E_BehaviorTreeActionEndResult::InProgress },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_BehaviorTreeActionEndResult",
	"E_BehaviorTreeActionEndResult",
	Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult()
{
	if (!Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult.InnerSingleton, Z_Construct_UEnum_HAIPro_E_BehaviorTreeActionEndResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult.InnerSingleton;
}
// ********** End Enum E_BehaviorTreeActionEndResult ***********************************************

// ********** Begin Enum E_StateTreeActionEndResult ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_StateTreeActionEndResult;
static UEnum* E_StateTreeActionEndResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_StateTreeActionEndResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_StateTreeActionEndResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_StateTreeActionEndResult"));
	}
	return Z_Registration_Info_UEnum_E_StateTreeActionEndResult.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_StateTreeActionEndResult>()
{
	return E_StateTreeActionEndResult_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "E_StateTreeActionEndResult::Failed" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "E_StateTreeActionEndResult::Running" },
		{ "Stopped.DisplayName", "Stopped" },
		{ "Stopped.Name", "E_StateTreeActionEndResult::Stopped" },
		{ "Succeeded.DisplayName", "Succeeded" },
		{ "Succeeded.Name", "E_StateTreeActionEndResult::Succeeded" },
		{ "Unset.DisplayName", "Unset" },
		{ "Unset.Name", "E_StateTreeActionEndResult::Unset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_StateTreeActionEndResult::Running", (int64)E_StateTreeActionEndResult::Running },
		{ "E_StateTreeActionEndResult::Stopped", (int64)E_StateTreeActionEndResult::Stopped },
		{ "E_StateTreeActionEndResult::Succeeded", (int64)E_StateTreeActionEndResult::Succeeded },
		{ "E_StateTreeActionEndResult::Failed", (int64)E_StateTreeActionEndResult::Failed },
		{ "E_StateTreeActionEndResult::Unset", (int64)E_StateTreeActionEndResult::Unset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_StateTreeActionEndResult",
	"E_StateTreeActionEndResult",
	Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult()
{
	if (!Z_Registration_Info_UEnum_E_StateTreeActionEndResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_StateTreeActionEndResult.InnerSingleton, Z_Construct_UEnum_HAIPro_E_StateTreeActionEndResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_StateTreeActionEndResult.InnerSingleton;
}
// ********** End Enum E_StateTreeActionEndResult **************************************************

// ********** Begin Class UHAIBaseComponent Function GetCurrentPointIndexOfPatrolData **************
struct Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics
{
	struct HAIBaseComponent_eventGetCurrentPointIndexOfPatrolData_Parms
	{
		const AActor* RequestedBy;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|HPatrolSpline" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetCurrentPointIndexOfPatrolData_Parms, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedBy_MetaData), NewProp_RequestedBy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetCurrentPointIndexOfPatrolData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::NewProp_RequestedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetCurrentPointIndexOfPatrolData", Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::HAIBaseComponent_eventGetCurrentPointIndexOfPatrolData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::HAIBaseComponent_eventGetCurrentPointIndexOfPatrolData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetCurrentPointIndexOfPatrolData)
{
	P_GET_OBJECT(AActor,Z_Param_RequestedBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentPointIndexOfPatrolData(Z_Param_RequestedBy);
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetCurrentPointIndexOfPatrolData ****************

// ********** Begin Class UHAIBaseComponent Function GetDirectionOfPatrolData **********************
struct Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics
{
	struct HAIBaseComponent_eventGetDirectionOfPatrolData_Parms
	{
		const AActor* RequestedBy;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|HPatrolSpline" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetDirectionOfPatrolData_Parms, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedBy_MetaData), NewProp_RequestedBy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetDirectionOfPatrolData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::NewProp_RequestedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetDirectionOfPatrolData", Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::HAIBaseComponent_eventGetDirectionOfPatrolData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::HAIBaseComponent_eventGetDirectionOfPatrolData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetDirectionOfPatrolData)
{
	P_GET_OBJECT(AActor,Z_Param_RequestedBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDirectionOfPatrolData(Z_Param_RequestedBy);
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetDirectionOfPatrolData ************************

// ********** Begin Class UHAIBaseComponent Function GetHAIController ******************************
struct Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics
{
	struct HAIBaseComponent_eventGetHAIController_Parms
	{
		AHAIController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetHAIController_Parms, ReturnValue), Z_Construct_UClass_AHAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetHAIController", Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::HAIBaseComponent_eventGetHAIController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::HAIBaseComponent_eventGetHAIController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetHAIController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetHAIController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetHAIController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHAIController**)Z_Param__Result=P_THIS->GetHAIController();
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetHAIController ********************************

// ********** Begin Class UHAIBaseComponent Function GetPatrolData *********************************
struct Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics
{
	struct HAIBaseComponent_eventGetPatrolData_Parms
	{
		const AActor* RequestedBy;
		F_PatrolData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|HPatrolSpline" },
		{ "Comment", "/** Getting data from PatrolSpline class */" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Getting data from PatrolSpline class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPatrolData_Parms, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedBy_MetaData), NewProp_RequestedBy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPatrolData_Parms, ReturnValue), Z_Construct_UScriptStruct_F_PatrolData, METADATA_PARAMS(0, nullptr) }; // 2752930365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::NewProp_RequestedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetPatrolData", Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::HAIBaseComponent_eventGetPatrolData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::HAIBaseComponent_eventGetPatrolData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetPatrolData)
{
	P_GET_OBJECT(AActor,Z_Param_RequestedBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(F_PatrolData*)Z_Param__Result=P_THIS->GetPatrolData(Z_Param_RequestedBy);
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetPatrolData ***********************************

// ********** Begin Class UHAIBaseComponent Function GetPatrolPointCountOfPatrolData ***************
struct Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics
{
	struct HAIBaseComponent_eventGetPatrolPointCountOfPatrolData_Parms
	{
		const AActor* RequestedBy;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|HPatrolSpline" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPatrolPointCountOfPatrolData_Parms, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedBy_MetaData), NewProp_RequestedBy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPatrolPointCountOfPatrolData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::NewProp_RequestedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetPatrolPointCountOfPatrolData", Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::HAIBaseComponent_eventGetPatrolPointCountOfPatrolData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::HAIBaseComponent_eventGetPatrolPointCountOfPatrolData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetPatrolPointCountOfPatrolData)
{
	P_GET_OBJECT(AActor,Z_Param_RequestedBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPatrolPointCountOfPatrolData(Z_Param_RequestedBy);
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetPatrolPointCountOfPatrolData *****************

// ********** Begin Class UHAIBaseComponent Function GetPatrolSpline *******************************
struct Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics
{
	struct HAIBaseComponent_eventGetPatrolSpline_Parms
	{
		AHPatrolSpline* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|HPatrolSpline" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPatrolSpline_Parms, ReturnValue), Z_Construct_UClass_AHPatrolSpline_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetPatrolSpline", Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::HAIBaseComponent_eventGetPatrolSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::HAIBaseComponent_eventGetPatrolSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetPatrolSpline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHPatrolSpline**)Z_Param__Result=P_THIS->GetPatrolSpline();
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetPatrolSpline *********************************

// ********** Begin Class UHAIBaseComponent Function GetPreviousPointIndexOfPatrolData *************
struct Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics
{
	struct HAIBaseComponent_eventGetPreviousPointIndexOfPatrolData_Parms
	{
		const AActor* RequestedBy;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|HPatrolSpline" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPreviousPointIndexOfPatrolData_Parms, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedBy_MetaData), NewProp_RequestedBy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPreviousPointIndexOfPatrolData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::NewProp_RequestedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetPreviousPointIndexOfPatrolData", Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::HAIBaseComponent_eventGetPreviousPointIndexOfPatrolData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::HAIBaseComponent_eventGetPreviousPointIndexOfPatrolData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetPreviousPointIndexOfPatrolData)
{
	P_GET_OBJECT(AActor,Z_Param_RequestedBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPreviousPointIndexOfPatrolData(Z_Param_RequestedBy);
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetPreviousPointIndexOfPatrolData ***************

// ********** Begin Class UHAIBaseComponent Function GetSplineComponent ****************************
struct Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics
{
	struct HAIBaseComponent_eventGetSplineComponent_Parms
	{
		USplineComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|HPatrolSpline" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetSplineComponent", Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::HAIBaseComponent_eventGetSplineComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::HAIBaseComponent_eventGetSplineComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetSplineComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent();
	P_NATIVE_END;
}
// ********** End Class UHAIBaseComponent Function GetSplineComponent ******************************

// ********** Begin Class UHAIBaseComponent ********************************************************
void UHAIBaseComponent::StaticRegisterNativesUHAIBaseComponent()
{
	UClass* Class = UHAIBaseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentPointIndexOfPatrolData", &UHAIBaseComponent::execGetCurrentPointIndexOfPatrolData },
		{ "GetDirectionOfPatrolData", &UHAIBaseComponent::execGetDirectionOfPatrolData },
		{ "GetHAIController", &UHAIBaseComponent::execGetHAIController },
		{ "GetPatrolData", &UHAIBaseComponent::execGetPatrolData },
		{ "GetPatrolPointCountOfPatrolData", &UHAIBaseComponent::execGetPatrolPointCountOfPatrolData },
		{ "GetPatrolSpline", &UHAIBaseComponent::execGetPatrolSpline },
		{ "GetPreviousPointIndexOfPatrolData", &UHAIBaseComponent::execGetPreviousPointIndexOfPatrolData },
		{ "GetSplineComponent", &UHAIBaseComponent::execGetSplineComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHAIBaseComponent;
UClass* UHAIBaseComponent::GetPrivateStaticClass()
{
	using TClass = UHAIBaseComponent;
	if (!Z_Registration_Info_UClass_UHAIBaseComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HAIBaseComponent"),
			Z_Registration_Info_UClass_UHAIBaseComponent.InnerSingleton,
			StaticRegisterNativesUHAIBaseComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHAIBaseComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister()
{
	return UHAIBaseComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHAIBaseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HAIBaseComponent.h" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartBehaviorTreeOnBeginPlay_MetaData[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartStateTreeOnBeginPlay_MetaData[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpline_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSight_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "Comment", "/** Sight Config Settings */" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Sight Config Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "HAI|Perception|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "HAI|Perception|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightAge_MetaData[] = {
		{ "Category", "HAI|Perception|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectEnemies_MetaData[] = {
		{ "Category", "HAI|Perception|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectNeutrals_MetaData[] = {
		{ "Category", "HAI|Perception|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectFriendlies_MetaData[] = {
		{ "Category", "HAI|Perception|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHearing_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "Comment", "/** Hearing Config Settings */" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Hearing Config Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[] = {
		{ "Category", "HAI|Perception|Hearing" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingAge_MetaData[] = {
		{ "Category", "HAI|Perception|Hearing" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectHearingEnemies_MetaData[] = {
		{ "Category", "HAI|Perception|Hearing" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectHearingNeutrals_MetaData[] = {
		{ "Category", "HAI|Perception|Hearing" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectHearingFriendlies_MetaData[] = {
		{ "Category", "HAI|Perception|Hearing" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDamage_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "Comment", "/** Damage Config Settings */" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Damage Config Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAge_MetaData[] = {
		{ "Category", "HAI|Perception|Damage" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DominantSense_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerceptionConfigUpdated_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "Comment", "/** Percaption Events */" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Percaption Events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSenseActorForgotten_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static void NewProp_bStartBehaviorTreeOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartBehaviorTreeOnBeginPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTree;
	static void NewProp_bStartStateTreeOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartStateTreeOnBeginPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolSpline;
	static void NewProp_bEnableSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightAge;
	static void NewProp_bDetectEnemies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectEnemies;
	static void NewProp_bDetectNeutrals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectNeutrals;
	static void NewProp_bDetectFriendlies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectFriendlies;
	static void NewProp_bEnableHearing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHearing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingAge;
	static void NewProp_bDetectHearingEnemies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectHearingEnemies;
	static void NewProp_bDetectHearingNeutrals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectHearingNeutrals;
	static void NewProp_bDetectHearingFriendlies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectHearingFriendlies;
	static void NewProp_bEnableDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAge;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DominantSense_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DominantSense;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAIController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerceptionConfigUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenseActorForgotten;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetCurrentPointIndexOfPatrolData, "GetCurrentPointIndexOfPatrolData" }, // 2027778011
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetDirectionOfPatrolData, "GetDirectionOfPatrolData" }, // 3119841216
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetHAIController, "GetHAIController" }, // 3509558631
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetPatrolData, "GetPatrolData" }, // 2093872538
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetPatrolPointCountOfPatrolData, "GetPatrolPointCountOfPatrolData" }, // 1738212786
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetPatrolSpline, "GetPatrolSpline" }, // 1153918203
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetPreviousPointIndexOfPatrolData, "GetPreviousPointIndexOfPatrolData" }, // 4218595772
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetSplineComponent, "GetSplineComponent" }, // 2400793648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHAIBaseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartBehaviorTreeOnBeginPlay_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bStartBehaviorTreeOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartBehaviorTreeOnBeginPlay = { "bStartBehaviorTreeOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartBehaviorTreeOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartBehaviorTreeOnBeginPlay_MetaData), NewProp_bStartBehaviorTreeOnBeginPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTree_MetaData), NewProp_StateTree_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartStateTreeOnBeginPlay_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bStartStateTreeOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartStateTreeOnBeginPlay = { "bStartStateTreeOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartStateTreeOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartStateTreeOnBeginPlay_MetaData), NewProp_bStartStateTreeOnBeginPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline = { "PatrolSpline", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, PatrolSpline), Z_Construct_UClass_AHPatrolSpline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolSpline_MetaData), NewProp_PatrolSpline_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableSight_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bEnableSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableSight = { "bEnableSight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSight_MetaData), NewProp_bEnableSight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, LoseSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseSightRadius_MetaData), NewProp_LoseSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_SightAge = { "SightAge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, SightAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightAge_MetaData), NewProp_SightAge_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectEnemies_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bDetectEnemies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectEnemies = { "bDetectEnemies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectEnemies_MetaData), NewProp_bDetectEnemies_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectNeutrals_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bDetectNeutrals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectNeutrals = { "bDetectNeutrals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectNeutrals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectNeutrals_MetaData), NewProp_bDetectNeutrals_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectFriendlies_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bDetectFriendlies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectFriendlies = { "bDetectFriendlies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectFriendlies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectFriendlies_MetaData), NewProp_bDetectFriendlies_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableHearing_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bEnableHearing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableHearing = { "bEnableHearing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableHearing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHearing_MetaData), NewProp_bEnableHearing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, HearingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingRange_MetaData), NewProp_HearingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_HearingAge = { "HearingAge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, HearingAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingAge_MetaData), NewProp_HearingAge_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingEnemies_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bDetectHearingEnemies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingEnemies = { "bDetectHearingEnemies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectHearingEnemies_MetaData), NewProp_bDetectHearingEnemies_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingNeutrals_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bDetectHearingNeutrals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingNeutrals = { "bDetectHearingNeutrals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingNeutrals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectHearingNeutrals_MetaData), NewProp_bDetectHearingNeutrals_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingFriendlies_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bDetectHearingFriendlies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingFriendlies = { "bDetectHearingFriendlies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingFriendlies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectHearingFriendlies_MetaData), NewProp_bDetectHearingFriendlies_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableDamage_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->bEnableDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableDamage = { "bEnableDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDamage_MetaData), NewProp_bEnableDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DamageAge = { "DamageAge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, DamageAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAge_MetaData), NewProp_DamageAge_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense = { "DominantSense", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, DominantSense), Z_Construct_UEnum_HAIPro_E_DominantSense, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DominantSense_MetaData), NewProp_DominantSense_MetaData) }; // 1376275546
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OwnerAIController = { "OwnerAIController", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, OwnerAIController), Z_Construct_UClass_AHAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAIController_MetaData), NewProp_OwnerAIController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnPerceptionConfigUpdated = { "OnPerceptionConfigUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, OnPerceptionConfigUpdated), Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerceptionConfigUpdated_MetaData), NewProp_OnPerceptionConfigUpdated_MetaData) }; // 749463757
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnSenseActorForgotten = { "OnSenseActorForgotten", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, OnSenseActorForgotten), Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSenseActorForgotten_MetaData), NewProp_OnSenseActorForgotten_MetaData) }; // 3092217650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartBehaviorTreeOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_StateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bStartStateTreeOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_LoseSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_SightAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectNeutrals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectFriendlies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableHearing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_HearingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_HearingAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingNeutrals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bDetectHearingFriendlies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_bEnableDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DamageAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OwnerAIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnPerceptionConfigUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnSenseActorForgotten,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHAIBaseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHAIBaseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHAIBaseComponent()
{
	if (!Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton, Z_Construct_UClass_UHAIBaseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHAIBaseComponent);
UHAIBaseComponent::~UHAIBaseComponent() {}
// ********** End Class UHAIBaseComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h__Script_HAIPro_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_DominantSense_StaticEnum, TEXT("E_DominantSense"), &Z_Registration_Info_UEnum_E_DominantSense, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1376275546U) },
		{ E_BehaviorTreeActionEndResult_StaticEnum, TEXT("E_BehaviorTreeActionEndResult"), &Z_Registration_Info_UEnum_E_BehaviorTreeActionEndResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 993410039U) },
		{ E_StateTreeActionEndResult_StaticEnum, TEXT("E_StateTreeActionEndResult"), &Z_Registration_Info_UEnum_E_StateTreeActionEndResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3142599888U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHAIBaseComponent, UHAIBaseComponent::StaticClass, TEXT("UHAIBaseComponent"), &Z_Registration_Info_UClass_UHAIBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHAIBaseComponent), 3607972461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h__Script_HAIPro_3745567888(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h__Script_HAIPro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h__Script_HAIPro_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h__Script_HAIPro_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h__Script_HAIPro_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
