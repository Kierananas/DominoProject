// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DominoPlayerController.h"

ADominoPlayerController::ADominoPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
