// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FirstGameGameMode.h"
#include "FirstGamePlayerController.h"
#include "FirstGamePawn.h"

AFirstGameGameMode::AFirstGameGameMode()
{
	// no pawn by default
	DefaultPawnClass = AFirstGamePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AFirstGamePlayerController::StaticClass();
}
