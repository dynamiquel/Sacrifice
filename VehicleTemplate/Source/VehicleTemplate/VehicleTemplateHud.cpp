// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "VehicleTemplateHud.h"
#include "VehicleTemplatePawn.h"
#include "WheeledVehicle.h"
#include "RenderResource.h"
#include "Shader.h"
#include "Engine/Canvas.h"
#include "WheeledVehicleMovementComponent.h"
#include "Engine/Font.h"
#include "CanvasItem.h"
#include "PhysicsTriggerActor.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "VehicleHUD"

AVehicleTemplateHud::AVehicleTemplateHud()
{
	static ConstructorHelpers::FObjectFinder<UFont> Font(TEXT("/Engine/EngineFonts/RobotoDistanceField"));
	HUDFont = Font.Object;
}

void AVehicleTemplateHud::DrawHUD()
{
	Super::DrawHUD();

	// Calculate ratio from 720p
	const float HUDXRatio = Canvas->SizeX / 1280.f;
	const float HUDYRatio = Canvas->SizeY / 720.f;

	bool bWantHUD = true;
#if HMD_MODULE_INCLUDED
	bWantHUD = !GEngine->IsStereoscopic3D();
#endif // HMD_MODULE_INCLUDED
	// We dont want the onscreen hud when using a HMD device	
	if (bWantHUD == true)
	{
		// Get our vehicle so we can check if we are in car. If we are we don't want onscreen HUD
		AVehicleTemplatePawn* Vehicle = Cast<AVehicleTemplatePawn>(GetOwningPawn());
		if ((Vehicle != nullptr) && (Vehicle->bInCarCameraActive == false))
		{
			FVector2D ScaleVec(HUDYRatio * 1.4f, HUDYRatio * 1.4f);

			// Speed
			FCanvasTextItem SpeedTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 455), Vehicle->SpeedDisplayString, HUDFont, FLinearColor::White);
			SpeedTextItem.Scale = ScaleVec;
			Canvas->DrawItem(SpeedTextItem);

			// Gear
			FCanvasTextItem GearTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 500.f), Vehicle->GearDisplayString, HUDFont, Vehicle->bInReverseGear == false ? Vehicle->GearDisplayColor : Vehicle->GearDisplayReverseColor);
			GearTextItem.Scale = ScaleVec;
			Canvas->DrawItem(GearTextItem);

			// Player State loaded
			if (Vehicle->GetPlayerState())
			{
				// Score
				FCanvasTextItem ScoreTextItem(FVector2D(HUDXRatio * 1150, HUDYRatio * 670), FText::FromString(FString::Printf(TEXT("Score: %d"), (int)Vehicle->GetPlayerState()->GetScore())), HUDFont, FLinearColor::White);
				ScoreTextItem.Scale = ScaleVec;
				Canvas->DrawItem(ScoreTextItem);

				// Death feed
				FCanvasTextItem DeathFeedTextItem(FVector2D(HUDXRatio * 40, HUDYRatio * 600), FText::AsNumber(353535), HUDFont, FLinearColor::White);
				DeathFeedTextItem.Scale = ScaleVec * .5f;
				Canvas->DrawItem(DeathFeedTextItem);
			}
		}
	}
}


#undef LOCTEXT_NAMESPACE
