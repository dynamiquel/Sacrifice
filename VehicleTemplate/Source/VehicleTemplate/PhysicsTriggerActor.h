// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "MyPlayerState.h"
#include "WheeledVehicle.h"
#include "GameFramework/Actor.h"
#include "PhysicsTriggerActor.generated.h"

UCLASS()
class VEHICLETEMPLATE_API APhysicsTriggerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhysicsTriggerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AWheeledVehicle* LastOffender;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FDateTime LastHit;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AMyPlayerState* PlayerState;

	void FindPlayerState();
	void ReceiveHit(AWheeledVehicle* OtherVehicle);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	void OnOverlap(AActor* OtherActor);
	UFUNCTION(BlueprintCallable)
	void OnDestroy();
};
