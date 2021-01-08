// Fill out your copyright notice in the Description page of Project Settings.


#include "Tripmine.h"
#include "PhysicsEngine/RadialForceComponent.h"

// Sets default values
ATripmine::ATripmine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATripmine::BeginPlay()
{
	Super::BeginPlay();

	// Starts a timer. When the timer completes, the mine will activate.
	FTimerHandle MineActivationHandle;
	const FTimerDelegate MineActivationDelegate = FTimerDelegate::CreateUObject(this, &ATripmine::ActivateMine);
	GetWorld()->GetTimerManager().SetTimer(MineActivationHandle, MineActivationDelegate, ActivationDelay, false);
}

// Called every frame
void ATripmine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATripmine::OnHit(const AActor* OtherActor)
{
	// Checks if the collider is a player.
	if (OtherActor && OtherActor->ActorHasTag(TEXT("Player")))
	{
		if (bActivated)
		{
			UE_LOG(LogTemp, Warning, TEXT("Tripmine exploded"));
			// Pushes the surrounding vehicles away.
			RadialForceComp->Activate();
		}
	}
}

void ATripmine::ActivateMine()
{
	UE_LOG(LogTemp, Warning, TEXT("Tripmine armed"));
	bActivated = true;
}
