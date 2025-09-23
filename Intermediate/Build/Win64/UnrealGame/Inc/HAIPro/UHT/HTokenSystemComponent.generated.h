// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HTokenSystemComponent.h"

#ifdef HAIPRO_HTokenSystemComponent_generated_h
#error "HTokenSystemComponent.generated.h already included, missing '#pragma once' in HTokenSystemComponent.h"
#endif
#define HAIPRO_HTokenSystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class E_GiveTokenFailReason : uint8;
enum class E_TokenManagmentFailReason : uint8;
enum class E_TookTokenFailReason : uint8;

// ********** Begin Class UHTokenSystemComponent ***************************************************
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetsCurrentTokenCount); \
	DECLARE_FUNCTION(execDecraeseMaxTokenCountToGivenActor); \
	DECLARE_FUNCTION(execDecraeseCurrentTokenToGivenActor); \
	DECLARE_FUNCTION(execIncreaseMaxTokenCountToGivenActor); \
	DECLARE_FUNCTION(execIncreaseCurrentTokenToGivenActor); \
	DECLARE_FUNCTION(execGiveTokenToGivenActor); \
	DECLARE_FUNCTION(execOnDestroyedGivenActor); \
	DECLARE_FUNCTION(execTookTokenFromGivenActor);


HAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister();

#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHTokenSystemComponent(); \
	friend struct Z_Construct_UClass_UHTokenSystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHTokenSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HAIPro"), Z_Construct_UClass_UHTokenSystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UHTokenSystemComponent)


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHTokenSystemComponent(UHTokenSystemComponent&&) = delete; \
	UHTokenSystemComponent(const UHTokenSystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTokenSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTokenSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHTokenSystemComponent) \
	NO_API virtual ~UHTokenSystemComponent();


#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_37_PROLOG
#define FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHTokenSystemComponent;

// ********** End Class UHTokenSystemComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h

// ********** Begin Enum E_TookTokenFailReason *****************************************************
#define FOREACH_ENUM_E_TOOKTOKENFAILREASON(op) \
	op(E_TookTokenFailReason::GivenActorNotValid) \
	op(E_TookTokenFailReason::GivenActorHasNoTokenSystemComponent) \
	op(E_TookTokenFailReason::TokenCountNotEnough) \
	op(E_TookTokenFailReason::TokenCountLessOrEqualZero) 

enum class E_TookTokenFailReason : uint8;
template<> struct TIsUEnumClass<E_TookTokenFailReason> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_TookTokenFailReason>();
// ********** End Enum E_TookTokenFailReason *******************************************************

// ********** Begin Enum E_GiveTokenFailReason *****************************************************
#define FOREACH_ENUM_E_GIVETOKENFAILREASON(op) \
	op(E_GiveTokenFailReason::GivenActorNotValid) \
	op(E_GiveTokenFailReason::GivenActorHasNoTokenSystemComponent) \
	op(E_GiveTokenFailReason::ThereIsNoTokenTakenFromGivenActor) \
	op(E_GiveTokenFailReason::TakenTokenCountLessOrEqualZero) \
	op(E_GiveTokenFailReason::TakenTokenCountNotEnoughForGiveItToBack) 

enum class E_GiveTokenFailReason : uint8;
template<> struct TIsUEnumClass<E_GiveTokenFailReason> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_GiveTokenFailReason>();
// ********** End Enum E_GiveTokenFailReason *******************************************************

// ********** Begin Enum E_TokenManagmentFailReason ************************************************
#define FOREACH_ENUM_E_TOKENMANAGMENTFAILREASON(op) \
	op(E_TokenManagmentFailReason::GivenActorNotValid) \
	op(E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent) 

enum class E_TokenManagmentFailReason : uint8;
template<> struct TIsUEnumClass<E_TokenManagmentFailReason> { enum { Value = true }; };
template<> HAIPRO_API UEnum* StaticEnum<E_TokenManagmentFailReason>();
// ********** End Enum E_TokenManagmentFailReason **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
