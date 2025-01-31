// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HAIBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class E_DoActionResult : uint8;
enum class E_MovementState : uint8;
enum class E_OnPossessState : uint8;
#ifdef HAIPRO_HAIBaseComponent_generated_h
#error "HAIBaseComponent.generated.h already included, missing '#pragma once' in HAIBaseComponent.h"
#endif
#define HAIPRO_HAIBaseComponent_generated_h

#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_10_DELEGATE \
HAIPRO_API void FOnDoActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDoActionDelegate, int32 ActionID);


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_11_DELEGATE \
HAIPRO_API void FOnActionEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActionEndDelegate, E_DoActionResult DoActionResult);


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_SPARSE_DATA
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPossessState); \
	DECLARE_FUNCTION(execSetStateActive); \
	DECLARE_FUNCTION(execSetStateInvestigate); \
	DECLARE_FUNCTION(execSetStatePassive); \
	DECLARE_FUNCTION(execStopBehaviorTree); \
	DECLARE_FUNCTION(execDead); \
	DECLARE_FUNCTION(execSetMovementStateFly); \
	DECLARE_FUNCTION(execSetMovementStateWalk);


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPossessState); \
	DECLARE_FUNCTION(execSetStateActive); \
	DECLARE_FUNCTION(execSetStateInvestigate); \
	DECLARE_FUNCTION(execSetStatePassive); \
	DECLARE_FUNCTION(execStopBehaviorTree); \
	DECLARE_FUNCTION(execDead); \
	DECLARE_FUNCTION(execSetMovementStateFly); \
	DECLARE_FUNCTION(execSetMovementStateWalk);


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_ACCESSORS
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHAIBaseComponent(); \
	friend struct Z_Construct_UClass_UHAIBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UHAIBaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HAIPro"), NO_API) \
	DECLARE_SERIALIZER(UHAIBaseComponent)


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHAIBaseComponent(); \
	friend struct Z_Construct_UClass_UHAIBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UHAIBaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HAIPro"), NO_API) \
	DECLARE_SERIALIZER(UHAIBaseComponent)


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHAIBaseComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHAIBaseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHAIBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHAIBaseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHAIBaseComponent(UHAIBaseComponent&&); \
	NO_API UHAIBaseComponent(const UHAIBaseComponent&); \
public: \
	NO_API virtual ~UHAIBaseComponent();


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHAIBaseComponent(UHAIBaseComponent&&); \
	NO_API UHAIBaseComponent(const UHAIBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHAIBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHAIBaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHAIBaseComponent) \
	NO_API virtual ~UHAIBaseComponent();


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_13_PROLOG
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_SPARSE_DATA \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_RPC_WRAPPERS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_ACCESSORS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_INCLASS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_SPARSE_DATA \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_ACCESSORS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIPRO_API UClass* StaticClass<class UHAIBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HAIBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
