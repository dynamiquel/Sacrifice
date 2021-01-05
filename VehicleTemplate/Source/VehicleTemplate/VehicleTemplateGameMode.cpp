// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "VehicleTemplateGameMode.h"


#include "MyGameState.h"
#include "MyPlayerController.h"
#include "VehicleTemplatePawn.h"
#include "VehicleTemplateHud.h"
#include "GameFramework/GameState.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"

AVehicleTemplateGameMode::AVehicleTemplateGameMode()
{
	DefaultPawnClass = AVehicleTemplatePawn::StaticClass();
	HUDClass = AVehicleTemplateHud::StaticClass();
}

void AVehicleTemplateGameMode::BeginPlay()
{	
	Super::BeginPlay();

	FindAllPlayerStarts();
	
	HandleGameStart();
}

void AVehicleTemplateGameMode::HandleGameStart()
{
	// Finds all the player controllers.
	TArray<AActor*> PlayerControllers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyPlayerController::StaticClass(), PlayerControllers);
	// Calls the Blueprint version of this function.
	GameStart();
	
	for (AActor* PlayerController : PlayerControllers)
	{
		AMyPlayerController* PlayerControllerRef = Cast<AMyPlayerController>(PlayerController);
		// Disables the pawn from user movement.
		PlayerControllerRef->SetPlayerEnabledState(false);
		
		// Starts a timer which enables pawn user movement when it has ended.
		FTimerHandle PlayerEnableHandle;
		FTimerDelegate PlayerEnableDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef,
			&AMyPlayerController::SetPlayerEnabledState, true);
		GetWorld()->GetTimerManager().SetTimer(PlayerEnableHandle, PlayerEnableDelegate, 5.f, false);
	}
}

void AVehicleTemplateGameMode::HandlePlayerDeath(AMyPlayerState* Victim, AMyPlayerState* Killer, AMyGameState* GameState)
{
	uint8 PlayersAlive = 0;
	APlayerState* LastAlivePlayerState = nullptr;

	if (!GameState)
	{
		UE_LOG(LogTemp, Warning, TEXT("GameState doesn't exist"));
		return;
	}
	if (GameState->PlayerArray.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerArray is empty"));
		return;
	}

	// For each PlayerState...
	for (APlayerState* Element : GameState->PlayerArray)
	{
		AMyPlayerState* PlayerState = Cast<AMyPlayerState>(Element);

		// Ignores if the current victim.
		if (PlayerState == Victim)
			continue;

		if (!PlayerState->IsDead)
		{
			PlayersAlive++;
			// Gets a reference of this alive player just so we know who the winner is.
			LastAlivePlayerState = PlayerState;
		}
	}

	// The victim was the final player so ignore.
	if (PlayersAlive == 0)
		return;

	Victim->IsDead = true;

	FString FeedText;
	
	if (Victim == Killer /* suicide */)
	{
		// Removes one point from this player.
		Victim->SetScore(Victim->GetScore() - 1.f);
		FeedText = FString::Printf(TEXT("%s committed suicide! (%d points)"),
			*Victim->GetPlayerName(), (int)Victim->GetScore());
	}
	else
	{
		// Gives the enemy one point.
		Killer->SetScore(Killer->GetScore() + 1.f);
		FeedText = FString::Printf(TEXT("%s killed %s (%d points)"),
			*Killer->GetPlayerName(), *Victim->GetPlayerName(), (int)Killer->GetScore());
	}

	// Outputs the death and the reason for it.
	GameState->PrintToFeed(FeedText);
	FeedText.Empty();

	// There is still one other player alive who will now be the winner.
	if (PlayersAlive == 1)
	{
		// Output LastAlivePlayerState won.
		FeedText = FString::Printf(TEXT("%s won the round!"), *LastAlivePlayerState->GetPlayerName());
	}
	// There are multiple players alive.
	else if (PlayersAlive > 1)
	{
		// Output the remaining number of players.
		FeedText = FString::Printf(TEXT("%d players remaining"), PlayersAlive);
	}

	GameState->PrintToFeed(FeedText);
}

// Custom Player Start so the players can spawn in an index-order.
AActor* AVehicleTemplateGameMode::FindPlayerStart_Implementation(AController* Player, const FString& IncomingName)
{
	// Just in case this method is for some reason called before BeginPlay, find all the Player Starts.
	if (PlayerStarts.Num() == 0)
		FindAllPlayerStarts();

	/* For some reason, during testing, every player spawns in twice and this messes up the spawn order.
	* The first spawn attempt is not the vehicle so it can be ignored. Skips every equal spawn (0, 2, 4..).
	*/
	if (SkipSpawnIncrement)
	{
		SkipSpawnIncrement = false;
		return PlayerStarts[0];
	}
	
	UE_LOG(LogTemp, Warning, TEXT("FindPlayerStart for %s: %d"), *Player->GetName(), CurrentPlayerStartIndex);
	
	AActor* PlayerStartToUse = PlayerStarts[CurrentPlayerStartIndex];

	// Increment the spawn position for the next vehicle.
	if (CurrentPlayerStartIndex + 1 >= PlayerStarts.Num())
		CurrentPlayerStartIndex = 0;
	else
		CurrentPlayerStartIndex++;

	// Skip the next spawn since it won't be a vehicle.
	SkipSpawnIncrement = true;
	return PlayerStartToUse;
}

// Finds all the Player Starts in the world and adds them to an array.
void AVehicleTemplateGameMode::FindAllPlayerStarts()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), PlayerStarts);
	UE_LOG(LogTemp, Warning, TEXT("PlayerStarts Count: %d"), PlayerStarts.Num());
}