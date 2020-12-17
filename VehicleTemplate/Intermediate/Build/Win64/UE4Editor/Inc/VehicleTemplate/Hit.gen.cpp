// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/Hit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHit() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UHit_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UHit();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UHit::StaticRegisterNativesUHit()
	{
	}
	UClass* Z_Construct_UClass_UHit_NoRegister()
	{
		return UHit::StaticClass();
	}
	struct Z_Construct_UClass_UHit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Hit.h" },
		{ "ModuleRelativePath", "Hit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHit_Statics::ClassParams = {
		&UHit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHit, 2011444019);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<UHit>()
	{
		return UHit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHit(Z_Construct_UClass_UHit, &UHit::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UHit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
