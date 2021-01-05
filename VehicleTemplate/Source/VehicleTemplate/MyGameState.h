// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API AMyGameState : public AGameState
{
	GENERATED_BODY()

	// First time using events in Unreal. I'm kinda surprised I got it working.
	public:
	// Responsible for outputting text (such as deaths and winners) to all the clients.
	void PrintToFeed(FString& Content) const;

	// I wasn't able to subscribe to the event directly through Blueprints so this is just a wrapper.
	// WBP_Feed calls this method in order to subscribe to the event.
	UFUNCTION(BlueprintCallable)
	void PrintToFeed_Subscribe(UObject* Object, FName FunctionName);

	DECLARE_EVENT_OneParam(AMyGameState, FPrintToFeedEvent, FString)
	FPrintToFeedEvent& OnPrintToFeed() { return PrintToFeedEvent; }

	private:
	FPrintToFeedEvent PrintToFeedEvent;
};
