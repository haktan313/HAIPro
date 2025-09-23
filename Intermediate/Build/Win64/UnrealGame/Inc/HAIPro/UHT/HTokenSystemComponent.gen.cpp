// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTokenSystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHTokenSystemComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
HAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent();
HAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason();
HAIPRO_API UEnum* Z_Construct_UEnum_HAIPro_E_TookTokenFailReason();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum E_TookTokenFailReason *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_TookTokenFailReason;
static UEnum* E_TookTokenFailReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_TookTokenFailReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_TookTokenFailReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_TookTokenFailReason, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_TookTokenFailReason"));
	}
	return Z_Registration_Info_UEnum_E_TookTokenFailReason.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_TookTokenFailReason>()
{
	return E_TookTokenFailReason_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_TookTokenFailReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** for TookTokenFromGivenActor function fail reasons */" },
		{ "GivenActorHasNoTokenSystemComponent.DisplayName", "Given Actor Has No Token System Component" },
		{ "GivenActorHasNoTokenSystemComponent.Name", "E_TookTokenFailReason::GivenActorHasNoTokenSystemComponent" },
		{ "GivenActorNotValid.DisplayName", "Given Actor Not Valid" },
		{ "GivenActorNotValid.Name", "E_TookTokenFailReason::GivenActorNotValid" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "TokenCountLessOrEqualZero.DisplayName", "Token Count Less Or Equal Zero" },
		{ "TokenCountLessOrEqualZero.Name", "E_TookTokenFailReason::TokenCountLessOrEqualZero" },
		{ "TokenCountNotEnough.DisplayName", "Token Count Not Enough" },
		{ "TokenCountNotEnough.Name", "E_TookTokenFailReason::TokenCountNotEnough" },
		{ "ToolTip", "for TookTokenFromGivenActor function fail reasons" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_TookTokenFailReason::GivenActorNotValid", (int64)E_TookTokenFailReason::GivenActorNotValid },
		{ "E_TookTokenFailReason::GivenActorHasNoTokenSystemComponent", (int64)E_TookTokenFailReason::GivenActorHasNoTokenSystemComponent },
		{ "E_TookTokenFailReason::TokenCountNotEnough", (int64)E_TookTokenFailReason::TokenCountNotEnough },
		{ "E_TookTokenFailReason::TokenCountLessOrEqualZero", (int64)E_TookTokenFailReason::TokenCountLessOrEqualZero },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_TookTokenFailReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_TookTokenFailReason",
	"E_TookTokenFailReason",
	Z_Construct_UEnum_HAIPro_E_TookTokenFailReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_TookTokenFailReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_TookTokenFailReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_TookTokenFailReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_TookTokenFailReason()
{
	if (!Z_Registration_Info_UEnum_E_TookTokenFailReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_TookTokenFailReason.InnerSingleton, Z_Construct_UEnum_HAIPro_E_TookTokenFailReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_TookTokenFailReason.InnerSingleton;
}
// ********** End Enum E_TookTokenFailReason *******************************************************

// ********** Begin Enum E_GiveTokenFailReason *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_GiveTokenFailReason;
static UEnum* E_GiveTokenFailReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_GiveTokenFailReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_GiveTokenFailReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_GiveTokenFailReason"));
	}
	return Z_Registration_Info_UEnum_E_GiveTokenFailReason.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_GiveTokenFailReason>()
{
	return E_GiveTokenFailReason_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** for GiveTokenToGivenActor function fail reasons */" },
		{ "GivenActorHasNoTokenSystemComponent.DisplayName", "Given Actor Has No Token System Component" },
		{ "GivenActorHasNoTokenSystemComponent.Name", "E_GiveTokenFailReason::GivenActorHasNoTokenSystemComponent" },
		{ "GivenActorNotValid.DisplayName", "Given Actor Not Valid" },
		{ "GivenActorNotValid.Name", "E_GiveTokenFailReason::GivenActorNotValid" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "TakenTokenCountLessOrEqualZero.DisplayName", "Took Token Count Less Or Equal Zero" },
		{ "TakenTokenCountLessOrEqualZero.Name", "E_GiveTokenFailReason::TakenTokenCountLessOrEqualZero" },
		{ "TakenTokenCountNotEnoughForGiveItToBack.DisplayName", "Taken Token Count Not Enough For Give It To Back" },
		{ "TakenTokenCountNotEnoughForGiveItToBack.Name", "E_GiveTokenFailReason::TakenTokenCountNotEnoughForGiveItToBack" },
		{ "ThereIsNoTokenTakenFromGivenActor.DisplayName", "There Is No Token Taken From Given Actor" },
		{ "ThereIsNoTokenTakenFromGivenActor.Name", "E_GiveTokenFailReason::ThereIsNoTokenTakenFromGivenActor" },
		{ "ToolTip", "for GiveTokenToGivenActor function fail reasons" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_GiveTokenFailReason::GivenActorNotValid", (int64)E_GiveTokenFailReason::GivenActorNotValid },
		{ "E_GiveTokenFailReason::GivenActorHasNoTokenSystemComponent", (int64)E_GiveTokenFailReason::GivenActorHasNoTokenSystemComponent },
		{ "E_GiveTokenFailReason::ThereIsNoTokenTakenFromGivenActor", (int64)E_GiveTokenFailReason::ThereIsNoTokenTakenFromGivenActor },
		{ "E_GiveTokenFailReason::TakenTokenCountLessOrEqualZero", (int64)E_GiveTokenFailReason::TakenTokenCountLessOrEqualZero },
		{ "E_GiveTokenFailReason::TakenTokenCountNotEnoughForGiveItToBack", (int64)E_GiveTokenFailReason::TakenTokenCountNotEnoughForGiveItToBack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_GiveTokenFailReason",
	"E_GiveTokenFailReason",
	Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason()
{
	if (!Z_Registration_Info_UEnum_E_GiveTokenFailReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_GiveTokenFailReason.InnerSingleton, Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_GiveTokenFailReason.InnerSingleton;
}
// ********** End Enum E_GiveTokenFailReason *******************************************************

// ********** Begin Enum E_TokenManagmentFailReason ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_TokenManagmentFailReason;
static UEnum* E_TokenManagmentFailReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_TokenManagmentFailReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_TokenManagmentFailReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("E_TokenManagmentFailReason"));
	}
	return Z_Registration_Info_UEnum_E_TokenManagmentFailReason.OuterSingleton;
}
template<> HAIPRO_API UEnum* StaticEnum<E_TokenManagmentFailReason>()
{
	return E_TokenManagmentFailReason_StaticEnum();
}
struct Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GivenActorHasNoTokenSystemComponent.DisplayName", "Given Actor Has No Token System Component" },
		{ "GivenActorHasNoTokenSystemComponent.Name", "E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent" },
		{ "GivenActorNotValid.DisplayName", "Given Actor Not Valid" },
		{ "GivenActorNotValid.Name", "E_TokenManagmentFailReason::GivenActorNotValid" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_TokenManagmentFailReason::GivenActorNotValid", (int64)E_TokenManagmentFailReason::GivenActorNotValid },
		{ "E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent", (int64)E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	"E_TokenManagmentFailReason",
	"E_TokenManagmentFailReason",
	Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason()
{
	if (!Z_Registration_Info_UEnum_E_TokenManagmentFailReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_TokenManagmentFailReason.InnerSingleton, Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_TokenManagmentFailReason.InnerSingleton;
}
// ********** End Enum E_TokenManagmentFailReason **************************************************

// ********** Begin Class UHTokenSystemComponent Function DecraeseCurrentTokenToGivenActor *********
struct Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics
{
	struct HTokenSystemComponent_eventDecraeseCurrentTokenToGivenActor_Parms
	{
		AActor* GivenActor;
		int32 TokenCount;
		E_TokenManagmentFailReason FailReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTokenSystem" },
		{ "Comment", "/** Decraese the current token count to the given actor's token count */" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Decraese the current token count to the given actor's token count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GivenActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_GivenActor = { "GivenActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventDecraeseCurrentTokenToGivenActor_Parms, GivenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_TokenCount = { "TokenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventDecraeseCurrentTokenToGivenActor_Parms, TokenCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_FailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventDecraeseCurrentTokenToGivenActor_Parms, FailReason), Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason, METADATA_PARAMS(0, nullptr) }; // 588336705
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_GivenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_TokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_FailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::NewProp_FailReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "DecraeseCurrentTokenToGivenActor", Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::HTokenSystemComponent_eventDecraeseCurrentTokenToGivenActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::HTokenSystemComponent_eventDecraeseCurrentTokenToGivenActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execDecraeseCurrentTokenToGivenActor)
{
	P_GET_OBJECT(AActor,Z_Param_GivenActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_TokenCount);
	P_GET_ENUM_REF(E_TokenManagmentFailReason,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecraeseCurrentTokenToGivenActor(Z_Param_GivenActor,Z_Param_TokenCount,(E_TokenManagmentFailReason&)(Z_Param_Out_FailReason));
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function DecraeseCurrentTokenToGivenActor ***********

// ********** Begin Class UHTokenSystemComponent Function DecraeseMaxTokenCountToGivenActor ********
struct Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics
{
	struct HTokenSystemComponent_eventDecraeseMaxTokenCountToGivenActor_Parms
	{
		AActor* GivenActor;
		int32 TokenCount;
		E_TokenManagmentFailReason FailReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTokenSystem" },
		{ "Comment", "/** Decraese the max token count to the given actor's token count */" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Decraese the max token count to the given actor's token count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GivenActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_GivenActor = { "GivenActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventDecraeseMaxTokenCountToGivenActor_Parms, GivenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_TokenCount = { "TokenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventDecraeseMaxTokenCountToGivenActor_Parms, TokenCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_FailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventDecraeseMaxTokenCountToGivenActor_Parms, FailReason), Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason, METADATA_PARAMS(0, nullptr) }; // 588336705
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_GivenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_TokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_FailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::NewProp_FailReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "DecraeseMaxTokenCountToGivenActor", Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::HTokenSystemComponent_eventDecraeseMaxTokenCountToGivenActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::HTokenSystemComponent_eventDecraeseMaxTokenCountToGivenActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execDecraeseMaxTokenCountToGivenActor)
{
	P_GET_OBJECT(AActor,Z_Param_GivenActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_TokenCount);
	P_GET_ENUM_REF(E_TokenManagmentFailReason,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecraeseMaxTokenCountToGivenActor(Z_Param_GivenActor,Z_Param_TokenCount,(E_TokenManagmentFailReason&)(Z_Param_Out_FailReason));
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function DecraeseMaxTokenCountToGivenActor **********

// ********** Begin Class UHTokenSystemComponent Function GetTargetsCurrentTokenCount **************
struct Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics
{
	struct HTokenSystemComponent_eventGetTargetsCurrentTokenCount_Parms
	{
		AActor* TargetActor;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTokenSystem" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventGetTargetsCurrentTokenCount_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventGetTargetsCurrentTokenCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "GetTargetsCurrentTokenCount", Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::HTokenSystemComponent_eventGetTargetsCurrentTokenCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::HTokenSystemComponent_eventGetTargetsCurrentTokenCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execGetTargetsCurrentTokenCount)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTargetsCurrentTokenCount(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function GetTargetsCurrentTokenCount ****************

// ********** Begin Class UHTokenSystemComponent Function GiveTokenToGivenActor ********************
struct Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics
{
	struct HTokenSystemComponent_eventGiveTokenToGivenActor_Parms
	{
		AActor* GivenActor;
		int32 TokenCount;
		E_GiveTokenFailReason FailReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTokenSystem" },
		{ "Comment", "/** Trying to give tokens to the given actor */" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Trying to give tokens to the given actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GivenActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_GivenActor = { "GivenActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventGiveTokenToGivenActor_Parms, GivenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_TokenCount = { "TokenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventGiveTokenToGivenActor_Parms, TokenCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_FailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventGiveTokenToGivenActor_Parms, FailReason), Z_Construct_UEnum_HAIPro_E_GiveTokenFailReason, METADATA_PARAMS(0, nullptr) }; // 142302435
void Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HTokenSystemComponent_eventGiveTokenToGivenActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HTokenSystemComponent_eventGiveTokenToGivenActor_Parms), &Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_GivenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_TokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_FailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_FailReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "GiveTokenToGivenActor", Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::HTokenSystemComponent_eventGiveTokenToGivenActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::HTokenSystemComponent_eventGiveTokenToGivenActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execGiveTokenToGivenActor)
{
	P_GET_OBJECT(AActor,Z_Param_GivenActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_TokenCount);
	P_GET_ENUM_REF(E_GiveTokenFailReason,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GiveTokenToGivenActor(Z_Param_GivenActor,Z_Param_TokenCount,(E_GiveTokenFailReason&)(Z_Param_Out_FailReason));
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function GiveTokenToGivenActor **********************

// ********** Begin Class UHTokenSystemComponent Function IncreaseCurrentTokenToGivenActor *********
struct Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics
{
	struct HTokenSystemComponent_eventIncreaseCurrentTokenToGivenActor_Parms
	{
		AActor* GivenActor;
		int32 TokenCount;
		E_TokenManagmentFailReason FailReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTokenSystem" },
		{ "Comment", "/** Increase the current token count to the given actor's token count */" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Increase the current token count to the given actor's token count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GivenActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_GivenActor = { "GivenActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventIncreaseCurrentTokenToGivenActor_Parms, GivenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_TokenCount = { "TokenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventIncreaseCurrentTokenToGivenActor_Parms, TokenCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_FailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventIncreaseCurrentTokenToGivenActor_Parms, FailReason), Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason, METADATA_PARAMS(0, nullptr) }; // 588336705
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_GivenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_TokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_FailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::NewProp_FailReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "IncreaseCurrentTokenToGivenActor", Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::HTokenSystemComponent_eventIncreaseCurrentTokenToGivenActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::HTokenSystemComponent_eventIncreaseCurrentTokenToGivenActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execIncreaseCurrentTokenToGivenActor)
{
	P_GET_OBJECT(AActor,Z_Param_GivenActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_TokenCount);
	P_GET_ENUM_REF(E_TokenManagmentFailReason,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseCurrentTokenToGivenActor(Z_Param_GivenActor,Z_Param_TokenCount,(E_TokenManagmentFailReason&)(Z_Param_Out_FailReason));
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function IncreaseCurrentTokenToGivenActor ***********

// ********** Begin Class UHTokenSystemComponent Function IncreaseMaxTokenCountToGivenActor ********
struct Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics
{
	struct HTokenSystemComponent_eventIncreaseMaxTokenCountToGivenActor_Parms
	{
		AActor* GivenActor;
		int32 TokenCount;
		E_TokenManagmentFailReason FailReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTokenSystem" },
		{ "Comment", "/** Increase the max token count to the given actor's token count */" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Increase the max token count to the given actor's token count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GivenActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_GivenActor = { "GivenActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventIncreaseMaxTokenCountToGivenActor_Parms, GivenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_TokenCount = { "TokenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventIncreaseMaxTokenCountToGivenActor_Parms, TokenCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_FailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventIncreaseMaxTokenCountToGivenActor_Parms, FailReason), Z_Construct_UEnum_HAIPro_E_TokenManagmentFailReason, METADATA_PARAMS(0, nullptr) }; // 588336705
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_GivenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_TokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_FailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::NewProp_FailReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "IncreaseMaxTokenCountToGivenActor", Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::HTokenSystemComponent_eventIncreaseMaxTokenCountToGivenActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::HTokenSystemComponent_eventIncreaseMaxTokenCountToGivenActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execIncreaseMaxTokenCountToGivenActor)
{
	P_GET_OBJECT(AActor,Z_Param_GivenActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_TokenCount);
	P_GET_ENUM_REF(E_TokenManagmentFailReason,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseMaxTokenCountToGivenActor(Z_Param_GivenActor,Z_Param_TokenCount,(E_TokenManagmentFailReason&)(Z_Param_Out_FailReason));
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function IncreaseMaxTokenCountToGivenActor **********

// ********** Begin Class UHTokenSystemComponent Function OnDestroyedGivenActor ********************
struct Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics
{
	struct HTokenSystemComponent_eventOnDestroyedGivenActor_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventOnDestroyedGivenActor_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "OnDestroyedGivenActor", Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::HTokenSystemComponent_eventOnDestroyedGivenActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::HTokenSystemComponent_eventOnDestroyedGivenActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execOnDestroyedGivenActor)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDestroyedGivenActor(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function OnDestroyedGivenActor **********************

// ********** Begin Class UHTokenSystemComponent Function TookTokenFromGivenActor ******************
struct Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics
{
	struct HTokenSystemComponent_eventTookTokenFromGivenActor_Parms
	{
		AActor* GivenActor;
		int32 TokenCount;
		E_TookTokenFailReason FailReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTokenSystem" },
		{ "Comment", "/** Trying to get tokens from the given actor */" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Trying to get tokens from the given actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GivenActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_GivenActor = { "GivenActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventTookTokenFromGivenActor_Parms, GivenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_TokenCount = { "TokenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventTookTokenFromGivenActor_Parms, TokenCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_FailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventTookTokenFromGivenActor_Parms, FailReason), Z_Construct_UEnum_HAIPro_E_TookTokenFailReason, METADATA_PARAMS(0, nullptr) }; // 3648082536
void Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HTokenSystemComponent_eventTookTokenFromGivenActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HTokenSystemComponent_eventTookTokenFromGivenActor_Parms), &Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_GivenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_TokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_FailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_FailReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "TookTokenFromGivenActor", Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::HTokenSystemComponent_eventTookTokenFromGivenActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::HTokenSystemComponent_eventTookTokenFromGivenActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execTookTokenFromGivenActor)
{
	P_GET_OBJECT(AActor,Z_Param_GivenActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_TokenCount);
	P_GET_ENUM_REF(E_TookTokenFailReason,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TookTokenFromGivenActor(Z_Param_GivenActor,Z_Param_TokenCount,(E_TookTokenFailReason&)(Z_Param_Out_FailReason));
	P_NATIVE_END;
}
// ********** End Class UHTokenSystemComponent Function TookTokenFromGivenActor ********************

// ********** Begin Class UHTokenSystemComponent ***************************************************
void UHTokenSystemComponent::StaticRegisterNativesUHTokenSystemComponent()
{
	UClass* Class = UHTokenSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecraeseCurrentTokenToGivenActor", &UHTokenSystemComponent::execDecraeseCurrentTokenToGivenActor },
		{ "DecraeseMaxTokenCountToGivenActor", &UHTokenSystemComponent::execDecraeseMaxTokenCountToGivenActor },
		{ "GetTargetsCurrentTokenCount", &UHTokenSystemComponent::execGetTargetsCurrentTokenCount },
		{ "GiveTokenToGivenActor", &UHTokenSystemComponent::execGiveTokenToGivenActor },
		{ "IncreaseCurrentTokenToGivenActor", &UHTokenSystemComponent::execIncreaseCurrentTokenToGivenActor },
		{ "IncreaseMaxTokenCountToGivenActor", &UHTokenSystemComponent::execIncreaseMaxTokenCountToGivenActor },
		{ "OnDestroyedGivenActor", &UHTokenSystemComponent::execOnDestroyedGivenActor },
		{ "TookTokenFromGivenActor", &UHTokenSystemComponent::execTookTokenFromGivenActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHTokenSystemComponent;
UClass* UHTokenSystemComponent::GetPrivateStaticClass()
{
	using TClass = UHTokenSystemComponent;
	if (!Z_Registration_Info_UClass_UHTokenSystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HTokenSystemComponent"),
			Z_Registration_Info_UClass_UHTokenSystemComponent.InnerSingleton,
			StaticRegisterNativesUHTokenSystemComponent,
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
	return Z_Registration_Info_UClass_UHTokenSystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister()
{
	return UHTokenSystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHTokenSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HTokenSystemComponent.h" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentTokenCount_MetaData[] = {
		{ "Category", "HTokenSystem" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxTokenCount_MetaData[] = {
		{ "Category", "HTokenSystem" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenCountMap_MetaData[] = {
		{ "Comment", "/** This map is used for storing the token counts for each actor */" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "This map is used for storing the token counts for each actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentTokenCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxTokenCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenCountMap_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TokenCountMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TokenCountMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTokenSystemComponent_DecraeseCurrentTokenToGivenActor, "DecraeseCurrentTokenToGivenActor" }, // 4180986174
		{ &Z_Construct_UFunction_UHTokenSystemComponent_DecraeseMaxTokenCountToGivenActor, "DecraeseMaxTokenCountToGivenActor" }, // 900602106
		{ &Z_Construct_UFunction_UHTokenSystemComponent_GetTargetsCurrentTokenCount, "GetTargetsCurrentTokenCount" }, // 2116207537
		{ &Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToGivenActor, "GiveTokenToGivenActor" }, // 3469734169
		{ &Z_Construct_UFunction_UHTokenSystemComponent_IncreaseCurrentTokenToGivenActor, "IncreaseCurrentTokenToGivenActor" }, // 224275818
		{ &Z_Construct_UFunction_UHTokenSystemComponent_IncreaseMaxTokenCountToGivenActor, "IncreaseMaxTokenCountToGivenActor" }, // 3657850384
		{ &Z_Construct_UFunction_UHTokenSystemComponent_OnDestroyedGivenActor, "OnDestroyedGivenActor" }, // 1780700375
		{ &Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromGivenActor, "TookTokenFromGivenActor" }, // 1392800907
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTokenSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentTokenCount = { "currentTokenCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHTokenSystemComponent, currentTokenCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentTokenCount_MetaData), NewProp_currentTokenCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_maxTokenCount = { "maxTokenCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHTokenSystemComponent, maxTokenCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxTokenCount_MetaData), NewProp_maxTokenCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenCountMap_ValueProp = { "TokenCountMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenCountMap_Key_KeyProp = { "TokenCountMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenCountMap = { "TokenCountMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHTokenSystemComponent, TokenCountMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenCountMap_MetaData), NewProp_TokenCountMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentTokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_maxTokenCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenCountMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenCountMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenCountMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHTokenSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHTokenSystemComponent_Statics::ClassParams = {
	&UHTokenSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHTokenSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHTokenSystemComponent()
{
	if (!Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton, Z_Construct_UClass_UHTokenSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHTokenSystemComponent);
UHTokenSystemComponent::~UHTokenSystemComponent() {}
// ********** End Class UHTokenSystemComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h__Script_HAIPro_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_TookTokenFailReason_StaticEnum, TEXT("E_TookTokenFailReason"), &Z_Registration_Info_UEnum_E_TookTokenFailReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3648082536U) },
		{ E_GiveTokenFailReason_StaticEnum, TEXT("E_GiveTokenFailReason"), &Z_Registration_Info_UEnum_E_GiveTokenFailReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 142302435U) },
		{ E_TokenManagmentFailReason_StaticEnum, TEXT("E_TokenManagmentFailReason"), &Z_Registration_Info_UEnum_E_TokenManagmentFailReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 588336705U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHTokenSystemComponent, UHTokenSystemComponent::StaticClass, TEXT("UHTokenSystemComponent"), &Z_Registration_Info_UClass_UHTokenSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHTokenSystemComponent), 2985843850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h__Script_HAIPro_3965758244(TEXT("/Script/HAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h__Script_HAIPro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h__Script_HAIPro_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h__Script_HAIPro_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h__Script_HAIPro_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
