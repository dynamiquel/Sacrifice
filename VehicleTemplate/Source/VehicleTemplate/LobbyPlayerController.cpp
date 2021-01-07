// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameStateBase.h"

void ALobbyPlayerController::LoadMainMenu() const
{
    // Tells the client to change to the main menu map.
    UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainMenu"), true);
}

void ALobbyPlayerController::StartGame() const
{
    // If this client is the Host.
    if (GetWorld()->GetGameState()->HasAuthority())
    {
        // Tells the server to change to the arena map.
        GetWorld()->ServerTravel(TEXT("VehicleExampleMap"), false, false);
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Only the Host can start the game!"));
    }
}

int32 ALobbyPlayerController::GetPlayersConnected() const
{
    return GetWorld()->GetGameState()->PlayerArray.Num();
}

