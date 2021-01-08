// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle SpawnDelayHandle;
	const FTimerDelegate SpawnDelayDelegate = FTimerDelegate::CreateUObject(this, &ASpawner::SpawnActor);
	GetWorld()->GetTimerManager().SetTimer(SpawnDelayHandle, SpawnDelayDelegate, SpawnDelay, false);
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner::SpawnActor_Implementation() const
{
	// Spawn an instance of the actor type in the world.
	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();
	const FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor(ActorType, &Location, &Rotation, SpawnInfo);
}
