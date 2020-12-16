// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/VehicleTemplateWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleTemplateWheelRear() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UVehicleTemplateWheelRear_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UVehicleTemplateWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UVehicleTemplateWheelRear::StaticRegisterNativesUVehicleTemplateWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UVehicleTemplateWheelRear_NoRegister()
	{
		return UVehicleTemplateWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleTemplateWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleTemplateWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleTemplateWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VehicleTemplateWheelRear.h" },
		{ "ModuleRelativePath", "VehicleTemplateWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleTemplateWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleTemplateWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleTemplateWheelRear_Statics::ClassParams = {
		&UVehicleTemplateWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleTemplateWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleTemplateWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleTemplateWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleTemplateWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleTemplateWheelRear, 1780380770);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<UVehicleTemplateWheelRear>()
	{
		return UVehicleTemplateWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleTemplateWheelRear(Z_Construct_UClass_UVehicleTemplateWheelRear, &UVehicleTemplateWheelRear::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UVehicleTemplateWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleTemplateWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
