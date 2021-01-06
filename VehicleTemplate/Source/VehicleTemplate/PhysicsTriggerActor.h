// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SacrificeGameMode.h"
#include "GameFramework/Actor.h"
#include "PhysicsTriggerActor.generated.h"

UCLASS()
class VEHICLETEMPLATE_API APhysicsTriggerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhysicsTriggerActor();

	// Called when the vehicle is overlapping with another
	UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor);
	// Called when the vehicle has been destroyed
	UFUNCTION(BlueprintCallable)
    void OnDestroy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class AWheeledVehicle* LastOffender;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FDateTime LastHit;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class ASacrificePlayerState* PlayerState;

	void FindPlayerState();
	void ReceiveHit(AWheeledVehicle* OtherVehicle);
	void KilledByOther(ASacrificeGameState* GameState, ASacrificeGameMode* GameMode);
	void KilledBySelf(ASacrificeGameState* GameState, ASacrificeGameMode* GameMode) const;
};
