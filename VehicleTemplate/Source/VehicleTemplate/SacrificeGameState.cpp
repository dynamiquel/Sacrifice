// Fill out your copyright notice in the Description page of Project Settings.


#include "SacrificeGameState.h"


void ASacrificeGameState::PrintToFeed(FString& Content) const
{
    PrintToFeedEvent.Broadcast(Content);
}

void ASacrificeGameState::PrintToFeed_Subscribe(UObject* Object, FName FunctionName)
{
    PrintToFeedEvent.AddUFunction(Object, FunctionName);
}