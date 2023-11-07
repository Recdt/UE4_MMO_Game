// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMO_FirstTry/MMO_FirstTryGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMO_FirstTryGameMode() {}
// Cross Module References
	MMO_FIRSTTRY_API UClass* Z_Construct_UClass_AMMO_FirstTryGameMode_NoRegister();
	MMO_FIRSTTRY_API UClass* Z_Construct_UClass_AMMO_FirstTryGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MMO_FirstTry();
// End Cross Module References
	void AMMO_FirstTryGameMode::StaticRegisterNativesAMMO_FirstTryGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMMO_FirstTryGameMode_NoRegister()
	{
		return AMMO_FirstTryGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMMO_FirstTryGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMMO_FirstTryGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MMO_FirstTry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMMO_FirstTryGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MMO_FirstTryGameMode.h" },
		{ "ModuleRelativePath", "MMO_FirstTryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMMO_FirstTryGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMMO_FirstTryGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMMO_FirstTryGameMode_Statics::ClassParams = {
		&AMMO_FirstTryGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMMO_FirstTryGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMMO_FirstTryGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMMO_FirstTryGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMMO_FirstTryGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMMO_FirstTryGameMode, 3892823304);
	template<> MMO_FIRSTTRY_API UClass* StaticClass<AMMO_FirstTryGameMode>()
	{
		return AMMO_FirstTryGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMMO_FirstTryGameMode(Z_Construct_UClass_AMMO_FirstTryGameMode, &AMMO_FirstTryGameMode::StaticClass, TEXT("/Script/MMO_FirstTry"), TEXT("AMMO_FirstTryGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMMO_FirstTryGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
