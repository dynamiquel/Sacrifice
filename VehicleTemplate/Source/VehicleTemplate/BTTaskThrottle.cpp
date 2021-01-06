// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskThrottle.h"
#include <Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h>
#include <Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h>
#include <Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h>

#include "SacrificeAIController.h"
#include "WheeledVehicleMovementComponent4W.h"

EBTNodeResult::Type UBTTaskThrottle::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	ASacrificeAIController* AIController = Cast<ASacrificeAIController>(OwnerComp.GetAIOwner());

	if (AIController)
	{
		const float Throttle = FMath::RandRange(0.f, 1.f);

		AIController->VehicleMovementComp->SetThrottleInput(Throttle);

		return EBTNodeResult::Succeeded;
	}
	
	return EBTNodeResult::Failed;
}

void UBTTaskThrottle::OnGameplayTaskActivated(UGameplayTask & task)
{
	//This method must be overridden
	//Otherwise, the linker will fail.
}


