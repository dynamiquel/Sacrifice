// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsTriggerActor.h"
#include "SacrificePlayerState.h"
#include "SacrificeGameMode.h"
#include "WheeledVehicle.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameState.h"


// Sets default values
APhysicsTriggerActor::APhysicsTriggerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhysicsTriggerActor::BeginPlay()
{
	Super::BeginPlay();

	FindPlayerState();
}

// Called every frame
void APhysicsTriggerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (GetActorLocation().Z <= -15.f)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Orange, TEXT("Falling"));
	}

	// I can't seem to get round the issue where the non-host player cannot retrieve its PlayerState in BeginPlay.
	// This method keeps attempting to get the PlayerState.
	if (!PlayerState)
		FindPlayerState();
}

void APhysicsTriggerActor::OnOverlap(AActor* OtherActor)
{	
	// Ignore if self or if the other actor isn't a vehicle.
	if (OtherActor == GetParentActor() || !OtherActor->IsA(AWheeledVehicle::StaticClass()))
		return;

	const FString OverlapText = FString::Printf(TEXT("Overlapping with %s"), *OtherActor->GetName());
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Magenta, OverlapText);
	
	AWheeledVehicle* OtherVehicle = Cast<AWheeledVehicle>(OtherActor);
	ReceiveHit(OtherVehicle);
}

void APhysicsTriggerActor::OnDestroy()
{
	if (!PlayerState)
		return;
	
	FString DeathText;
	ASacrificeGameState* GameState = Cast<ASacrificeGameState>(GetWorld()->GetGameState());
	ASacrificeGameMode* GameMode = Cast<ASacrificeGameMode>(GameState->GameModeClass);
	
	// Checks if this vehicle was hit by another several seconds ago.
	if (LastOffender && (FDateTime().UtcNow() - LastHit).GetTotalSeconds()  <= 7.f)
		KilledByOther(GameState, GameMode);
	else /* suicide */
		KilledBySelf(GameState, GameMode);
}

void APhysicsTriggerActor::FindPlayerState()
{
	AWheeledVehicle* ThisVehicle = Cast<AWheeledVehicle>(GetParentActor());
	if (!ThisVehicle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to get Parent for %s"), *GetName());
		return;
	}
		
	PlayerState = ThisVehicle->GetPlayerState<ASacrificePlayerState>();

	if (PlayerState)
		UE_LOG(LogTemp, Log, TEXT("Retrieved PlayerState for %s"), *ThisVehicle->GetName());
}

void APhysicsTriggerActor::ReceiveHit(AWheeledVehicle* OtherVehicle)
{
	LastOffender = OtherVehicle;
	LastHit = FDateTime().UtcNow();
}

void APhysicsTriggerActor::KilledByOther(ASacrificeGameState* GameState, ASacrificeGameMode* GameMode)
{
	ASacrificePlayerState* EnemyPlayerState = LastOffender->GetPlayerState<ASacrificePlayerState>();
	if (!EnemyPlayerState)
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to get PlayerState for %s"), *LastOffender->GetName());
	}
	else
	{
		GameMode->HandlePlayerDeath(PlayerState, EnemyPlayerState, GameState);
	}
}

void APhysicsTriggerActor::KilledBySelf(ASacrificeGameState* GameState, ASacrificeGameMode* GameMode) const
{
	GameMode->HandlePlayerDeath(PlayerState, PlayerState, GameState);
}
