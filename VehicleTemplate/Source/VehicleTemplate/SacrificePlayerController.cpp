// Fill out your copyright notice in the Description page of Project Settings.


#include "SacrificePlayerController.h"

void ASacrificePlayerController::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    if (SetPlayerEnabled)
        GetPawn()->EnableInput(this);
    else
        GetPawn()->DisableInput(this);
}

void ASacrificePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Opens the Leaderboard widget when the Leaderboard button has been pressed.
    InputComponent->BindAction("Leaderboard", IE_Pressed, this, &ASacrificePlayerController::OpenLeaderboard);
    InputComponent->BindAction("Leaderboard", IE_Released, this, &ASacrificePlayerController::CloseLeaderboard);
}