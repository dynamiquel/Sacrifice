// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef VEHICLETEMPLATE_PhysicsTriggerActor_generated_h
#error "PhysicsTriggerActor.generated.h already included, missing '#pragma once' in PhysicsTriggerActor.h"
#endif
#define VEHICLETEMPLATE_PhysicsTriggerActor_generated_h

#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_SPARSE_DATA
#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnOverlap);


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnOverlap);


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsTriggerActor(); \
	friend struct Z_Construct_UClass_APhysicsTriggerActor_Statics; \
public: \
	DECLARE_CLASS(APhysicsTriggerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(APhysicsTriggerActor)


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsTriggerActor(); \
	friend struct Z_Construct_UClass_APhysicsTriggerActor_Statics; \
public: \
	DECLARE_CLASS(APhysicsTriggerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(APhysicsTriggerActor)


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsTriggerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsTriggerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsTriggerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsTriggerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsTriggerActor(APhysicsTriggerActor&&); \
	NO_API APhysicsTriggerActor(const APhysicsTriggerActor&); \
public:


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsTriggerActor(APhysicsTriggerActor&&); \
	NO_API APhysicsTriggerActor(const APhysicsTriggerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsTriggerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsTriggerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhysicsTriggerActor)


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UsableItemComp() { return STRUCT_OFFSET(APhysicsTriggerActor, UsableItemComp); } \
	FORCEINLINE static uint32 __PPO__LastOffender() { return STRUCT_OFFSET(APhysicsTriggerActor, LastOffender); } \
	FORCEINLINE static uint32 __PPO__LastHit() { return STRUCT_OFFSET(APhysicsTriggerActor, LastHit); } \
	FORCEINLINE static uint32 __PPO__PlayerState() { return STRUCT_OFFSET(APhysicsTriggerActor, PlayerState); }


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_10_PROLOG
#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_SPARSE_DATA \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_RPC_WRAPPERS \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_INCLASS \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_SPARSE_DATA \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_INCLASS_NO_PURE_DECLS \
	VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLETEMPLATE_API UClass* StaticClass<class APhysicsTriggerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleTemplate_Source_VehicleTemplate_PhysicsTriggerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
