// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Services/BTService_CanTookToken.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_CanTookToken() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	HAIPRO_API UClass* Z_Construct_UClass_UBTService_CanTookToken();
	HAIPRO_API UClass* Z_Construct_UClass_UBTService_CanTookToken_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	void UBTService_CanTookToken::StaticRegisterNativesUBTService_CanTookToken()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_CanTookToken);
	UClass* Z_Construct_UClass_UBTService_CanTookToken_NoRegister()
	{
		return UBTService_CanTookToken::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_CanTookToken_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfTokenNedded_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amountOfTokenNedded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoActionBoolKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoActionBoolKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_CanTookToken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CanTookToken_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Services/BTService_CanTookToken.h" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_amountOfTokenNedded_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_amountOfTokenNedded = { "amountOfTokenNedded", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTService_CanTookToken, amountOfTokenNedded), METADATA_PARAMS(Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_amountOfTokenNedded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_amountOfTokenNedded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_targetKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_targetKey = { "targetKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTService_CanTookToken, targetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_targetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_targetKey_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_DoActionBoolKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_DoActionBoolKey = { "DoActionBoolKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTService_CanTookToken, DoActionBoolKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_DoActionBoolKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_DoActionBoolKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_CanTookToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_amountOfTokenNedded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_targetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_DoActionBoolKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_CanTookToken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_CanTookToken>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_CanTookToken_Statics::ClassParams = {
		&UBTService_CanTookToken::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_CanTookToken_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_CanTookToken_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_CanTookToken()
	{
		if (!Z_Registration_Info_UClass_UBTService_CanTookToken.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_CanTookToken.OuterSingleton, Z_Construct_UClass_UBTService_CanTookToken_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_CanTookToken.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UBTService_CanTookToken>()
	{
		return UBTService_CanTookToken::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CanTookToken);
	UBTService_CanTookToken::~UBTService_CanTookToken() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Services_BTService_CanTookToken_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Services_BTService_CanTookToken_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_CanTookToken, UBTService_CanTookToken::StaticClass, TEXT("UBTService_CanTookToken"), &Z_Registration_Info_UClass_UBTService_CanTookToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_CanTookToken), 358713341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Services_BTService_CanTookToken_h_3380586478(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Services_BTService_CanTookToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Services_BTService_CanTookToken_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
