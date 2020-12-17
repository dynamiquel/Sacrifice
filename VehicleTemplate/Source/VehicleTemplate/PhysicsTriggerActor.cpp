// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsTriggerActor.h"

#include "WheeledVehicle.h"

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
}

// Called every frame
void APhysicsTriggerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (GetActorLocation().Y <= -10.f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("Fall Death"));
	}
}

void APhysicsTriggerActor::OnOverlap(AActor* OtherActor)
{	
	// Ignore if self.
	if (OtherActor == GetParentActor())
		return;

	// Ignore if the other actor isn't a vehicle.
	if (!OtherActor->IsA(AWheeledVehicle::StaticClass()))
		return;
	
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, OtherActor->GetName());
	AWheeledVehicle* OtherVehicle = Cast<AWheeledVehicle>(OtherActor);

	LastOffender = OtherVehicle;
	LastHit = FDateTime().UtcNow();
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("Begin Overlap"));
}

void APhysicsTriggerActor::OnDestroy()
{
	FString DeathText;
	
	// Checks if this vehicle was hit by another several seconds ago.
	if (LastOffender && (FDateTime().UtcNow() - LastHit).GetTotalSeconds()  <= 7.5f)
	{
		DeathText = FString::Printf(TEXT("%s killed %s"), *LastOffender->GetName(), *GetParentActor()->GetName());
	}
	else
	{
		DeathText = FString::Printf(TEXT("%s committed suicide!"), *GetParentActor()->GetName());
	}
		GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Orange, DeathText);
}

