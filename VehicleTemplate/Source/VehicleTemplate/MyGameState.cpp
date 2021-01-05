// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"

void AMyGameState::PrintToFeed(FString& Content) const
{
    PrintToFeedEvent.Broadcast(Content);
}

void AMyGameState::PrintToFeed_Subscribe(UObject* Object, FName FunctionName)
{
    PrintToFeedEvent.AddUFunction(Object, FunctionName);
}