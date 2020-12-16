// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/AdvCarTemplateWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvCarTemplateWheelRear() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UAdvCarTemplateWheelRear::StaticRegisterNativesUAdvCarTemplateWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear_NoRegister()
	{
		return UAdvCarTemplateWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvCarTemplateWheelRear.h" },
		{ "ModuleRelativePath", "AdvCarTemplateWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvCarTemplateWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics::ClassParams = {
		&UAdvCarTemplateWheelRear::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvCarTemplateWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvCarTemplateWheelRear, 859856362);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<UAdvCarTemplateWheelRear>()
	{
		return UAdvCarTemplateWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvCarTemplateWheelRear(Z_Construct_UClass_UAdvCarTemplateWheelRear, &UAdvCarTemplateWheelRear::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UAdvCarTemplateWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvCarTemplateWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
