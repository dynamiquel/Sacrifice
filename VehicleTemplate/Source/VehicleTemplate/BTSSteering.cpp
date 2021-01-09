// Fill out your copyright notice in the Description page of Project Settings.


#include "BTSSteering.h"
#include "EngineUtils.h"
#include "VehicleTemplatePawn.h"

void UBTSSteering::OnGameplayTaskActivated(UGameplayTask& Task)
{
    //nothing here
    //This method must be overridden from the inherited interface
    //Otherwise, the linker will fail.
}

void UBTSSteering::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
    //nothing here
    //This method must be overridden from the inherited interface
    //Otherwise, the linker will fail.
}

void UBTSSteering::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    UWorld* World = OwnerComp.GetWorld();

    TActorIterator<AVehicleTemplatePawn> PlayerPawnIter(World);
    //Not particularly robust, but at least here we are dealing with only one player
    PlayerPawn = *PlayerPawnIter;
}
