// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/Widget.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API AMyPlayerController : public APlayerController
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
