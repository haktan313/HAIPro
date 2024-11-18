// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/Interface_HTokenSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_HTokenSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	HAIPRO_API UClass* Z_Construct_UClass_UInterface_HTokenSystem();
	HAIPRO_API UClass* Z_Construct_UClass_UInterface_HTokenSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	DEFINE_FUNCTION(IInterface_HTokenSystem::execGiveToken)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveToken_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInterface_HTokenSystem::execTookToken)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TookToken_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	struct Interface_HTokenSystem_eventGiveToken_Parms
	{
		int32 amount;
	};
	struct Interface_HTokenSystem_eventTookToken_Parms
	{
		int32 amount;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Interface_HTokenSystem_eventTookToken_Parms()
			: ReturnValue(false)
		{
		}
	};
	void IInterface_HTokenSystem::GiveToken(int32 amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GiveToken instead.");
	}
	bool IInterface_HTokenSystem::TookToken(int32 amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TookToken instead.");
		Interface_HTokenSystem_eventTookToken_Parms Parms;
		return Parms.ReturnValue;
	}
	void UInterface_HTokenSystem::StaticRegisterNativesUInterface_HTokenSystem()
	{
		UClass* Class = UInterface_HTokenSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveToken", &IInterface_HTokenSystem::execGiveToken },
			{ "TookToken", &IInterface_HTokenSystem::execTookToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Interface_HTokenSystem_eventGiveToken_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "HToken" },
		{ "Comment", "//Interface function for taking token from the target\n" },
		{ "ModuleRelativePath", "Public/Interface_HTokenSystem.h" },
		{ "ToolTip", "Interface function for taking token from the target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_HTokenSystem, nullptr, "GiveToken", nullptr, nullptr, sizeof(Interface_HTokenSystem_eventGiveToken_Parms), Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Interface_HTokenSystem_eventTookToken_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interface_HTokenSystem_eventTookToken_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Interface_HTokenSystem_eventTookToken_Parms), &Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "HToken" },
		{ "ModuleRelativePath", "Public/Interface_HTokenSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_HTokenSystem, nullptr, "TookToken", nullptr, nullptr, sizeof(Interface_HTokenSystem_eventTookToken_Parms), Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterface_HTokenSystem_TookToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_HTokenSystem_TookToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_HTokenSystem);
	UClass* Z_Construct_UClass_UInterface_HTokenSystem_NoRegister()
	{
		return UInterface_HTokenSystem::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_HTokenSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_HTokenSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterface_HTokenSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterface_HTokenSystem_GiveToken, "GiveToken" }, // 1308381008
		{ &Z_Construct_UFunction_UInterface_HTokenSystem_TookToken, "TookToken" }, // 1067405070
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_HTokenSystem_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface_HTokenSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_HTokenSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_HTokenSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_HTokenSystem_Statics::ClassParams = {
		&UInterface_HTokenSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_HTokenSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_HTokenSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_HTokenSystem()
	{
		if (!Z_Registration_Info_UClass_UInterface_HTokenSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_HTokenSystem.OuterSingleton, Z_Construct_UClass_UInterface_HTokenSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterface_HTokenSystem.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<UInterface_HTokenSystem>()
	{
		return UInterface_HTokenSystem::StaticClass();
	}
	UInterface_HTokenSystem::UInterface_HTokenSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_HTokenSystem);
	UInterface_HTokenSystem::~UInterface_HTokenSystem() {}
	static FName NAME_UInterface_HTokenSystem_GiveToken = FName(TEXT("GiveToken"));
	void IInterface_HTokenSystem::Execute_GiveToken(UObject* O, int32 amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInterface_HTokenSystem::StaticClass()));
		Interface_HTokenSystem_eventGiveToken_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInterface_HTokenSystem_GiveToken);
		if (Func)
		{
			Parms.amount=amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInterface_HTokenSystem*)(O->GetNativeInterfaceAddress(UInterface_HTokenSystem::StaticClass())))
		{
			I->GiveToken_Implementation(amount);
		}
	}
	static FName NAME_UInterface_HTokenSystem_TookToken = FName(TEXT("TookToken"));
	bool IInterface_HTokenSystem::Execute_TookToken(UObject* O, int32 amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInterface_HTokenSystem::StaticClass()));
		Interface_HTokenSystem_eventTookToken_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInterface_HTokenSystem_TookToken);
		if (Func)
		{
			Parms.amount=amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInterface_HTokenSystem*)(O->GetNativeInterfaceAddress(UInterface_HTokenSystem::StaticClass())))
		{
			Parms.ReturnValue = I->TookToken_Implementation(amount);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_HTokenSystem, UInterface_HTokenSystem::StaticClass, TEXT("UInterface_HTokenSystem"), &Z_Registration_Info_UClass_UInterface_HTokenSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_HTokenSystem), 3566531069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_1184266413(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HAISystem_Build_BuiltPlugins_HAIPro_5_2_HostProject_Plugins_HAIPro_Source_HAIPro_Public_Interface_HTokenSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
