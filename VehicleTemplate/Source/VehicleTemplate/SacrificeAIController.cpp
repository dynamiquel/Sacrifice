// Fill out your copyright notice in the Description page of Project Settings.


#include "SacrificeAIController.h"


#include "WheeledVehicle.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ASacrificeAIController::ASacrificeAIController()
{
    VehicleMovementComp = nullptr;
    BehaviourTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("AIVehicleBehaviourComp"));
    BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("AIVehicleBlackboardComp"));
}

void ASacrificeAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
    UE_LOG(LogTemp, Warning, TEXT("Possessed"));

    AWheeledVehicle* AIVehicle = Cast<AWheeledVehicle>(InPawn);

    if (AIVehicle)
        VehicleMovementComp = AIVehicle->GetVehicleMovementComponent();
    
    if (BehaviorTree->BlackboardAsset)
        BlackboardComp->InitializeBlackboard(*BehaviorTree->BlackboardAsset);

    BehaviourTreeComp->StartTree(*BehaviorTree);
}
