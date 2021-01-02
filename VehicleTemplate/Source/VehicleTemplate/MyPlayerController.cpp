// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    if (SetPlayerEnabled)
        GetPawn()->EnableInput(this);
    else
        GetPawn()->DisableInput(this);
}
