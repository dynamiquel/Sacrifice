#pragma once
#include "SacrificeGameState.h"
#include "GameFramework/GameMode.h"
#include "SacrificeGameMode.generated.h"

class ASacrificePlayerState;

UCLASS(minimalapi)
class ASacrificeGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ASacrificeGameMode();

protected:
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent)
	void GameStart();
	UFUNCTION(BlueprintImplementableEvent)
	void GameOver();

public:
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) override;
	void HandlePlayerDeath(ASacrificePlayerState* Victim, ASacrificePlayerState* Killer, ASacrificeGameState* GameState);
	
private:
	UPROPERTY()
	TArray<AActor*> PlayerStarts;
	int32 CurrentPlayerStartIndex = 0;
	bool SkipSpawnIncrement = true;
	
	void FindAllPlayerStarts();
	void HandleGameStart();
	static FString UpdatePlayerStateAndGetDeathMessage(ASacrificePlayerState* Victim, ASacrificePlayerState* Killer);
	void GetRemainingPlayers(ASacrificePlayerState* Victim, ASacrificeGameState* GameState, OUT uint8& PlayersAlive,
	                         OUT APlayerState*& LastAlivePlayerState) const;
	static void RoundOver(APlayerState* LastAlivePlayerState, OUT FString& FeedText);
	static void PlayersRemaining(uint8 PlayersAlive, OUT FString& FeedText);
	void HandleGameOver();
};



