// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HAIPro/Public/HPatrolSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPatrolSpline() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline();
	HAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister();
	HAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FS_PatrolData();
	UPackage* Z_Construct_UPackage__Script_HAIPro();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_PatrolData;
class UScriptStruct* FS_PatrolData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_PatrolData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_PatrolData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_PatrolData, (UObject*)Z_Construct_UPackage__Script_HAIPro(), TEXT("S_PatrolData"));
	}
	return Z_Registration_Info_UScriptStruct_S_PatrolData.OuterSingleton;
}
template<> HAIPRO_API UScriptStruct* StaticStruct<FS_PatrolData>()
{
	return FS_PatrolData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_PatrolData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentPointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentPointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PatrolData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_PatrolData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_currentPointIndex_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_currentPointIndex = { "currentPointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PatrolData, currentPointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_currentPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_currentPointIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ClampMax", "1" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PatrolData, direction), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_PatrolData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_currentPointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_direction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_PatrolData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
		nullptr,
		&NewStructOps,
		"S_PatrolData",
		sizeof(FS_PatrolData),
		alignof(FS_PatrolData),
		Z_Construct_UScriptStruct_FS_PatrolData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PatrolData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PatrolData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PatrolData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_PatrolData()
	{
		if (!Z_Registration_Info_UScriptStruct_S_PatrolData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_PatrolData.InnerSingleton, Z_Construct_UScriptStruct_FS_PatrolData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_PatrolData.InnerSingleton;
	}
	void AHPatrolSpline::StaticRegisterNativesAHPatrolSpline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHPatrolSpline);
	UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister()
	{
		return AHPatrolSpline::StaticClass();
	}
	struct Z_Construct_UClass_AHPatrolSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolDataMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PatrolDataMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHPatrolSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HAIPro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HPatrolSpline.h" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_ValueProp = { "PatrolDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FS_PatrolData, METADATA_PARAMS(nullptr, 0) }; // 2949445265
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_Key_KeyProp = { "PatrolDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_MetaData[] = {
		{ "Category", "PatrolSpline" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap = { "PatrolDataMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHPatrolSpline, PatrolDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_MetaData)) }; // 2949445265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHPatrolSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_SplineComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHPatrolSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHPatrolSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHPatrolSpline_Statics::ClassParams = {
		&AHPatrolSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHPatrolSpline()
	{
		if (!Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton, Z_Construct_UClass_AHPatrolSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton;
	}
	template<> HAIPRO_API UClass* StaticClass<AHPatrolSpline>()
	{
		return AHPatrolSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPatrolSpline);
	AHPatrolSpline::~AHPatrolSpline() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ScriptStructInfo[] = {
		{ FS_PatrolData::StaticStruct, Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewStructOps, TEXT("S_PatrolData"), &Z_Registration_Info_UScriptStruct_S_PatrolData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_PatrolData), 2949445265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHPatrolSpline, AHPatrolSpline::StaticClass, TEXT("AHPatrolSpline"), &Z_Registration_Info_UClass_AHPatrolSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHPatrolSpline), 1857508343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_1280909156(TEXT("/Script/HAIPro"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject2_Plugins_HAIPro_Source_HAIPro_Public_HPatrolSpline_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
