// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/VehicleTemplateGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleTemplateGameMode() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AVehicleTemplateGameMode_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AVehicleTemplateGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void AVehicleTemplateGameMode::StaticRegisterNativesAVehicleTemplateGameMode()
	{
	}
	UClass* Z_Construct_UClass_AVehicleTemplateGameMode_NoRegister()
	{
		return AVehicleTemplateGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleTemplateGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleTemplateGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplateGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VehicleTemplateGameMode.h" },
		{ "ModuleRelativePath", "VehicleTemplateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleTemplateGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleTemplateGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleTemplateGameMode_Statics::ClassParams = {
		&AVehicleTemplateGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplateGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplateGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleTemplateGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleTemplateGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleTemplateGameMode, 4063713444);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<AVehicleTemplateGameMode>()
	{
		return AVehicleTemplateGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleTemplateGameMode(Z_Construct_UClass_AVehicleTemplateGameMode, &AVehicleTemplateGameMode::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AVehicleTemplateGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleTemplateGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
