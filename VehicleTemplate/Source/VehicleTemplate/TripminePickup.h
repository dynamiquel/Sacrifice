// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TripminePickup.generated.h"

UCLASS()
class VEHICLETEMPLATE_API ATripminePickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATripminePickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Called when something has collided with this actor */
	UFUNCTION(BlueprintCallable)
    void OnHit(AActor* OtherActor);

private:
	/** The type of item to be picked up */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UClass* ItemType;
};