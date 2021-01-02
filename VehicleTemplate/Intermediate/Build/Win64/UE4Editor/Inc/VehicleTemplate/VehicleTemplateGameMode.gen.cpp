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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_AVehicleTemplateGameMode_GameOver = FName(TEXT("GameOver"));
	void AVehicleTemplateGameMode::GameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVehicleTemplateGameMode_GameOver),NULL);
	}
	static FName NAME_AVehicleTemplateGameMode_GameStart = FName(TEXT("GameStart"));
	void AVehicleTemplateGameMode::GameStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVehicleTemplateGameMode_GameStart),NULL);
	}
	void AVehicleTemplateGameMode::StaticRegisterNativesAVehicleTemplateGameMode()
	{
	}
	struct Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VehicleTemplateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleTemplateGameMode, nullptr, "GameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VehicleTemplateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleTemplateGameMode, nullptr, "GameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVehicleTemplateGameMode_NoRegister()
	{
		return AVehicleTemplateGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleTemplateGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStarts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStarts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStarts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleTemplateGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehicleTemplateGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicleTemplateGameMode_GameOver, "GameOver" }, // 259876004
		{ &Z_Construct_UFunction_AVehicleTemplateGameMode_GameStart, "GameStart" }, // 838991095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplateGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VehicleTemplateGameMode.h" },
		{ "ModuleRelativePath", "VehicleTemplateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplateGameMode_Statics::NewProp_PlayerStarts_MetaData[] = {
		{ "ModuleRelativePath", "VehicleTemplateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVehicleTemplateGameMode_Statics::NewProp_PlayerStarts = { "PlayerStarts", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplateGameMode, PlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplateGameMode_Statics::NewProp_PlayerStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplateGameMode_Statics::NewProp_PlayerStarts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleTemplateGameMode_Statics::NewProp_PlayerStarts_Inner = { "PlayerStarts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicleTemplateGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplateGameMode_Statics::NewProp_PlayerStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplateGameMode_Statics::NewProp_PlayerStarts_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleTemplateGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleTemplateGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleTemplateGameMode_Statics::ClassParams = {
		&AVehicleTemplateGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVehicleTemplateGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplateGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AVehicleTemplateGameMode, 304427420);
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
