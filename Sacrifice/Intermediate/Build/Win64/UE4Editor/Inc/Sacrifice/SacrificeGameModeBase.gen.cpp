// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sacrifice/SacrificeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSacrificeGameModeBase() {}
// Cross Module References
	SACRIFICE_API UClass* Z_Construct_UClass_ASacrificeGameModeBase_NoRegister();
	SACRIFICE_API UClass* Z_Construct_UClass_ASacrificeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sacrifice();
// End Cross Module References
	void ASacrificeGameModeBase::StaticRegisterNativesASacrificeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASacrificeGameModeBase_NoRegister()
	{
		return ASacrificeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASacrificeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASacrificeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sacrifice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASacrificeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SacrificeGameModeBase.h" },
		{ "ModuleRelativePath", "SacrificeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASacrificeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASacrificeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASacrificeGameModeBase_Statics::ClassParams = {
		&ASacrificeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASacrificeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASacrificeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASacrificeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASacrificeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASacrificeGameModeBase, 1169054256);
	template<> SACRIFICE_API UClass* StaticClass<ASacrificeGameModeBase>()
	{
		return ASacrificeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASacrificeGameModeBase(Z_Construct_UClass_ASacrificeGameModeBase, &ASacrificeGameModeBase::StaticClass, TEXT("/Script/Sacrifice"), TEXT("ASacrificeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASacrificeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
