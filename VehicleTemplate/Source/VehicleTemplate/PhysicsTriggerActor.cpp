// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsTriggerActor.h"


#include "MyPlayerState.h"
#include "WheeledVehicle.h"
#include "Compression/lz4.h"
#include "Kismet/GameplayStatics.h"

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

	SetPlayerState();
}

// Called every frame
void APhysicsTriggerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (GetActorLocation().Y <= -10.f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Orange, TEXT("Fall Death"));
	}

	// I can't seem to get round the issue where the second player cannot retrieve its PlayerState in BeginPlay.
	// This method keeps attempting to get the PlayerState.
	if (!PlayerState)
		SetPlayerState();
}

void APhysicsTriggerActor::SetPlayerState()
{
	AWheeledVehicle* ThisVehicle = Cast<AWheeledVehicle>(GetParentActor());
	if (!ThisVehicle)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Red, TEXT("Unable to get Parent"));
		return;
	}
		
	PlayerState = ThisVehicle->GetPlayerState<AMyPlayerState>();

	if (PlayerState)
		GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Red, TEXT("Retrieved PlayerState"));
}

void APhysicsTriggerActor::ReceiveHit(AWheeledVehicle* OtherVehicle)
{
	LastOffender = OtherVehicle;
	LastHit = FDateTime().UtcNow();
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
	
	// Checks if this vehicle was hit by another several seconds ago.
	if (LastOffender && (FDateTime().UtcNow() - LastHit).GetTotalSeconds()  <= 10.f)
	{
		AMyPlayerState* EnemyPlayerState = LastOffender->GetPlayerState<AMyPlayerState>();
		if (!EnemyPlayerState)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Red, TEXT("Unable to get PlayerState"));
		}
		else
		{
			// Gives the enemy one point.
			EnemyPlayerState->SetScore(EnemyPlayerState->GetScore() + 1.f);

			DeathText = FString::Printf(TEXT("%s killed %s (%f points)"),
                *EnemyPlayerState->GetPlayerName(), *PlayerState->GetPlayerName(), EnemyPlayerState->GetScore());
		}
	}
	else /* suicide */
	{
		// Removes one point from this player.
		PlayerState->SetScore(PlayerState->GetScore() - 1.f);

		DeathText = FString::Printf(TEXT("%s committed suicide! (%f points)"),
			*PlayerState->GetPlayerName(), PlayerState->GetScore());
	}

	// Outputs the death and the reason for it.
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Orange, DeathText);
}

