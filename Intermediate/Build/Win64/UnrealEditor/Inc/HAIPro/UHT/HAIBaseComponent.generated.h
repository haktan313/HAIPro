// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HAIBaseComponent.h"

#ifdef HAIPRO_HAIBaseComponent_generated_h
#error "HAIBaseComponent.generated.h already included, missing '#pragma once' in HAIBaseComponent.h"
#endif
#define HAIPRO_HAIBaseComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AHAIController;
class AHPatrolSpline;
class USplineComponent;
enum class E_BehaviorTreeActionEndResult : uint8;
struct F_PatrolData;
struct FGameplayTag;

// ********** Begin Delegate FOnActionEndBehaviorTree **********************************************
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_39_DELEGATE \
HAIPRO_API void FOnActionEndBehaviorTree_DelegateWrapper(const FMulticastScriptDelegate& OnActionEndBehaviorTree, FGameplayTag ActionTag, E_BehaviorTreeActionEndResult Result);


// ********** End Delegate FOnActionEndBehaviorTree ************************************************

// ********** Begin Class UHAIBaseComponent ********************************************************
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHAIController); \
	DECLARE_FUNCTION(execGetPatrolPointCountOfPatrolData); \
	DECLARE_FUNCTION(execGetDirectionOfPatrolData); \
	DECLARE_FUNCTION(execGetPreviousPointIndexOfPatrolData); \
	DECLARE_FUNCTION(execGetCurrentPointIndexOfPatrolData); \
	DECLARE_FUNCTION(execGetPatrolSpline); \
	DECLARE_FUNCTION(execGetSplineComponent); \
	DECLARE_FUNCTION(execGetPatrolData);


HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();

#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHAIBaseComponent(); \
	friend struct Z_Construct_UClass_UHAIBaseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHAIBaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HAIPro"), Z_Construct_UClass_UHAIBaseComponent_NoRegister) \
	DECLARE_SERIALIZER(UHAIBaseComponent)


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHAIBaseComponent(UHAIBaseComponent&&) = delete; \
	UHAIBaseComponent(const UHAIBaseComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHAIBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHAIBaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHAIBaseComponent) \
	NO_API virtual ~UHAIBaseComponent();


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_44_PROLOG
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHAIBaseComponent;

// ********** End Class UHAIBaseComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h

// ********** Begin Enum E_DominantSense ***********************************************************
#define FOREACH_ENUM_E_DOMINANTSENSE(op) \
	op(E_DominantSense::Sight) \
	op(E_DominantSense::Hearing) \
	op(E_DominantSense::Damage) 

enum class E_DominantSense : uint8;
template<> struct TIsUEnumClass<E_DominantSense> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_DominantSense>();
// ********** End Enum E_DominantSense *************************************************************

// ********** Begin Enum E_BehaviorTreeActionEndResult *********************************************
#define FOREACH_ENUM_E_BEHAVIORTREEACTIONENDRESULT(op) \
	op(E_BehaviorTreeActionEndResult::Success) \
	op(E_BehaviorTreeActionEndResult::Failed) \
	op(E_BehaviorTreeActionEndResult::Aborted) \
	op(E_BehaviorTreeActionEndResult::InProgress) 

enum class E_BehaviorTreeActionEndResult : uint8;
template<> struct TIsUEnumClass<E_BehaviorTreeActionEndResult> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_BehaviorTreeActionEndResult>();
// ********** End Enum E_BehaviorTreeActionEndResult ***********************************************

// ********** Begin Enum E_StateTreeActionEndResult ************************************************
#define FOREACH_ENUM_E_STATETREEACTIONENDRESULT(op) \
	op(E_StateTreeActionEndResult::Running) \
	op(E_StateTreeActionEndResult::Stopped) \
	op(E_StateTreeActionEndResult::Succeeded) \
	op(E_StateTreeActionEndResult::Failed) \
	op(E_StateTreeActionEndResult::Unset) 

enum class E_StateTreeActionEndResult : uint8;
template<> struct TIsUEnumClass<E_StateTreeActionEndResult> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_StateTreeActionEndResult>();
// ********** End Enum E_StateTreeActionEndResult **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
