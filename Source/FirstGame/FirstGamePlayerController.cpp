// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FirstGamePlayerController.h"

AFirstGamePlayerController::AFirstGamePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
