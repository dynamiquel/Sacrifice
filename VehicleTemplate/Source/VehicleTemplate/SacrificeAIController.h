// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SacrificeAIController.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API ASacrificeAIController : public AAIController
{
	GENERATED_BODY()

public:
    class UWheeledVehicleMovementComponent* VehicleMovementComp;
    class UBehaviorTreeComponent* BehaviourTreeComp;
    class UBlackboardComponent* BlackboardComp;
    UPROPERTY(EditAnywhere, Category = "AI")
    class UBehaviorTree* BehaviorTree;

    ASacrificeAIController();

protected:
    virtual void OnPossess(APawn* InPawn) override;
};
