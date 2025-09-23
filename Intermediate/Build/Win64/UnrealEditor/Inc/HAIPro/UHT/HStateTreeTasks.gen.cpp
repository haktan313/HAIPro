// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTree/HStateTreeTasks.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHStateTreeTasks() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTask_ClearFocus();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTask_SetFocus();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTask_SetFocusInstanceData();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint();
HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
UPackage* Z_Construct_UPackage__Script_HAIPro();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTask_SetFocusInstanceData ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData;
class UScriptStruct* FTask_SetFocusInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask_SetFocusInstanceData, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("Task_SetFocusInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**SetFocus Task */" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
		{ "ToolTip", "SetFocus Task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusActor_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusLocation_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinishTaskAfterFocusSet_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** if true task will finish after focus is set but if not it will continue to run it mean that it wont end */" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
		{ "ToolTip", "if true task will finish after focus is set but if not it will continue to run it mean that it wont end" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusLocation;
	static void NewProp_bFinishTaskAfterFocusSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishTaskAfterFocusSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask_SetFocusInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask_SetFocusInstanceData, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask_SetFocusInstanceData, FocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusActor_MetaData), NewProp_FocusActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_FocusLocation = { "FocusLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask_SetFocusInstanceData, FocusLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusLocation_MetaData), NewProp_FocusLocation_MetaData) };
void Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusSet_SetBit(void* Obj)
{
	((FTask_SetFocusInstanceData*)Obj)->bFinishTaskAfterFocusSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusSet = { "bFinishTaskAfterFocusSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTask_SetFocusInstanceData), &Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinishTaskAfterFocusSet_MetaData), NewProp_bFinishTaskAfterFocusSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_FocusActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_FocusLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	&NewStructOps,
	"Task_SetFocusInstanceData",
	Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::PropPointers),
	sizeof(FTask_SetFocusInstanceData),
	alignof(FTask_SetFocusInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTask_SetFocusInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FTask_SetFocusInstanceData ******************************************

// ********** Begin ScriptStruct FTask_SetFocus ****************************************************
static_assert(std::is_polymorphic<FTask_SetFocus>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FTask_SetFocus cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTask_SetFocus;
class UScriptStruct* FTask_SetFocus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetFocus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTask_SetFocus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask_SetFocus, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("Task_SetFocus"));
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetFocus.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTask_SetFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "DisplayName", "Set Focus" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask_SetFocus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_SetFocus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"Task_SetFocus",
	nullptr,
	0,
	sizeof(FTask_SetFocus),
	alignof(FTask_SetFocus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetFocus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTask_SetFocus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTask_SetFocus()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetFocus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTask_SetFocus.InnerSingleton, Z_Construct_UScriptStruct_FTask_SetFocus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetFocus.InnerSingleton;
}
// ********** End ScriptStruct FTask_SetFocus ******************************************************

// ********** Begin ScriptStruct FTask_ClearFocusInstanceData **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData;
class UScriptStruct* FTask_ClearFocusInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("Task_ClearFocusInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** ClearFocus Task */" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
		{ "ToolTip", "ClearFocus Task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinishTaskAfterFocusCleared_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/**if true task will finish after focus is set but if not it will continue to run it mean that it wont end*/" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
		{ "ToolTip", "if true task will finish after focus is set but if not it will continue to run it mean that it wont end" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_bFinishTaskAfterFocusCleared_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishTaskAfterFocusCleared;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask_ClearFocusInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask_ClearFocusInstanceData, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
void Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusCleared_SetBit(void* Obj)
{
	((FTask_ClearFocusInstanceData*)Obj)->bFinishTaskAfterFocusCleared = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusCleared = { "bFinishTaskAfterFocusCleared", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTask_ClearFocusInstanceData), &Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusCleared_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinishTaskAfterFocusCleared_MetaData), NewProp_bFinishTaskAfterFocusCleared_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::NewProp_bFinishTaskAfterFocusCleared,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	&NewStructOps,
	"Task_ClearFocusInstanceData",
	Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::PropPointers),
	sizeof(FTask_ClearFocusInstanceData),
	alignof(FTask_ClearFocusInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FTask_ClearFocusInstanceData ****************************************

// ********** Begin ScriptStruct FTask_ClearFocus **************************************************
static_assert(std::is_polymorphic<FTask_ClearFocus>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FTask_ClearFocus cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTask_ClearFocus;
class UScriptStruct* FTask_ClearFocus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_ClearFocus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTask_ClearFocus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask_ClearFocus, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("Task_ClearFocus"));
	}
	return Z_Registration_Info_UScriptStruct_FTask_ClearFocus.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTask_ClearFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "DisplayName", "Clear Focus" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask_ClearFocus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_ClearFocus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"Task_ClearFocus",
	nullptr,
	0,
	sizeof(FTask_ClearFocus),
	alignof(FTask_ClearFocus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_ClearFocus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTask_ClearFocus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTask_ClearFocus()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_ClearFocus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTask_ClearFocus.InnerSingleton, Z_Construct_UScriptStruct_FTask_ClearFocus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTask_ClearFocus.InnerSingleton;
}
// ********** End ScriptStruct FTask_ClearFocus ****************************************************

// ********** Begin ScriptStruct FTask_SetNextPatrolPointInstanceData ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData;
class UScriptStruct* FTask_SetNextPatrolPointInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("Task_SetNextPatrolPointInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** SetNextPatrolPoint Task */" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
		{ "ToolTip", "SetNextPatrolPoint Task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedBy_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextPatrolPoint_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndTaskAfterSettingNextPoint_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** if true task will finish after focus is set but if not it will continue to run it mean that it wont end */" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
		{ "ToolTip", "if true task will finish after focus is set but if not it will continue to run it mean that it wont end" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextPatrolPoint;
	static void NewProp_bEndTaskAfterSettingNextPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndTaskAfterSettingNextPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask_SetNextPatrolPointInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask_SetNextPatrolPointInstanceData, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask_SetNextPatrolPointInstanceData, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedBy_MetaData), NewProp_RequestedBy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_NextPatrolPoint = { "NextPatrolPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask_SetNextPatrolPointInstanceData, NextPatrolPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextPatrolPoint_MetaData), NewProp_NextPatrolPoint_MetaData) };
void Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_bEndTaskAfterSettingNextPoint_SetBit(void* Obj)
{
	((FTask_SetNextPatrolPointInstanceData*)Obj)->bEndTaskAfterSettingNextPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_bEndTaskAfterSettingNextPoint = { "bEndTaskAfterSettingNextPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTask_SetNextPatrolPointInstanceData), &Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_bEndTaskAfterSettingNextPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndTaskAfterSettingNextPoint_MetaData), NewProp_bEndTaskAfterSettingNextPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_RequestedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_NextPatrolPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewProp_bEndTaskAfterSettingNextPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	nullptr,
	&NewStructOps,
	"Task_SetNextPatrolPointInstanceData",
	Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::PropPointers),
	sizeof(FTask_SetNextPatrolPointInstanceData),
	alignof(FTask_SetNextPatrolPointInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FTask_SetNextPatrolPointInstanceData ********************************

// ********** Begin ScriptStruct FTask_SetNextPatrolPoint ******************************************
static_assert(std::is_polymorphic<FTask_SetNextPatrolPoint>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FTask_SetNextPatrolPoint cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint;
class UScriptStruct* FTask_SetNextPatrolPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("Task_SetNextPatrolPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "DisplayName", "Set Next Patrol Point" },
		{ "ModuleRelativePath", "Public/StateTree/HStateTreeTasks.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask_SetNextPatrolPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"Task_SetNextPatrolPoint",
	nullptr,
	0,
	sizeof(FTask_SetNextPatrolPoint),
	alignof(FTask_SetNextPatrolPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint()
{
	if (!Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint.InnerSingleton, Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint.InnerSingleton;
}
// ********** End ScriptStruct FTask_SetNextPatrolPoint ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeTasks_h__Script_HAIPro_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTask_SetFocusInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTask_SetFocusInstanceData_Statics::NewStructOps, TEXT("Task_SetFocusInstanceData"), &Z_Registration_Info_UScriptStruct_FTask_SetFocusInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask_SetFocusInstanceData), 1965140670U) },
		{ FTask_SetFocus::StaticStruct, Z_Construct_UScriptStruct_FTask_SetFocus_Statics::NewStructOps, TEXT("Task_SetFocus"), &Z_Registration_Info_UScriptStruct_FTask_SetFocus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask_SetFocus), 1305848443U) },
		{ FTask_ClearFocusInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTask_ClearFocusInstanceData_Statics::NewStructOps, TEXT("Task_ClearFocusInstanceData"), &Z_Registration_Info_UScriptStruct_FTask_ClearFocusInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask_ClearFocusInstanceData), 1285925947U) },
		{ FTask_ClearFocus::StaticStruct, Z_Construct_UScriptStruct_FTask_ClearFocus_Statics::NewStructOps, TEXT("Task_ClearFocus"), &Z_Registration_Info_UScriptStruct_FTask_ClearFocus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask_ClearFocus), 3863721646U) },
		{ FTask_SetNextPatrolPointInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTask_SetNextPatrolPointInstanceData_Statics::NewStructOps, TEXT("Task_SetNextPatrolPointInstanceData"), &Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPointInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask_SetNextPatrolPointInstanceData), 3020068666U) },
		{ FTask_SetNextPatrolPoint::StaticStruct, Z_Construct_UScriptStruct_FTask_SetNextPatrolPoint_Statics::NewStructOps, TEXT("Task_SetNextPatrolPoint"), &Z_Registration_Info_UScriptStruct_FTask_SetNextPatrolPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask_SetNextPatrolPoint), 1522197394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeTasks_h__Script_HAIPro_2456560586(TEXT("/Script/HAIPro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeTasks_h__Script_HAIPro_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HAIPro_HAIPro_HostProject_Plugins_HAIPro_Source_HAIPro_Public_StateTree_HStateTreeTasks_h__Script_HAIPro_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
