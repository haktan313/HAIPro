// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HAIController.h"

#ifdef HAIPRO_HAIController_generated_h
#error "HAIController.generated.h already included, missing '#pragma once' in HAIController.h"
#endif
#define HAIPRO_HAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class E_SenseType : uint8;
struct F_SenseData;
struct FActorPerceptionUpdateInfo;
struct FAIStimulus;

// ********** Begin ScriptStruct F_SenseData *******************************************************
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_F_SenseData_Statics; \
	HAIPRO_API static class UScriptStruct* StaticStruct();


struct F_SenseData;
// ********** End ScriptStruct F_SenseData *********************************************************

// ********** Begin Delegate FOnPeraptionConfigUpdated *********************************************
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_59_DELEGATE \
HAIPRO_API void FOnPeraptionConfigUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPeraptionConfigUpdated, F_SenseData const& SenseData);


// ********** End Delegate FOnPeraptionConfigUpdated ***********************************************

// ********** Begin Delegate FOnSenseActorForgotten ************************************************
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_61_DELEGATE \
HAIPRO_API void FOnSenseActorForgotten_DelegateWrapper(const FMulticastScriptDelegate& OnSenseActorForgotten, const AActor* ForgottenActor);


// ********** End Delegate FOnSenseActorForgotten **************************************************

// ********** Begin Class AHAIController ***********************************************************
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyStateTree); \
	DECLARE_FUNCTION(execRestartStateTree); \
	DECLARE_FUNCTION(execResumeStateTree); \
	DECLARE_FUNCTION(execPauseStateTree); \
	DECLARE_FUNCTION(execStopStateTree); \
	DECLARE_FUNCTION(execStartStateTree); \
	DECLARE_FUNCTION(execDestroyBehaviorTree); \
	DECLARE_FUNCTION(execRestartBehaviorTree); \
	DECLARE_FUNCTION(execResumeBehaviorTree); \
	DECLARE_FUNCTION(execPauseBehaviorTree); \
	DECLARE_FUNCTION(execStopBehaviorTree); \
	DECLARE_FUNCTION(execStartBehaviorTree); \
	DECLARE_FUNCTION(execSetNullTargetLocation); \
	DECLARE_FUNCTION(execSetNullTargetActor); \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execOnTargetActorDestroyed); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execOnTargetPerceptionInfoUpdated); \
	DECLARE_FUNCTION(execOnTargetPerceptionForgotten);


HAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();

#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHAIController(); \
	friend struct Z_Construct_UClass_AHAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AHAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HAIPro"), Z_Construct_UClass_AHAIController_NoRegister) \
	DECLARE_SERIALIZER(AHAIController)


#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHAIController(AHAIController&&) = delete; \
	AHAIController(const AHAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHAIController) \
	NO_API virtual ~AHAIController();


#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_63_PROLOG
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_66_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHAIController;

// ********** End Class AHAIController *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIController_h

// ********** Begin Enum E_SenseType ***************************************************************
#define FOREACH_ENUM_E_SENSETYPE(op) \
	op(E_SenseType::NoneType) \
	op(E_SenseType::SightConfig) \
	op(E_SenseType::HearingConfig) \
	op(E_SenseType::DamageConfig) 

enum class E_SenseType : uint8;
template<> struct TIsUEnumClass<E_SenseType> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_SenseType>();
// ********** End Enum E_SenseType *****************************************************************

// ********** Begin Enum E_TreeAdjustments *********************************************************
#define FOREACH_ENUM_E_TREEADJUSTMENTS(op) \
	op(E_TreeAdjustments::StartTree) \
	op(E_TreeAdjustments::PauseTree) \
	op(E_TreeAdjustments::ResumeTree) \
	op(E_TreeAdjustments::StopTree) \
	op(E_TreeAdjustments::RestartTree) \
	op(E_TreeAdjustments::DestroyTree) 

enum class E_TreeAdjustments : uint8;
template<> struct TIsUEnumClass<E_TreeAdjustments> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_TreeAdjustments>();
// ********** End Enum E_TreeAdjustments ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
