// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/VehicleTemplateWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleTemplateWheelFront() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UVehicleTemplateWheelFront_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UVehicleTemplateWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UVehicleTemplateWheelFront::StaticRegisterNativesUVehicleTemplateWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UVehicleTemplateWheelFront_NoRegister()
	{
		return UVehicleTemplateWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleTemplateWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleTemplateWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleTemplateWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VehicleTemplateWheelFront.h" },
		{ "ModuleRelativePath", "VehicleTemplateWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleTemplateWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleTemplateWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleTemplateWheelFront_Statics::ClassParams = {
		&UVehicleTemplateWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVehicleTemplateWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleTemplateWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleTemplateWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleTemplateWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleTemplateWheelFront, 1389924082);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<UVehicleTemplateWheelFront>()
	{
		return UVehicleTemplateWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleTemplateWheelFront(Z_Construct_UClass_UVehicleTemplateWheelFront, &UVehicleTemplateWheelFront::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UVehicleTemplateWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleTemplateWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
