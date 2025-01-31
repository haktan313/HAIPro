// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Tasks/BTTask_SetMovementState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetMovementState() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetMovementState();
	HAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetMovementState_NoRegister();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_MovementState();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_MovementType();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	void UBTTask_SetMovementState::StaticRegisterNativesUBTTask_SetMovementState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetMovementState);
	UClass* Z_Construct_UClass_UBTTask_SetMovementState_NoRegister()
	{
		return UBTTask_SetMovementState::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetMovementState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetMovementState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetMovementState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_SetMovementState.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetMovementState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetMovementState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_SetMovementState, MovementType), Z_Construct_UEnum_HAIPro_E_MovementType, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType_MetaData)) }; // 3926520521
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetMovementState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_SetMovementState, MovementState), Z_Construct_UEnum_HAIPro_E_MovementState, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState_MetaData)) }; // 731240949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetMovementState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetMovementState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::ClassParams = {
		&UBTTask_SetMovementState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SetMovementState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetMovementState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetMovementState()
	{
		if (!Z_Registration_Info_UClass_UBTTask_SetMovementState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetMovementState.OuterSingleton, Z_Construct_UClass_UBTTask_SetMovementState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_SetMovementState.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTTask_SetMovementState>()
	{
		return UBTTask_SetMovementState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetMovementState);
	UBTTask_SetMovementState::~UBTTask_SetMovementState() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetMovementState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetMovementState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetMovementState, UBTTask_SetMovementState::StaticClass, TEXT("UBTTask_SetMovementState"), &Z_Registration_Info_UClass_UBTTask_SetMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetMovementState), 766728375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetMovementState_h_4269509919(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetMovementState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Tasks_BTTask_SetMovementState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
