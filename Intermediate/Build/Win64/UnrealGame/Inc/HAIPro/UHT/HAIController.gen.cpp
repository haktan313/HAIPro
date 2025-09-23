// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HAIPRO_API UClass* Z_Construct_UClass_AHAIController();
HAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();
HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
HAIPRO_API UClass* Z_Construct_UClass_UHStateTreeAIComponent_NoRegister();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_SenseType();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_TreeAdjustments();
HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature();
HAIPRO_API UFunction* Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_F_SenseData();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum E_SenseType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SenseType;
static UEnum* E_SenseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SenseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SenseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_SenseType, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_SenseType"));
	}
	return Z_Registration_Info_UEnum_E_SenseType.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_SenseType>()
{
	return E_SenseType_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_SenseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** for Filtering the perception types */" },
		{ "DamageConfig.DisplayName", "DamageConfig" },
		{ "DamageConfig.Name", "E_SenseType::DamageConfig" },
		{ "HearingConfig.DisplayName", "HearingConfig" },
		{ "HearingConfig.Name", "E_SenseType::HearingConfig" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "NoneType.DisplayName", "NoneType" },
		{ "NoneType.Name", "E_SenseType::NoneType" },
		{ "SightConfig.DisplayName", "SightConfig" },
		{ "SightConfig.Name", "E_SenseType::SightConfig" },
		{ "ToolTip", "for Filtering the perception types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SenseType::NoneType", (int64)E_SenseType::NoneType },
		{ "E_SenseType::SightConfig", (int64)E_SenseType::SightConfig },
		{ "E_SenseType::HearingConfig", (int64)E_SenseType::HearingConfig },
		{ "E_SenseType::DamageConfig", (int64)E_SenseType::DamageConfig },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_SenseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_SenseType",
	"E_SenseType",
	Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_SenseType()
{
	if (!Z_Registration_Info_UEnum_E_SenseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SenseType.InnerSingleton, Z_Construct_UEnum_HAIPro_E_SenseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SenseType.InnerSingleton;
}
// ********** End Enum E_SenseType *****************************************************************

// ********** Begin Enum E_TreeAdjustments *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_TreeAdjustments;
static UEnum* E_TreeAdjustments_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_TreeAdjustments.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_TreeAdjustments.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_TreeAdjustments, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_TreeAdjustments"));
	}
	return Z_Registration_Info_UEnum_E_TreeAdjustments.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_TreeAdjustments>()
{
	return E_TreeAdjustments_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_TreeAdjustments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** for Adjusting the BehaviorTree and StateTree */" },
		{ "DestroyTree.DisplayName", "DestroyTree" },
		{ "DestroyTree.Name", "E_TreeAdjustments::DestroyTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "PauseTree.DisplayName", "PauseTree" },
		{ "PauseTree.Name", "E_TreeAdjustments::PauseTree" },
		{ "RestartTree.DisplayName", "RestartTree" },
		{ "RestartTree.Name", "E_TreeAdjustments::RestartTree" },
		{ "ResumeTree.DisplayName", "ResumeTree" },
		{ "ResumeTree.Name", "E_TreeAdjustments::ResumeTree" },
		{ "StartTree.DisplayName", "StartTree" },
		{ "StartTree.Name", "E_TreeAdjustments::StartTree" },
		{ "StopTree.DisplayName", "StopTree" },
		{ "StopTree.Name", "E_TreeAdjustments::StopTree" },
		{ "ToolTip", "for Adjusting the BehaviorTree and StateTree" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_TreeAdjustments::StartTree", (int64)E_TreeAdjustments::StartTree },
		{ "E_TreeAdjustments::PauseTree", (int64)E_TreeAdjustments::PauseTree },
		{ "E_TreeAdjustments::ResumeTree", (int64)E_TreeAdjustments::ResumeTree },
		{ "E_TreeAdjustments::StopTree", (int64)E_TreeAdjustments::StopTree },
		{ "E_TreeAdjustments::RestartTree", (int64)E_TreeAdjustments::RestartTree },
		{ "E_TreeAdjustments::DestroyTree", (int64)E_TreeAdjustments::DestroyTree },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_TreeAdjustments_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_TreeAdjustments",
	"E_TreeAdjustments",
	Z_Construct_UEnum_HAIPro_E_TreeAdjustments_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_TreeAdjustments_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_TreeAdjustments_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_TreeAdjustments_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_TreeAdjustments()
{
	if (!Z_Registration_Info_UEnum_E_TreeAdjustments.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_TreeAdjustments.InnerSingleton, Z_Construct_UEnum_HAIPro_E_TreeAdjustments_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_TreeAdjustments.InnerSingleton;
}
// ********** End Enum E_TreeAdjustments ***********************************************************

// ********** Begin ScriptStruct F_SenseData *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SenseData;
class UScriptStruct* F_SenseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SenseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SenseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SenseData, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("_SenseData"));
	}
	return Z_Registration_Info_UScriptStruct_F_SenseData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_F_SenseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct for storing sense data */" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ToolTip", "Struct for storing sense data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sensedActor_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_senseType_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stimulus_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_sensedActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_senseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_senseType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SenseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_sensedActor = { "sensedActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SenseData, sensedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sensedActor_MetaData), NewProp_sensedActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_senseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_senseType = { "senseType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SenseData, senseType), Z_Construct_UEnum_HAIPro_E_SenseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_senseType_MetaData), NewProp_senseType_MetaData) }; // 2072367586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_stimulus = { "stimulus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SenseData, stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stimulus_MetaData), NewProp_stimulus_MetaData) }; // 1267494880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SenseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_sensedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_senseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_senseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SenseData_Statics::NewProp_stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SenseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SenseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	&NewStructOps,
	"_SenseData",
	Z_Construct_UScriptStruct_F_SenseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SenseData_Statics::PropPointers),
	sizeof(F_SenseData),
	alignof(F_SenseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SenseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SenseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SenseData()
{
	if (!Z_Registration_Info_UScriptStruct_F_SenseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SenseData.InnerSingleton, Z_Construct_UScriptStruct_F_SenseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_F_SenseData.InnerSingleton;
}
// ********** End ScriptStruct F_SenseData *********************************************************

// ********** Begin Delegate FOnPeraptionConfigUpdated *********************************************
struct Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics
{
	struct _Script_HAIPro_eventOnPeraptionConfigUpdated_Parms
	{
		F_SenseData SenseData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for updating percaption data */" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ToolTip", "Delegate for updating percaption data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SenseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::NewProp_SenseData = { "SenseData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HAIPro_eventOnPeraptionConfigUpdated_Parms, SenseData), Z_Construct_UScriptStruct_F_SenseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseData_MetaData), NewProp_SenseData_MetaData) }; // 2826065209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::NewProp_SenseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HAIPro, nullptr, "OnPeraptionConfigUpdated__DelegateSignature", Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::_Script_HAIPro_eventOnPeraptionConfigUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::_Script_HAIPro_eventOnPeraptionConfigUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPeraptionConfigUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPeraptionConfigUpdated, F_SenseData const& SenseData)
{
	struct _Script_HAIPro_eventOnPeraptionConfigUpdated_Parms
	{
		F_SenseData SenseData;
	};
	_Script_HAIPro_eventOnPeraptionConfigUpdated_Parms Parms;
	Parms.SenseData=SenseData;
	OnPeraptionConfigUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPeraptionConfigUpdated ***********************************************

// ********** Begin Delegate FOnSenseActorForgotten ************************************************
struct Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics
{
	struct _Script_HAIPro_eventOnSenseActorForgotten_Parms
	{
		const AActor* ForgottenActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for when actor is forgotten */" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ToolTip", "Delegate for when actor is forgotten" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForgottenActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForgottenActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::NewProp_ForgottenActor = { "ForgottenActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HAIPro_eventOnSenseActorForgotten_Parms, ForgottenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForgottenActor_MetaData), NewProp_ForgottenActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::NewProp_ForgottenActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HAIPro, nullptr, "OnSenseActorForgotten__DelegateSignature", Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::_Script_HAIPro_eventOnSenseActorForgotten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::_Script_HAIPro_eventOnSenseActorForgotten_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSenseActorForgotten_DelegateWrapper(const FMulticastScriptDelegate& OnSenseActorForgotten, const AActor* ForgottenActor)
{
	struct _Script_HAIPro_eventOnSenseActorForgotten_Parms
	{
		const AActor* ForgottenActor;
	};
	_Script_HAIPro_eventOnSenseActorForgotten_Parms Parms;
	Parms.ForgottenActor=ForgottenActor;
	OnSenseActorForgotten.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSenseActorForgotten **************************************************

// ********** Begin Class AHAIController Function DestroyBehaviorTree ******************************
struct Z_Construct_UFunction_AHAIController_DestroyBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_DestroyBehaviorTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "DestroyBehaviorTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_DestroyBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_DestroyBehaviorTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_DestroyBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_DestroyBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execDestroyBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyBehaviorTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function DestroyBehaviorTree ********************************

// ********** Begin Class AHAIController Function DestroyStateTree *********************************
struct Z_Construct_UFunction_AHAIController_DestroyStateTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_DestroyStateTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "DestroyStateTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_DestroyStateTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_DestroyStateTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_DestroyStateTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_DestroyStateTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execDestroyStateTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyStateTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function DestroyStateTree ***********************************

// ********** Begin Class AHAIController Function GetTargetActor ***********************************
struct Z_Construct_UFunction_AHAIController_GetTargetActor_Statics
{
	struct HAIController_eventGetTargetActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "GetTargetActor", Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::HAIController_eventGetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::HAIController_eventGetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHAIController_GetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_GetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execGetTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function GetTargetActor *************************************

// ********** Begin Class AHAIController Function OnTargetActorDestroyed ***************************
struct Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics
{
	struct HAIController_eventOnTargetActorDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventOnTargetActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "OnTargetActorDestroyed", Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::HAIController_eventOnTargetActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::HAIController_eventOnTargetActorDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execOnTargetActorDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetActorDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class AHAIController Function OnTargetActorDestroyed *****************************

// ********** Begin Class AHAIController Function OnTargetPerceptionForgotten **********************
struct Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics
{
	struct HAIController_eventOnTargetPerceptionForgotten_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventOnTargetPerceptionForgotten_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "OnTargetPerceptionForgotten", Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::HAIController_eventOnTargetPerceptionForgotten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::HAIController_eventOnTargetPerceptionForgotten_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execOnTargetPerceptionForgotten)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetPerceptionForgotten(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class AHAIController Function OnTargetPerceptionForgotten ************************

// ********** Begin Class AHAIController Function OnTargetPerceptionInfoUpdated ********************
struct Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics
{
	struct HAIController_eventOnTargetPerceptionInfoUpdated_Parms
	{
		FActorPerceptionUpdateInfo UpdateInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::NewProp_UpdateInfo = { "UpdateInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventOnTargetPerceptionInfoUpdated_Parms, UpdateInfo), Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInfo_MetaData), NewProp_UpdateInfo_MetaData) }; // 549456841
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::NewProp_UpdateInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "OnTargetPerceptionInfoUpdated", Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::HAIController_eventOnTargetPerceptionInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::HAIController_eventOnTargetPerceptionInfoUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execOnTargetPerceptionInfoUpdated)
{
	P_GET_STRUCT_REF(FActorPerceptionUpdateInfo,Z_Param_Out_UpdateInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetPerceptionInfoUpdated(Z_Param_Out_UpdateInfo);
	P_NATIVE_END;
}
// ********** End Class AHAIController Function OnTargetPerceptionInfoUpdated **********************

// ********** Begin Class AHAIController Function PauseBehaviorTree ********************************
struct Z_Construct_UFunction_AHAIController_PauseBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_PauseBehaviorTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "PauseBehaviorTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_PauseBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_PauseBehaviorTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_PauseBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_PauseBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execPauseBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseBehaviorTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function PauseBehaviorTree **********************************

// ********** Begin Class AHAIController Function PauseStateTree ***********************************
struct Z_Construct_UFunction_AHAIController_PauseStateTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_PauseStateTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "PauseStateTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_PauseStateTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_PauseStateTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_PauseStateTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_PauseStateTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execPauseStateTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseStateTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function PauseStateTree *************************************

// ********** Begin Class AHAIController Function RestartBehaviorTree ******************************
struct Z_Construct_UFunction_AHAIController_RestartBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_RestartBehaviorTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "RestartBehaviorTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_RestartBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_RestartBehaviorTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_RestartBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_RestartBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execRestartBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartBehaviorTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function RestartBehaviorTree ********************************

// ********** Begin Class AHAIController Function RestartStateTree *********************************
struct Z_Construct_UFunction_AHAIController_RestartStateTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_RestartStateTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "RestartStateTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_RestartStateTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_RestartStateTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_RestartStateTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_RestartStateTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execRestartStateTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartStateTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function RestartStateTree ***********************************

// ********** Begin Class AHAIController Function ResumeBehaviorTree *******************************
struct Z_Construct_UFunction_AHAIController_ResumeBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_ResumeBehaviorTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "ResumeBehaviorTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_ResumeBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_ResumeBehaviorTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_ResumeBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_ResumeBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execResumeBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeBehaviorTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function ResumeBehaviorTree *********************************

// ********** Begin Class AHAIController Function ResumeStateTree **********************************
struct Z_Construct_UFunction_AHAIController_ResumeStateTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_ResumeStateTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "ResumeStateTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_ResumeStateTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_ResumeStateTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_ResumeStateTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_ResumeStateTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execResumeStateTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeStateTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function ResumeStateTree ************************************

// ********** Begin Class AHAIController Function SetNullTargetActor *******************************
struct Z_Construct_UFunction_AHAIController_SetNullTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_SetNullTargetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "SetNullTargetActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetNullTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_SetNullTargetActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_SetNullTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_SetNullTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execSetNullTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNullTargetActor();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function SetNullTargetActor *********************************

// ********** Begin Class AHAIController Function SetNullTargetLocation ****************************
struct Z_Construct_UFunction_AHAIController_SetNullTargetLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_SetNullTargetLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "SetNullTargetLocation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetNullTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_SetNullTargetLocation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_SetNullTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_SetNullTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execSetNullTargetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNullTargetLocation();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function SetNullTargetLocation ******************************

// ********** Begin Class AHAIController Function SetTargetActor ***********************************
struct Z_Construct_UFunction_AHAIController_SetTargetActor_Statics
{
	struct HAIController_eventSetTargetActor_Parms
	{
		AActor* newTarget;
		E_SenseType newSenseType;
		FAIStimulus newStimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "Comment", "/** Setting target values */" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ToolTip", "Setting target values" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_newSenseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_newSenseType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_newStimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newTarget = { "newTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventSetTargetActor_Parms, newTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newSenseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newSenseType = { "newSenseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventSetTargetActor_Parms, newSenseType), Z_Construct_UEnum_HAIPro_E_SenseType, METADATA_PARAMS(0, nullptr) }; // 2072367586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newStimulus = { "newStimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventSetTargetActor_Parms, newStimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1267494880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newSenseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newSenseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::NewProp_newStimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "SetTargetActor", Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::HAIController_eventSetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::HAIController_eventSetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHAIController_SetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_SetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execSetTargetActor)
{
	P_GET_OBJECT(AActor,Z_Param_newTarget);
	P_GET_ENUM(E_SenseType,Z_Param_newSenseType);
	P_GET_STRUCT(FAIStimulus,Z_Param_newStimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetActor(Z_Param_newTarget,E_SenseType(Z_Param_newSenseType),Z_Param_newStimulus);
	P_NATIVE_END;
}
// ********** End Class AHAIController Function SetTargetActor *************************************

// ********** Begin Class AHAIController Function SetTargetLocation ********************************
struct Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics
{
	struct HAIController_eventSetTargetLocation_Parms
	{
		FVector newLocation;
		E_SenseType newSenseType;
		FAIStimulus newStimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_newLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_newSenseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_newSenseType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_newStimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newLocation = { "newLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventSetTargetLocation_Parms, newLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newLocation_MetaData), NewProp_newLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newSenseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newSenseType = { "newSenseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventSetTargetLocation_Parms, newSenseType), Z_Construct_UEnum_HAIPro_E_SenseType, METADATA_PARAMS(0, nullptr) }; // 2072367586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newStimulus = { "newStimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventSetTargetLocation_Parms, newStimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1267494880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newSenseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newSenseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::NewProp_newStimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "SetTargetLocation", Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::HAIController_eventSetTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::HAIController_eventSetTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHAIController_SetTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_SetTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execSetTargetLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_newLocation);
	P_GET_ENUM(E_SenseType,Z_Param_newSenseType);
	P_GET_STRUCT(FAIStimulus,Z_Param_newStimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetLocation(Z_Param_Out_newLocation,E_SenseType(Z_Param_newSenseType),Z_Param_newStimulus);
	P_NATIVE_END;
}
// ********** End Class AHAIController Function SetTargetLocation **********************************

// ********** Begin Class AHAIController Function StartBehaviorTree ********************************
struct Z_Construct_UFunction_AHAIController_StartBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "Comment", "/** Adjusting the BehaviorTree and StateTree */" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ToolTip", "Adjusting the BehaviorTree and StateTree" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_StartBehaviorTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "StartBehaviorTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_StartBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_StartBehaviorTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_StartBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_StartBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execStartBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBehaviorTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function StartBehaviorTree **********************************

// ********** Begin Class AHAIController Function StartStateTree ***********************************
struct Z_Construct_UFunction_AHAIController_StartStateTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_StartStateTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "StartStateTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_StartStateTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_StartStateTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_StartStateTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_StartStateTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execStartStateTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartStateTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function StartStateTree *************************************

// ********** Begin Class AHAIController Function StopBehaviorTree *********************************
struct Z_Construct_UFunction_AHAIController_StopBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|BehaviorTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_StopBehaviorTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "StopBehaviorTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_StopBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_StopBehaviorTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_StopBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_StopBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execStopBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBehaviorTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function StopBehaviorTree ***********************************

// ********** Begin Class AHAIController Function StopStateTree ************************************
struct Z_Construct_UFunction_AHAIController_StopStateTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI|StateTree" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_StopStateTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "StopStateTree", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_StopStateTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_StopStateTree_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHAIController_StopStateTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_StopStateTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execStopStateTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopStateTree();
	P_NATIVE_END;
}
// ********** End Class AHAIController Function StopStateTree **************************************

// ********** Begin Class AHAIController ***********************************************************
void AHAIController::StaticRegisterNativesAHAIController()
{
	UClass* Class = AHAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyBehaviorTree", &AHAIController::execDestroyBehaviorTree },
		{ "DestroyStateTree", &AHAIController::execDestroyStateTree },
		{ "GetTargetActor", &AHAIController::execGetTargetActor },
		{ "OnTargetActorDestroyed", &AHAIController::execOnTargetActorDestroyed },
		{ "OnTargetPerceptionForgotten", &AHAIController::execOnTargetPerceptionForgotten },
		{ "OnTargetPerceptionInfoUpdated", &AHAIController::execOnTargetPerceptionInfoUpdated },
		{ "PauseBehaviorTree", &AHAIController::execPauseBehaviorTree },
		{ "PauseStateTree", &AHAIController::execPauseStateTree },
		{ "RestartBehaviorTree", &AHAIController::execRestartBehaviorTree },
		{ "RestartStateTree", &AHAIController::execRestartStateTree },
		{ "ResumeBehaviorTree", &AHAIController::execResumeBehaviorTree },
		{ "ResumeStateTree", &AHAIController::execResumeStateTree },
		{ "SetNullTargetActor", &AHAIController::execSetNullTargetActor },
		{ "SetNullTargetLocation", &AHAIController::execSetNullTargetLocation },
		{ "SetTargetActor", &AHAIController::execSetTargetActor },
		{ "SetTargetLocation", &AHAIController::execSetTargetLocation },
		{ "StartBehaviorTree", &AHAIController::execStartBehaviorTree },
		{ "StartStateTree", &AHAIController::execStartStateTree },
		{ "StopBehaviorTree", &AHAIController::execStopBehaviorTree },
		{ "StopStateTree", &AHAIController::execStopStateTree },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHAIController;
UClass* AHAIController::GetPrivateStaticClass()
{
	using TClass = AHAIController;
	if (!Z_Registration_Info_UClass_AHAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HAIController"),
			Z_Registration_Info_UClass_AHAIController.InnerSingleton,
			StaticRegisterNativesAHAIController,
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
	return Z_Registration_Info_UClass_AHAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AHAIController_NoRegister()
{
	return AHAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HAIController.h" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrowdFollowing_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeAIComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerceptionConfigUpdated_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSenseActorForgotten_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HAIBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Comment", "/** Target Values you can set and you can get wherever you want like state tree */" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ToolTip", "Target Values you can set and you can get wherever you want like state tree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStimulus_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSenseType_MetaData[] = {
		{ "Category", "HAI|Perception" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdFollowing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTreeAIComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerceptionConfigUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenseActorForgotten;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HAIBaseComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HearingConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageConfig;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStimulus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSenseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSenseType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHAIController_DestroyBehaviorTree, "DestroyBehaviorTree" }, // 3137732011
		{ &Z_Construct_UFunction_AHAIController_DestroyStateTree, "DestroyStateTree" }, // 4262030952
		{ &Z_Construct_UFunction_AHAIController_GetTargetActor, "GetTargetActor" }, // 2441613329
		{ &Z_Construct_UFunction_AHAIController_OnTargetActorDestroyed, "OnTargetActorDestroyed" }, // 2809129800
		{ &Z_Construct_UFunction_AHAIController_OnTargetPerceptionForgotten, "OnTargetPerceptionForgotten" }, // 2978316001
		{ &Z_Construct_UFunction_AHAIController_OnTargetPerceptionInfoUpdated, "OnTargetPerceptionInfoUpdated" }, // 1913716618
		{ &Z_Construct_UFunction_AHAIController_PauseBehaviorTree, "PauseBehaviorTree" }, // 3368363382
		{ &Z_Construct_UFunction_AHAIController_PauseStateTree, "PauseStateTree" }, // 2403721598
		{ &Z_Construct_UFunction_AHAIController_RestartBehaviorTree, "RestartBehaviorTree" }, // 2625865027
		{ &Z_Construct_UFunction_AHAIController_RestartStateTree, "RestartStateTree" }, // 1255307471
		{ &Z_Construct_UFunction_AHAIController_ResumeBehaviorTree, "ResumeBehaviorTree" }, // 1344578233
		{ &Z_Construct_UFunction_AHAIController_ResumeStateTree, "ResumeStateTree" }, // 461924041
		{ &Z_Construct_UFunction_AHAIController_SetNullTargetActor, "SetNullTargetActor" }, // 1349049409
		{ &Z_Construct_UFunction_AHAIController_SetNullTargetLocation, "SetNullTargetLocation" }, // 1700056615
		{ &Z_Construct_UFunction_AHAIController_SetTargetActor, "SetTargetActor" }, // 16125146
		{ &Z_Construct_UFunction_AHAIController_SetTargetLocation, "SetTargetLocation" }, // 4120552981
		{ &Z_Construct_UFunction_AHAIController_StartBehaviorTree, "StartBehaviorTree" }, // 4113392633
		{ &Z_Construct_UFunction_AHAIController_StartStateTree, "StartStateTree" }, // 2245556244
		{ &Z_Construct_UFunction_AHAIController_StopBehaviorTree, "StopBehaviorTree" }, // 437710361
		{ &Z_Construct_UFunction_AHAIController_StopStateTree, "StopStateTree" }, // 2484879825
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowing = { "CrowdFollowing", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, CrowdFollowing), Z_Construct_UClass_UCrowdFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrowdFollowing_MetaData), NewProp_CrowdFollowing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComponent_MetaData), NewProp_BehaviorTreeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_StateTreeAIComponent = { "StateTreeAIComponent", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, StateTreeAIComponent), Z_Construct_UClass_UHStateTreeAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTreeAIComponent_MetaData), NewProp_StateTreeAIComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_OnPerceptionConfigUpdated = { "OnPerceptionConfigUpdated", nullptr, (EPropertyFlags)0x0020180010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, OnPerceptionConfigUpdated), Z_Construct_UDelegateFunction_HAIPro_OnPeraptionConfigUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerceptionConfigUpdated_MetaData), NewProp_OnPerceptionConfigUpdated_MetaData) }; // 749463757
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_OnSenseActorForgotten = { "OnSenseActorForgotten", nullptr, (EPropertyFlags)0x0020180010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, OnSenseActorForgotten), Z_Construct_UDelegateFunction_HAIPro_OnSenseActorForgotten__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSenseActorForgotten_MetaData), NewProp_OnSenseActorForgotten_MetaData) }; // 3092217650
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent = { "HAIBaseComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, HAIBaseComponent), Z_Construct_UClass_UHAIBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HAIBaseComponent_MetaData), NewProp_HAIBaseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig = { "HearingConfig", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, HearingConfig), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingConfig_MetaData), NewProp_HearingConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig = { "DamageConfig", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, DamageConfig), Z_Construct_UClass_UAISenseConfig_Damage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageConfig_MetaData), NewProp_DamageConfig_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_TargetStimulus = { "TargetStimulus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, TargetStimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStimulus_MetaData), NewProp_TargetStimulus_MetaData) }; // 1267494880
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_TargetSenseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_TargetSenseType = { "TargetSenseType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, TargetSenseType), Z_Construct_UEnum_HAIPro_E_SenseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSenseType_MetaData), NewProp_TargetSenseType_MetaData) }; // 2072367586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_BehaviorTreeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_StateTreeAIComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_OnPerceptionConfigUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_OnSenseActorForgotten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_TargetStimulus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_TargetSenseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_TargetSenseType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::DependentSingletons) < 16);
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHAIController()
{
	if (!Z_Registration_Info_UClass_AHAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHAIController.OuterSingleton, Z_Construct_UClass_AHAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHAIController);
AHAIController::~AHAIController() {}
// ********** End Class AHAIController *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_SenseType_StaticEnum, TEXT("E_SenseType"), &Z_Registration_Info_UEnum_E_SenseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2072367586U) },
		{ E_TreeAdjustments_StaticEnum, TEXT("E_TreeAdjustments"), &Z_Registration_Info_UEnum_E_TreeAdjustments, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1676308786U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ F_SenseData::StaticStruct, Z_Construct_UScriptStruct_F_SenseData_Statics::NewStructOps, TEXT("_SenseData"), &Z_Registration_Info_UScriptStruct_F_SenseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SenseData), 2826065209U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHAIController, AHAIController::StaticClass, TEXT("AHAIController"), &Z_Registration_Info_UClass_AHAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHAIController), 3349157148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_2412727392(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h__Script_HAIPro_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
