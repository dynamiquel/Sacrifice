// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "MyGameState.h"
#include "MyPlayerState.h"
#include "GameFramework/GameMode.h"

#include "VehicleTemplateGameMode.generated.h"

UCLASS(minimalapi)
class AVehicleTemplateGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AVehicleTemplateGameMode();

protected:
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent)
	void GameStart();
	UFUNCTION(BlueprintImplementableEvent)
	void GameOver();

public:
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) override;
	void HandlePlayerDeath(AMyPlayerState* Victim, AMyPlayerState* Killer, AMyGameState* GameState);
	
private:
	UPROPERTY()
	TArray<AActor*> PlayerStarts;
	int32 CurrentPlayerStartIndex = 0;
	bool SkipSpawnIncrement = true;
	
	void FindAllPlayerStarts();
	void HandleGameStart();
	void HandleGameOver();
};



