// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API ALobbyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	/** Returns the current player to the main menu */
	UFUNCTION(BlueprintCallable)
    void LoadMainMenu() const;

	/** If the client is the host, the game will start */
	UFUNCTION(BlueprintCallable)
    void StartGame() const;

	/** Returns the number of connected players */
	UFUNCTION(BlueprintCallable)
	int32 GetPlayersConnected() const;
};
