// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "VehicleTemplateGameMode.h"

#include "MyPlayerController.h"
#include "VehicleTemplatePawn.h"
#include "VehicleTemplateHud.h"
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
	TArray<AActor*> PlayerControllers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyPlayerController::StaticClass(), PlayerControllers);
	
	GameStart();
	
	for (AActor* PlayerController : PlayerControllers)
	{
		AMyPlayerController* PlayerControllerRef = Cast<AMyPlayerController>(PlayerController);
		PlayerControllerRef->SetPlayerEnabledState(false);

		FTimerHandle PlayerEnableHandle;
		FTimerDelegate PlayerEnableDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef,
			&AMyPlayerController::SetPlayerEnabledState, true);
		GetWorld()->GetTimerManager().SetTimer(PlayerEnableHandle, PlayerEnableDelegate, 5.f, false);
	}
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