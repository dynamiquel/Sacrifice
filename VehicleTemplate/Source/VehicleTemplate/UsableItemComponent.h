// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UsableItemComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VEHICLETEMPLATE_API UUsableItemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUsableItemComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Spawns the item on the ground (if an item is available) */
	void UseItem();
	/** Stores the item type so it can be spawned later. Returns false if the player already has an item */
	bool PickupItem(UClass* Item);

	/** Spawns the actor on the server so it is replicated across all clients */
	UFUNCTION(Server, Reliable)
	void SpawnItem(UClass* UsableItem, const FVector& Location, const FRotator& Rotation);

private:
	/** The type of item to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UClass* UsableItem;

};
