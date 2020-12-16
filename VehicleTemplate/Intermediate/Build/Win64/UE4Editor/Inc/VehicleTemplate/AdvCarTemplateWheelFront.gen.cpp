// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/AdvCarTemplateWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvCarTemplateWheelFront() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UAdvCarTemplateWheelFront::StaticRegisterNativesUAdvCarTemplateWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront_NoRegister()
	{
		return UAdvCarTemplateWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvCarTemplateWheelFront.h" },
		{ "ModuleRelativePath", "AdvCarTemplateWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvCarTemplateWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics::ClassParams = {
		&UAdvCarTemplateWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvCarTemplateWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvCarTemplateWheelFront, 439865262);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<UAdvCarTemplateWheelFront>()
	{
		return UAdvCarTemplateWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvCarTemplateWheelFront(Z_Construct_UClass_UAdvCarTemplateWheelFront, &UAdvCarTemplateWheelFront::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UAdvCarTemplateWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvCarTemplateWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
