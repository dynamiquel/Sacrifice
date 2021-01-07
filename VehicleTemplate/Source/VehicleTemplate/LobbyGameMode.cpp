// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

#include "LobbyPlayerController.h"

ALobbyGameMode::ALobbyGameMode()
{
    PlayerControllerClass = ALobbyPlayerController::StaticClass();
}
