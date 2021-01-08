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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_ASacrificePlayerState_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UUsableItemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APhysicsTriggerActor::execOnDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhysicsTriggerActor::execOnOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void APhysicsTriggerActor::StaticRegisterNativesAPhysicsTriggerActor()
	{
		UClass* Class = APhysicsTriggerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDestroy", &APhysicsTriggerActor::execOnDestroy },
			{ "OnOverlap", &APhysicsTriggerActor::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the vehicle has been destroyed */" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
		{ "ToolTip", "Called when the vehicle has been destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhysicsTriggerActor, nullptr, "OnDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics
	{
		struct PhysicsTriggerActor_eventOnOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsTriggerActor_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the vehicle is overlapping with another */" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
		{ "ToolTip", "Called when the vehicle is overlapping with another" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhysicsTriggerActor, nullptr, "OnOverlap", nullptr, nullptr, sizeof(PhysicsTriggerActor_eventOnOverlap_Parms), Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhysicsTriggerActor_NoRegister()
	{
		return APhysicsTriggerActor::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsTriggerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastOffender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastOffender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsableItemComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsableItemComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsTriggerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhysicsTriggerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhysicsTriggerActor_OnDestroy, "OnDestroy" }, // 1129591843
		{ &Z_Construct_UFunction_APhysicsTriggerActor_OnOverlap, "OnOverlap" }, // 370901917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsTriggerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsTriggerActor.h" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PhysicsTriggerActor" },
		{ "Comment", "/** Caches the PlayerState of the owner of this vehicle */" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
		{ "ToolTip", "Caches the PlayerState of the owner of this vehicle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsTriggerActor, PlayerState), Z_Construct_UClass_ASacrificePlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastHit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PhysicsTriggerActor" },
		{ "Comment", "/** The time when this vehicle was last hit */" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
		{ "ToolTip", "The time when this vehicle was last hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastHit = { "LastHit", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsTriggerActor, LastHit), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastOffender_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PhysicsTriggerActor" },
		{ "Comment", "/** The last vehicle to collide with this vehicle */" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
		{ "ToolTip", "The last vehicle to collide with this vehicle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastOffender = { "LastOffender", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsTriggerActor, LastOffender), Z_Construct_UClass_AWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastOffender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastOffender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_UsableItemComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PhysicsTriggerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PhysicsTriggerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_UsableItemComp = { "UsableItemComp", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsTriggerActor, UsableItemComp), Z_Construct_UClass_UUsableItemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_UsableItemComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_UsableItemComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsTriggerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_LastOffender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsTriggerActor_Statics::NewProp_UsableItemComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsTriggerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsTriggerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsTriggerActor_Statics::ClassParams = {
		&APhysicsTriggerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APhysicsTriggerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsTriggerActor_Statics::PropPointers),
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
	IMPLEMENT_CLASS(APhysicsTriggerActor, 809305561);
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
