// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HPatrolSpline.h"

#ifdef HAIPRO_HPatrolSpline_generated_h
#error "HPatrolSpline.generated.h already included, missing '#pragma once' in HPatrolSpline.h"
#endif
#define HAIPRO_HPatrolSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin ScriptStruct F_PatrolData ******************************************************
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_F_PatrolData_Statics; \
	HAIPRO_API static class UScriptStruct* StaticStruct();


struct F_PatrolData;
// ********** End ScriptStruct F_PatrolData ********************************************************

// ********** Begin Class AHPatrolSpline ***********************************************************
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeDirection); \
	DECLARE_FUNCTION(execMoveNextPatrolPoint); \
	DECLARE_FUNCTION(execPatrolDataOwnerDestroyed);


HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister();

#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHPatrolSpline(); \
	friend struct Z_Construct_UClass_AHPatrolSpline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister(); \
public: \
	DECLARE_CLASS2(AHPatrolSpline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HAIPro"), Z_Construct_UClass_AHPatrolSpline_NoRegister) \
	DECLARE_SERIALIZER(AHPatrolSpline)


#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHPatrolSpline(AHPatrolSpline&&) = delete; \
	AHPatrolSpline(const AHPatrolSpline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHPatrolSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHPatrolSpline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHPatrolSpline) \
	NO_API virtual ~AHPatrolSpline();


#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_27_PROLOG
#define FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHPatrolSpline;

// ********** End Class AHPatrolSpline *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
