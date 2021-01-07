// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Kismet/GameplayStatics.h"

void AMainMenuGameMode::HostGame() const
{
    // The 'listen' option starts a server so other users can join.
    UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"), true, TEXT("listen"));
}

void AMainMenuGameMode::JoinGame(const FString IPAddress) const
{
    // OpenLevel can also be used to join servers, when an IP address is given.
    UGameplayStatics::OpenLevel(GetWorld(), *IPAddress);
}

void AMainMenuGameMode::QuitGame() const
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}
