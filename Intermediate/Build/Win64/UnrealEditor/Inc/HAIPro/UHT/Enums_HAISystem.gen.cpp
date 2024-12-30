// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Enums_HAISystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums_HAISystem() {}
// Cross Module References
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_DoActionResult();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_DominantSense();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_MovementState();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_MovementType();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_OnPossessState();
	HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_SenseType();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enumerators[] = {
		{ "E_SenseType::see", (int64)E_SenseType::see },
		{ "E_SenseType::hear", (int64)E_SenseType::hear },
		{ "E_SenseType::damage", (int64)E_SenseType::damage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Enum for the type of sense\n" },
		{ "damage.DisplayName", "Damage" },
		{ "damage.Name", "E_SenseType::damage" },
		{ "hear.DisplayName", "Hear" },
		{ "hear.Name", "E_SenseType::hear" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "see.DisplayName", "See" },
		{ "see.Name", "E_SenseType::see" },
		{ "ToolTip", "Enum for the type of sense" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_SenseType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
		nullptr,
		"E_SenseType",
		"E_SenseType",
		Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_SenseType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HAIPro_E_SenseType()
	{
		if (!Z_Registration_Info_UEnum_E_SenseType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SenseType.InnerSingleton, Z_Construct_UEnum_HAIPro_E_SenseType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_SenseType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_OnPossessState;
	static UEnum* E_OnPossessState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E_OnPossessState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E_OnPossessState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_OnPossessState, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_OnPossessState"));
		}
		return Z_Registration_Info_UEnum_E_OnPossessState.OuterSingleton;
	}
	template<> HAIPRO_API UEnum* StaticEnum<E_OnPossessState>()
	{
		return E_OnPossessState_StaticEnum();
	}
	struct Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::Enumerators[] = {
		{ "E_OnPossessState::passive", (int64)E_OnPossessState::passive },
		{ "E_OnPossessState::investigate", (int64)E_OnPossessState::investigate },
		{ "E_OnPossessState::active", (int64)E_OnPossessState::active },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::Enum_MetaDataParams[] = {
		{ "active.DisplayName", "Active" },
		{ "active.Name", "E_OnPossessState::active" },
		{ "BlueprintType", "true" },
		{ "Comment", "//Enum for the type of state\n" },
		{ "investigate.DisplayName", "Investigate" },
		{ "investigate.Name", "E_OnPossessState::investigate" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "passive.DisplayName", "Passive" },
		{ "passive.Name", "E_OnPossessState::passive" },
		{ "ToolTip", "Enum for the type of state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
		nullptr,
		"E_OnPossessState",
		"E_OnPossessState",
		Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HAIPro_E_OnPossessState()
	{
		if (!Z_Registration_Info_UEnum_E_OnPossessState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_OnPossessState.InnerSingleton, Z_Construct_UEnum_HAIPro_E_OnPossessState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_OnPossessState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_MovementType;
	static UEnum* E_MovementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E_MovementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E_MovementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_MovementType, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_MovementType"));
		}
		return Z_Registration_Info_UEnum_E_MovementType.OuterSingleton;
	}
	template<> HAIPRO_API UEnum* StaticEnum<E_MovementType>()
	{
		return E_MovementType_StaticEnum();
	}
	struct Z_Construct_UEnum_HAIPro_E_MovementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HAIPro_E_MovementType_Statics::Enumerators[] = {
		{ "E_MovementType::walk", (int64)E_MovementType::walk },
		{ "E_MovementType::fly", (int64)E_MovementType::fly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HAIPro_E_MovementType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Enum for the type of movement\n" },
		{ "fly.DisplayName", "Fly" },
		{ "fly.Name", "E_MovementType::fly" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "ToolTip", "Enum for the type of movement" },
		{ "walk.DisplayName", "Walk" },
		{ "walk.Name", "E_MovementType::walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_MovementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
		nullptr,
		"E_MovementType",
		"E_MovementType",
		Z_Construct_UEnum_HAIPro_E_MovementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_MovementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HAIPro_E_MovementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_MovementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HAIPro_E_MovementType()
	{
		if (!Z_Registration_Info_UEnum_E_MovementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_MovementType.InnerSingleton, Z_Construct_UEnum_HAIPro_E_MovementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_MovementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_MovementState;
	static UEnum* E_MovementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E_MovementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E_MovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_MovementState, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_MovementState"));
		}
		return Z_Registration_Info_UEnum_E_MovementState.OuterSingleton;
	}
	template<> HAIPRO_API UEnum* StaticEnum<E_MovementState>()
	{
		return E_MovementState_StaticEnum();
	}
	struct Z_Construct_UEnum_HAIPro_E_MovementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HAIPro_E_MovementState_Statics::Enumerators[] = {
		{ "E_MovementState::idle", (int64)E_MovementState::idle },
		{ "E_MovementState::walking", (int64)E_MovementState::walking },
		{ "E_MovementState::running", (int64)E_MovementState::running },
		{ "E_MovementState::normalFlying", (int64)E_MovementState::normalFlying },
		{ "E_MovementState::fastFlying", (int64)E_MovementState::fastFlying },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HAIPro_E_MovementState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Enum for the type of movement speed state\n" },
		{ "fastFlying.DisplayName", "FastFlying" },
		{ "fastFlying.Name", "E_MovementState::fastFlying" },
		{ "idle.DisplayName", "Idle" },
		{ "idle.Name", "E_MovementState::idle" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "normalFlying.DisplayName", "NormalFlying" },
		{ "normalFlying.Name", "E_MovementState::normalFlying" },
		{ "running.DisplayName", "Running" },
		{ "running.Name", "E_MovementState::running" },
		{ "ToolTip", "Enum for the type of movement speed state" },
		{ "walking.DisplayName", "Walking" },
		{ "walking.Name", "E_MovementState::walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_MovementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
		nullptr,
		"E_MovementState",
		"E_MovementState",
		Z_Construct_UEnum_HAIPro_E_MovementState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_MovementState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HAIPro_E_MovementState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_MovementState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HAIPro_E_MovementState()
	{
		if (!Z_Registration_Info_UEnum_E_MovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_MovementState.InnerSingleton, Z_Construct_UEnum_HAIPro_E_MovementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_MovementState.InnerSingleton;
	}
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enumerators[] = {
		{ "E_DominantSense::Sight", (int64)E_DominantSense::Sight },
		{ "E_DominantSense::Hearing", (int64)E_DominantSense::Hearing },
		{ "E_DominantSense::Damage", (int64)E_DominantSense::Damage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Enum for the type of dominant sense\n" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "E_DominantSense::Damage" },
		{ "Hearing.DisplayName", "Hearing" },
		{ "Hearing.Name", "E_DominantSense::Hearing" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "Sight.DisplayName", "Sight" },
		{ "Sight.Name", "E_DominantSense::Sight" },
		{ "ToolTip", "Enum for the type of dominant sense" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
		nullptr,
		"E_DominantSense",
		"E_DominantSense",
		Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HAIPro_E_DominantSense()
	{
		if (!Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton, Z_Construct_UEnum_HAIPro_E_DominantSense_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_DoActionResult;
	static UEnum* E_DoActionResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E_DoActionResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E_DoActionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_DoActionResult, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_DoActionResult"));
		}
		return Z_Registration_Info_UEnum_E_DoActionResult.OuterSingleton;
	}
	template<> HAIPRO_API UEnum* StaticEnum<E_DoActionResult>()
	{
		return E_DoActionResult_StaticEnum();
	}
	struct Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::Enumerators[] = {
		{ "E_DoActionResult::success", (int64)E_DoActionResult::success },
		{ "E_DoActionResult::failed", (int64)E_DoActionResult::failed },
		{ "E_DoActionResult::inProgress", (int64)E_DoActionResult::inProgress },
		{ "E_DoActionResult::aborted", (int64)E_DoActionResult::aborted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::Enum_MetaDataParams[] = {
		{ "aborted.DisplayName", "Aborted" },
		{ "aborted.Name", "E_DoActionResult::aborted" },
		{ "BlueprintType", "true" },
		{ "Comment", "//Enum for the result of the action\n" },
		{ "failed.DisplayName", "Failed" },
		{ "failed.Name", "E_DoActionResult::failed" },
		{ "inProgress.DisplayName", "InProgress" },
		{ "inProgress.Name", "E_DoActionResult::inProgress" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "success.DisplayName", "Success" },
		{ "success.Name", "E_DoActionResult::success" },
		{ "ToolTip", "Enum for the result of the action" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
		nullptr,
		"E_DoActionResult",
		"E_DoActionResult",
		Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HAIPro_E_DoActionResult()
	{
		if (!Z_Registration_Info_UEnum_E_DoActionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_DoActionResult.InnerSingleton, Z_Construct_UEnum_HAIPro_E_DoActionResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_DoActionResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Enums_HAISystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Enums_HAISystem_h_Statics::EnumInfo[] = {
		{ E_SenseType_StaticEnum, TEXT("E_SenseType"), &Z_Registration_Info_UEnum_E_SenseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3369778184U) },
		{ E_OnPossessState_StaticEnum, TEXT("E_OnPossessState"), &Z_Registration_Info_UEnum_E_OnPossessState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2139805809U) },
		{ E_MovementType_StaticEnum, TEXT("E_MovementType"), &Z_Registration_Info_UEnum_E_MovementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 663590422U) },
		{ E_MovementState_StaticEnum, TEXT("E_MovementState"), &Z_Registration_Info_UEnum_E_MovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3100350066U) },
		{ E_DominantSense_StaticEnum, TEXT("E_DominantSense"), &Z_Registration_Info_UEnum_E_DominantSense, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 824497281U) },
		{ E_DoActionResult_StaticEnum, TEXT("E_DoActionResult"), &Z_Registration_Info_UEnum_E_DoActionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 676304402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Enums_HAISystem_h_899327923(TEXT("/Script/HAIPro"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Enums_HAISystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Enums_HAISystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
