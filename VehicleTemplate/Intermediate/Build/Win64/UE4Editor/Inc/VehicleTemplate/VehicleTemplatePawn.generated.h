// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLETEMPLATE_VehicleTemplatePawn_generated_h
#error "VehicleTemplatePawn.generated.h already included, missing '#pragma once' in VehicleTemplatePawn.h"
#endif
#define VEHICLETEMPLATE_VehicleTemplatePawn_generated_h

#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_SPARSE_DATA
#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_RPC_WRAPPERS
#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicleTemplatePawn(); \
	friend struct Z_Construct_UClass_AVehicleTemplatePawn_Statics; \
public: \
	DECLARE_CLASS(AVehicleTemplatePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(AVehicleTemplatePawn)


#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVehicleTemplatePawn(); \
	friend struct Z_Construct_UClass_AVehicleTemplatePawn_Statics; \
public: \
	DECLARE_CLASS(AVehicleTemplatePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(AVehicleTemplatePawn)


#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicleTemplatePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleTemplatePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleTemplatePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleTemplatePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleTemplatePawn(AVehicleTemplatePawn&&); \
	NO_API AVehicleTemplatePawn(const AVehicleTemplatePawn&); \
public:


#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleTemplatePawn(AVehicleTemplatePawn&&); \
	NO_API AVehicleTemplatePawn(const AVehicleTemplatePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleTemplatePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleTemplatePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehicleTemplatePawn)


#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AVehicleTemplatePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVehicleTemplatePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AVehicleTemplatePawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AVehicleTemplatePawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AVehicleTemplatePawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AVehicleTemplatePawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__MaxFlipTime() { return STRUCT_OFFSET(AVehicleTemplatePawn, MaxFlipTime); } \
	FORCEINLINE static uint32 __PPO__RotationLimit() { return STRUCT_OFFSET(AVehicleTemplatePawn, RotationLimit); } \
	FORCEINLINE static uint32 __PPO__UsableItemComp() { return STRUCT_OFFSET(AVehicleTemplatePawn, UsableItemComp); }


#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_16_PROLOG
#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_SPARSE_DATA \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_RPC_WRAPPERS \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_INCLASS \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_SPARSE_DATA \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_INCLASS_NO_PURE_DECLS \
	VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLETEMPLATE_API UClass* StaticClass<class AVehicleTemplatePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleTemplate_Source_VehicleTemplate_VehicleTemplatePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
