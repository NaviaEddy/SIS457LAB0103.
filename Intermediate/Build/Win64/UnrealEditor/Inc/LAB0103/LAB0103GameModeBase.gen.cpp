// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LAB0103/LAB0103GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLAB0103GameModeBase() {}
// Cross Module References
	LAB0103_API UClass* Z_Construct_UClass_ALAB0103GameModeBase_NoRegister();
	LAB0103_API UClass* Z_Construct_UClass_ALAB0103GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LAB0103();
// End Cross Module References
	void ALAB0103GameModeBase::StaticRegisterNativesALAB0103GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALAB0103GameModeBase);
	UClass* Z_Construct_UClass_ALAB0103GameModeBase_NoRegister()
	{
		return ALAB0103GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALAB0103GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALAB0103GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LAB0103,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALAB0103GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LAB0103GameModeBase.h" },
		{ "ModuleRelativePath", "LAB0103GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALAB0103GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALAB0103GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALAB0103GameModeBase_Statics::ClassParams = {
		&ALAB0103GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALAB0103GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALAB0103GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALAB0103GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ALAB0103GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALAB0103GameModeBase.OuterSingleton, Z_Construct_UClass_ALAB0103GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALAB0103GameModeBase.OuterSingleton;
	}
	template<> LAB0103_API UClass* StaticClass<ALAB0103GameModeBase>()
	{
		return ALAB0103GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALAB0103GameModeBase);
	struct Z_CompiledInDeferFile_FID_LAB0103_Source_LAB0103_LAB0103GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LAB0103_Source_LAB0103_LAB0103GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALAB0103GameModeBase, ALAB0103GameModeBase::StaticClass, TEXT("ALAB0103GameModeBase"), &Z_Registration_Info_UClass_ALAB0103GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALAB0103GameModeBase), 4073966715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LAB0103_Source_LAB0103_LAB0103GameModeBase_h_2816878705(TEXT("/Script/LAB0103"),
		Z_CompiledInDeferFile_FID_LAB0103_Source_LAB0103_LAB0103GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LAB0103_Source_LAB0103_LAB0103GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
