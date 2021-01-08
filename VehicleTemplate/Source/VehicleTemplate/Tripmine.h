// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tripmine.generated.h"

UCLASS()
class VEHICLETEMPLATE_API ATripmine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATripmine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Called when something has collided with this actor */
	UFUNCTION(BlueprintCallable)
    void OnHit(const AActor* OtherActor);

private:
	/** The visible mesh */
	UPROPERTY(BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UPrimitiveComponent* MeshComp;

	/** The force component used to push the vehicles */
	UPROPERTY(BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class URadialForceComponent* RadialForceComp;

	bool bActivated = false;
	float ActivationDelay = 2.f;

	void ActivateMine();
};
