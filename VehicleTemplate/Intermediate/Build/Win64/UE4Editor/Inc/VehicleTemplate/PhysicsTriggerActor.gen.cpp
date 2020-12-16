// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/PhysicsTriggerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsTriggerActor() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_APhysicsTriggerActor_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_APhysicsTriggerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void APhysicsTriggerActor::StaticRegisterNativesAPhysicsTriggerActor()
	{
	}
	UClass* Z_Construct_UClass_APhysicsTriggerActor_NoRegister()
	{
		return APhysicsTriggerActor::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsTriggerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsTriggerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsTriggerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsTriggerActor.h" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsTriggerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsTriggerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsTriggerActor_Statics::ClassParams = {
		&APhysicsTriggerActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsTriggerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsTriggerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsTriggerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsTriggerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsTriggerActor, 1777075039);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<APhysicsTriggerActor>()
	{
		return APhysicsTriggerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsTriggerActor(Z_Construct_UClass_APhysicsTriggerActor, &APhysicsTriggerActor::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("APhysicsTriggerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsTriggerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
