#include "SacrificeGameMode.h"

#include "SacrificeGameState.h"
#include "SacrificePlayerState.h"
#include "SacrificePlayerController.h"
#include "VehicleTemplatePawn.h"
#include "VehicleTemplateHud.h"
#include "GameFramework/GameState.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"

ASacrificeGameMode::ASacrificeGameMode()
{
	DefaultPawnClass = AVehicleTemplatePawn::StaticClass();
	HUDClass = AVehicleTemplateHud::StaticClass();
}

void ASacrificeGameMode::BeginPlay()
{	
	Super::BeginPlay();

	FindAllPlayerStarts();
	HandleGameStart();
}

void ASacrificeGameMode::HandleGameStart()
{
	// Gets all the player controllers in the level.
	TArray<AActor*> PlayerControllers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASacrificePlayerController::StaticClass(), PlayerControllers);
	// Calls the Blueprint version of this function.
	GameStart();
	
	for (AActor* PlayerController : PlayerControllers)
	{
		ASacrificePlayerController* PlayerControllerRef = Cast<ASacrificePlayerController>(PlayerController);
		// Disables the pawn from user movement.
		PlayerControllerRef->SetPlayerEnabledState(false);
		
		// Starts a timer which enables pawn user movement when it has ended.
		FTimerHandle PlayerEnableHandle;
		FTimerDelegate PlayerEnableDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef,
			&ASacrificePlayerController::SetPlayerEnabledState, true);
		GetWorld()->GetTimerManager().SetTimer(PlayerEnableHandle, PlayerEnableDelegate, 5.f, false);
	}
}

FString ASacrificeGameMode::UpdatePlayerStateAndGetDeathMessage(ASacrificePlayerState* Victim, ASacrificePlayerState* Killer)
{
	Victim->IsDead = true;
	
	if (Victim == Killer /* suicide */)
	{
		// Removes one point from this player.
		Victim->SetScore(Victim->GetScore() - 1.f);
		return FString::Printf(TEXT("%s committed suicide! (%d points)"),
		                           *Victim->GetPlayerName(), (int)Victim->GetScore());
	}
	else
	{
		// Gives the enemy one point.
		Killer->SetScore(Killer->GetScore() + 1.f);
		return FString::Printf(TEXT("%s killed %s (%d points)"),
		                           *Killer->GetPlayerName(), *Victim->GetPlayerName(), (int)Killer->GetScore());
	}
}

// Returns the number of players whom are still alive, as well as a reference to a surviving player (if available).
void ASacrificeGameMode::GetRemainingPlayers(ASacrificePlayerState* Victim, ASacrificeGameState* GameState,
	OUT uint8& PlayersAlive, OUT APlayerState*& LastAlivePlayerState) const
{
	// For each PlayerState...
	for (APlayerState* Element : GameState->PlayerArray)
	{
		ASacrificePlayerState* PlayerState = Cast<ASacrificePlayerState>(Element);

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
}

void ASacrificeGameMode::RoundOver(APlayerState* LastAlivePlayerState, OUT FString& FeedText)
{
	// Output LastAlivePlayerState won.
	FeedText = FString::Printf(TEXT("%s won the round!"), *LastAlivePlayerState->GetPlayerName());
}

void ASacrificeGameMode::PlayersRemaining(uint8 PlayersAlive, FString& FeedText)
{
	// Output the remaining number of players.
	FeedText = FString::Printf(TEXT("%d players remaining"), PlayersAlive);
}

void ASacrificeGameMode::HandlePlayerDeath(ASacrificePlayerState* Victim, ASacrificePlayerState* Killer,
                                           ASacrificeGameState* GameState)
{
	// Error checks.
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

	uint8 PlayersAlive = 0;
	APlayerState* LastAlivePlayerState;
	GetRemainingPlayers(Victim, GameState, OUT PlayersAlive, OUT LastAlivePlayerState);

	// The victim was the final player so ignore.
	if (PlayersAlive == 0)
		return;

	

	FString FeedText = UpdatePlayerStateAndGetDeathMessage(Victim, Killer);

	// Outputs the death and the reason for it.
	GameState->PrintToFeed(FeedText);
	FeedText.Empty();

	// There is still one other player alive who will now be the winner.
	if (PlayersAlive == 1)
		RoundOver(LastAlivePlayerState, OUT FeedText);
	// There are multiple players alive.
	else if (PlayersAlive > 1)
		PlayersRemaining(PlayersAlive, OUT FeedText);

	GameState->PrintToFeed(FeedText);
}

// Custom Player Start so the players can spawn in an index-order.
AActor* ASacrificeGameMode::FindPlayerStart_Implementation(AController* Player, const FString& IncomingName)
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
void ASacrificeGameMode::FindAllPlayerStarts()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), PlayerStarts);
	UE_LOG(LogTemp, Warning, TEXT("PlayerStarts Count: %d"), PlayerStarts.Num());
}