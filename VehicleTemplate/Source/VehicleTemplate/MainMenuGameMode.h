// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	/** The client will start a new networked lobby */
	UFUNCTION(BlueprintCallable)
	void HostGame() const;

	/** The client will join a session with the given IP */
	UFUNCTION(BlueprintCallable)
	void JoinGame(FString IPAddress) const;

	/** Exits the application */
	UFUNCTION(BlueprintCallable)
	void QuitGame() const;
};
