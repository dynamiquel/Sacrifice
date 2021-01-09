// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTSSteering.generated.h"

/**
* 
*/
UCLASS()
class VEHICLETEMPLATE_API UBTSSteering : public UBTService
{
	GENERATED_BODY()
	
	private:
	UPROPERTY()
	class APawn* PlayerPawn;
	
	public:
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;

	protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
