// Fill out your copyright notice in the Description page of Project Settings.


#include "TripminePickup.h"
#include "VehicleTemplatePawn.h"

// Sets default values
ATripminePickup::ATripminePickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATripminePickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATripminePickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATripminePickup::OnHit(AActor* OtherActor)
{
	// Null-check.
	if (!OtherActor)
		return;
	
	AVehicleTemplatePawn* Vehicle = Cast<AVehicleTemplatePawn>(OtherActor);
	if (!Vehicle)
		return;

	// Adds the item type to the Usable Item Component.
	if (Vehicle->GetUsableItemComp()->PickupItem(ItemType))
	{
		// Destroys this actor since the item has been picked up.
		Destroy();
	}
}

