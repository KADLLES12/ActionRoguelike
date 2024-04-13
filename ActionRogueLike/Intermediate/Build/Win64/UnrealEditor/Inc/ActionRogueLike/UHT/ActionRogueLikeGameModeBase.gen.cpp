// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRogueLike/ActionRogueLikeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRogueLikeGameModeBase() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRogueLikeGameModeBase();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRogueLikeGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRogueLike();
// End Cross Module References
	void AActionRogueLikeGameModeBase::StaticRegisterNativesAActionRogueLikeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionRogueLikeGameModeBase);
	UClass* Z_Construct_UClass_AActionRogueLikeGameModeBase_NoRegister()
	{
		return AActionRogueLikeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActionRogueLikeGameModeBase.h" },
		{ "ModuleRelativePath", "ActionRogueLikeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionRogueLikeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics::ClassParams = {
		&AActionRogueLikeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionRogueLikeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AActionRogueLikeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionRogueLikeGameModeBase.OuterSingleton, Z_Construct_UClass_AActionRogueLikeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActionRogueLikeGameModeBase.OuterSingleton;
	}
	template<> ACTIONROGUELIKE_API UClass* StaticClass<AActionRogueLikeGameModeBase>()
	{
		return AActionRogueLikeGameModeBase::StaticClass();
	}
	AActionRogueLikeGameModeBase::AActionRogueLikeGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionRogueLikeGameModeBase);
	AActionRogueLikeGameModeBase::~AActionRogueLikeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Github_ActionRoguelike_ActionRogueLike_Source_ActionRogueLike_ActionRogueLikeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ActionRoguelike_ActionRogueLike_Source_ActionRogueLike_ActionRogueLikeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActionRogueLikeGameModeBase, AActionRogueLikeGameModeBase::StaticClass, TEXT("AActionRogueLikeGameModeBase"), &Z_Registration_Info_UClass_AActionRogueLikeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionRogueLikeGameModeBase), 2790863753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ActionRoguelike_ActionRogueLike_Source_ActionRogueLike_ActionRogueLikeGameModeBase_h_3076070807(TEXT("/Script/ActionRogueLike"),
		Z_CompiledInDeferFile_FID_Github_ActionRoguelike_ActionRogueLike_Source_ActionRogueLike_ActionRogueLikeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ActionRoguelike_ActionRogueLike_Source_ActionRogueLike_ActionRogueLikeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
