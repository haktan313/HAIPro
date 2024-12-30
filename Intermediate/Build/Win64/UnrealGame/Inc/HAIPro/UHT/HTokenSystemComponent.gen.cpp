// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/HTokenSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTokenSystemComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	HAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent();
	HAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	DEFINE_FUNCTION(UHTokenSystemComponent::execGiveTokenToTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveTokenToTarget(Z_Param_amount,Z_Param_targetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTokenSystemComponent::execTookTokenFromTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TookTokenFromTarget(Z_Param_amount,Z_Param_targetActor);
		P_NATIVE_END;
	}
	void UHTokenSystemComponent::StaticRegisterNativesUHTokenSystemComponent()
	{
		UClass* Class = UHTokenSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveTokenToTarget", &UHTokenSystemComponent::execGiveTokenToTarget },
			{ "TookTokenFromTarget", &UHTokenSystemComponent::execTookTokenFromTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics
	{
		struct HTokenSystemComponent_eventGiveTokenToTarget_Parms
		{
			int32 amount;
			AActor* targetActor;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTokenSystemComponent_eventGiveTokenToTarget_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTokenSystemComponent_eventGiveTokenToTarget_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_targetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "HToken" },
		{ "Comment", "//Take token from the target\n" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Take token from the target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "GiveTokenToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::HTokenSystemComponent_eventGiveTokenToTarget_Parms), Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics
	{
		struct HTokenSystemComponent_eventTookTokenFromTarget_Parms
		{
			int32 amount;
			AActor* targetActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTokenSystemComponent_eventTookTokenFromTarget_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTokenSystemComponent_eventTookTokenFromTarget_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HTokenSystemComponent_eventTookTokenFromTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HTokenSystemComponent_eventTookTokenFromTarget_Parms), &Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "HToken" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "TookTokenFromTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::HTokenSystemComponent_eventTookTokenFromTarget_Parms), Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHTokenSystemComponent);
	UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister()
	{
		return UHTokenSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHTokenSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentToken_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentToken;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TokenMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TokenMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TokenMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTokenSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHTokenSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget, "GiveTokenToTarget" }, // 1154710130
		{ &Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget, "TookTokenFromTarget" }, // 1155664457
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTokenSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HTokenSystemComponent.h" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentToken_MetaData[] = {
		{ "Category", "HToken" },
		{ "Comment", "//Give token to the target\n" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
		{ "ToolTip", "Give token to the target" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentToken = { "currentToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHTokenSystemComponent, currentToken), METADATA_PARAMS(Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentToken_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_ValueProp = { "TokenMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_Key_KeyProp = { "TokenMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_MetaData[] = {
		{ "Category", "HToken" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap = { "TokenMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHTokenSystemComponent, TokenMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTokenSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTokenSystemComponent>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UHTokenSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTokenSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton, Z_Construct_UClass_UHTokenSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UHTokenSystemComponent>()
	{
		return UHTokenSystemComponent::StaticClass();
	}
	UHTokenSystemComponent::UHTokenSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTokenSystemComponent);
	UHTokenSystemComponent::~UHTokenSystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHTokenSystemComponent, UHTokenSystemComponent::StaticClass, TEXT("UHTokenSystemComponent"), &Z_Registration_Info_UClass_UHTokenSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHTokenSystemComponent), 898760790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_3782402622(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_pluginNewVersions_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_HTokenSystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
