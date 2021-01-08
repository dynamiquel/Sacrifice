// Fill out your copyright notice in the Description page of Project Settings.


#include "UsableItemComponent.h"
#include "GameFramework/GameStateBase.h"

class ASacrificeGameMode;
// Sets default values for this component's properties
UUsableItemComponent::UUsableItemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUsableItemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUsableItemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UUsableItemComponent::PickupItem(UClass* Item)
{
	if (UsableItem)
		return false;
	
	UsableItem = Item;
	return true;
}

void UUsableItemComponent::UseItem()
{
	// Player has no item to use.
	if (!UsableItem)
		return;

	// Spawn an instance of the item in the world.
	const FVector Location = GetOwner()->GetActorLocation();
	const FRotator Rotation(0.f, 0.f, 0.f);

	SpawnItem(UsableItem, Location, Rotation);

	// Removes the item.
	UsableItem = nullptr;
}

void UUsableItemComponent::SpawnItem_Implementation(UClass* UsableItem, const FVector& Location,
    const FRotator& Rotation)
{
	GetWorld()->SpawnActor(UsableItem, &Location, &Rotation);
}


