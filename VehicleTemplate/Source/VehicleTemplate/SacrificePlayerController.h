// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SacrificePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API ASacrificePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetPlayerEnabledState(bool SetPlayerEnabled);

protected:	
	virtual void SetupInputComponent() override;

	// UI is implemented in Blueprints since it works better than C++.
	UFUNCTION(BlueprintImplementableEvent)
	void OpenLeaderboard();
	UFUNCTION(BlueprintImplementableEvent)
    void CloseLeaderboard();
};
