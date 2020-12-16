// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTemplate/VehicleTemplatePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleTemplatePawn() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AVehicleTemplatePawn_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AVehicleTemplatePawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVehicleTemplatePawn::execOnHit)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AVehicleTemplatePawn::StaticRegisterNativesAVehicleTemplatePawn()
	{
		UClass* Class = AVehicleTemplatePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AVehicleTemplatePawn::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics
	{
		struct VehicleTemplatePawn_eventOnHit_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleTemplatePawn_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleTemplatePawn_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleTemplatePawn_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleTemplatePawn_eventOnHit_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::NewProp_SelfActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The delegate function for handling a hit event.\n" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "The delegate function for handling a hit event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleTemplatePawn, nullptr, "OnHit", nullptr, nullptr, sizeof(VehicleTemplatePawn_eventOnHit_Parms), Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleTemplatePawn_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleTemplatePawn_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVehicleTemplatePawn_NoRegister()
	{
		return AVehicleTemplatePawn::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleTemplatePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInReverseGear_MetaData[];
#endif
		static void NewProp_bInReverseGear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReverseGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCarCameraActive_MetaData[];
#endif
		static void NewProp_bInCarCameraActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCarCameraActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayReverseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayReverseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GearDisplayString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SpeedDisplayString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleTemplatePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehicleTemplatePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicleTemplatePawn_OnHit, "OnHit" }, // 2077795010
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VehicleTemplatePawn.h" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInReverseGear_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Are we in reverse gear */" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "Are we in reverse gear" },
	};
#endif
	void Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInReverseGear_SetBit(void* Obj)
	{
		((AVehicleTemplatePawn*)Obj)->bInReverseGear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInReverseGear = { "bInReverseGear", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleTemplatePawn), &Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInReverseGear_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInReverseGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInReverseGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInCarCameraActive_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Are we using incar camera */" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "Are we using incar camera" },
	};
#endif
	void Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInCarCameraActive_SetBit(void* Obj)
	{
		((AVehicleTemplatePawn*)Obj)->bInCarCameraActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInCarCameraActive = { "bInCarCameraActive", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleTemplatePawn), &Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInCarCameraActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInCarCameraActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInCarCameraActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayReverseColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The color of the incar gear text when in reverse */" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "The color of the incar gear text when in reverse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayReverseColor = { "GearDisplayReverseColor", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, GearDisplayReverseColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayReverseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayReverseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The color of the incar gear text in forward gears */" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "The color of the incar gear text in forward gears" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayColor = { "GearDisplayColor", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, GearDisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The current gear as a string (R,N, 1,2 etc) */" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "The current gear as a string (R,N, 1,2 etc)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayString = { "GearDisplayString", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, GearDisplayString), METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpeedDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The current speed as a string eg 10 km/h */" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "The current speed as a string eg 10 km/h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpeedDisplayString = { "SpeedDisplayString", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, SpeedDisplayString), METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpeedDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpeedDisplayString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarGear_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Text component for the In-Car gear */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "Text component for the In-Car gear" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarGear = { "InCarGear", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, InCarGear), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Text component for the In-Car speed */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "Text component for the In-Car speed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarSpeed = { "InCarSpeed", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, InCarSpeed), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera component for the In-Car view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "Camera component for the In-Car view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCamera = { "InternalCamera", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, InternalCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** SCene component for the In-Car view origin */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "SCene component for the In-Car view origin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCameraBase = { "InternalCameraBase", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, InternalCameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCameraBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera component that will be our viewpoint */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "Camera component that will be our viewpoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Spring arm that will offset the camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VehicleTemplatePawn.h" },
		{ "ToolTip", "Spring arm that will offset the camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleTemplatePawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicleTemplatePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInReverseGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_bInCarCameraActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayReverseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_GearDisplayString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpeedDisplayString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InCarSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_InternalCameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleTemplatePawn_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleTemplatePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleTemplatePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleTemplatePawn_Statics::ClassParams = {
		&AVehicleTemplatePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVehicleTemplatePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleTemplatePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTemplatePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleTemplatePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleTemplatePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleTemplatePawn, 1791283266);
	template<> VEHICLETEMPLATE_API UClass* StaticClass<AVehicleTemplatePawn>()
	{
		return AVehicleTemplatePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleTemplatePawn(Z_Construct_UClass_AVehicleTemplatePawn, &AVehicleTemplatePawn::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AVehicleTemplatePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleTemplatePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
