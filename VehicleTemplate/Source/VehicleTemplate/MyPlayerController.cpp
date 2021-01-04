// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    if (SetPlayerEnabled)
        GetPawn()->EnableInput(this);
    else
        GetPawn()->DisableInput(this);
}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    
    InputComponent->BindAction("Leaderboard", IE_Pressed, this, &AMyPlayerController::OpenLeaderboard);
    InputComponent->BindAction("Leaderboard", IE_Released, this, &AMyPlayerController::CloseLeaderboard);
}