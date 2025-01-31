// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Decorators/BTDecorator_IsInTheRange.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsInTheRange() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	HAIPRO_API UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange();
	HAIPRO_API UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	void UBTDecorator_IsInTheRange::StaticRegisterNativesUBTDecorator_IsInTheRange()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_IsInTheRange);
	UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange_NoRegister()
	{
		return UBTDecorator_IsInTheRange::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_idealRangeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_idealRangeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableErorRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableErorRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Decorators/BTDecorator_IsInTheRange.h" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_idealRangeValue_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_idealRangeValue = { "idealRangeValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_IsInTheRange, idealRangeValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_idealRangeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_idealRangeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_AcceptableErorRadius_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_AcceptableErorRadius = { "AcceptableErorRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_IsInTheRange, AcceptableErorRadius), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_AcceptableErorRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_AcceptableErorRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_targetActorKey_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_targetActorKey = { "targetActorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_IsInTheRange, targetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_targetActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_targetActorKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_idealRangeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_AcceptableErorRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_targetActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsInTheRange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::ClassParams = {
		&UBTDecorator_IsInTheRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_IsInTheRange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_IsInTheRange.OuterSingleton, Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_IsInTheRange.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTDecorator_IsInTheRange>()
	{
		return UBTDecorator_IsInTheRange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsInTheRange);
	UBTDecorator_IsInTheRange::~UBTDecorator_IsInTheRange() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_IsInTheRange, UBTDecorator_IsInTheRange::StaticClass, TEXT("UBTDecorator_IsInTheRange"), &Z_Registration_Info_UClass_UBTDecorator_IsInTheRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_IsInTheRange), 3319679647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_1860560429(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
