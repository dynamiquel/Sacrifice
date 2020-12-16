// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLETEMPLATE_AdvCarTemplatePawn_generated_h
#error "AdvCarTemplatePawn.generated.h already included, missing '#pragma once' in AdvCarTemplatePawn.h"
#endif
#define VEHICLETEMPLATE_AdvCarTemplatePawn_generated_h

#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_SPARSE_DATA
#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_RPC_WRAPPERS
#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvCarTemplatePawn(); \
	friend struct Z_Construct_UClass_AAdvCarTemplatePawn_Statics; \
public: \
	DECLARE_CLASS(AAdvCarTemplatePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(AAdvCarTemplatePawn)


#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAdvCarTemplatePawn(); \
	friend struct Z_Construct_UClass_AAdvCarTemplatePawn_Statics; \
public: \
	DECLARE_CLASS(AAdvCarTemplatePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(AAdvCarTemplatePawn)


#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvCarTemplatePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvCarTemplatePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvCarTemplatePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvCarTemplatePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvCarTemplatePawn(AAdvCarTemplatePawn&&); \
	NO_API AAdvCarTemplatePawn(const AAdvCarTemplatePawn&); \
public:


#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvCarTemplatePawn(AAdvCarTemplatePawn&&); \
	NO_API AAdvCarTemplatePawn(const AAdvCarTemplatePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvCarTemplatePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvCarTemplatePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdvCarTemplatePawn)


#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AAdvCarTemplatePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AAdvCarTemplatePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AAdvCarTemplatePawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AAdvCarTemplatePawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AAdvCarTemplatePawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AAdvCarTemplatePawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(AAdvCarTemplatePawn, EngineSoundComponent); }


#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_16_PROLOG
#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_SPARSE_DATA \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_RPC_WRAPPERS \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_INCLASS \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_SPARSE_DATA \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_INCLASS_NO_PURE_DECLS \
	VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLETEMPLATE_API UClass* StaticClass<class AAdvCarTemplatePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleTemplate_Source_VehicleTemplate_AdvCarTemplatePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
