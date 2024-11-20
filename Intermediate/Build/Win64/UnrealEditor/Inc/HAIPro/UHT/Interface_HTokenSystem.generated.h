// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface_HTokenSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIPRO_Interface_HTokenSystem_generated_h
#error "Interface_HTokenSystem.generated.h already included, missing '#pragma once' in Interface_HTokenSystem.h"
#endif
#define HAIPRO_Interface_HTokenSystem_generated_h

#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_SPARSE_DATA
#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_RPC_WRAPPERS \
	virtual void GiveToken_Implementation(int32 amount) {}; \
	virtual bool TookToken_Implementation(int32 amount) { return false; }; \
 \
	DECLARE_FUNCTION(execGiveToken); \
	DECLARE_FUNCTION(execTookToken);


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GiveToken_Implementation(int32 amount) {}; \
	virtual bool TookToken_Implementation(int32 amount) { return false; }; \
 \
	DECLARE_FUNCTION(execGiveToken); \
	DECLARE_FUNCTION(execTookToken);


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_ACCESSORS
#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_CALLBACK_WRAPPERS
#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIPRO_API UInterface_HTokenSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_HTokenSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIPRO_API, UInterface_HTokenSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_HTokenSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HAIPRO_API UInterface_HTokenSystem(UInterface_HTokenSystem&&); \
	HAIPRO_API UInterface_HTokenSystem(const UInterface_HTokenSystem&); \
public: \
	HAIPRO_API virtual ~UInterface_HTokenSystem();


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIPRO_API UInterface_HTokenSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HAIPRO_API UInterface_HTokenSystem(UInterface_HTokenSystem&&); \
	HAIPRO_API UInterface_HTokenSystem(const UInterface_HTokenSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIPRO_API, UInterface_HTokenSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_HTokenSystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_HTokenSystem) \
	HAIPRO_API virtual ~UInterface_HTokenSystem();


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_HTokenSystem(); \
	friend struct Z_Construct_UClass_UInterface_HTokenSystem_Statics; \
public: \
	DECLARE_CLASS(UInterface_HTokenSystem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HAIPro"), HAIPRO_API) \
	DECLARE_SERIALIZER(UInterface_HTokenSystem)


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_HTokenSystem() {} \
public: \
	typedef UInterface_HTokenSystem UClassType; \
	typedef IInterface_HTokenSystem ThisClass; \
	static void Execute_GiveToken(UObject* O, int32 amount); \
	static bool Execute_TookToken(UObject* O, int32 amount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_HTokenSystem() {} \
public: \
	typedef UInterface_HTokenSystem UClassType; \
	typedef IInterface_HTokenSystem ThisClass; \
	static void Execute_GiveToken(UObject* O, int32 amount); \
	static bool Execute_TookToken(UObject* O, int32 amount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_10_PROLOG
#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_SPARSE_DATA \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_RPC_WRAPPERS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_ACCESSORS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_CALLBACK_WRAPPERS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_SPARSE_DATA \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_ACCESSORS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_CALLBACK_WRAPPERS \
	FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIPRO_API UClass* StaticClass<class UInterface_HTokenSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
