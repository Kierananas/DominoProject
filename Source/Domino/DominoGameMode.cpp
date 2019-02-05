// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DominoGameMode.h"
#include "DominoPlayerController.h"
#include "DominoPawn.h"

ADominoGameMode::ADominoGameMode()
{
	// no pawn by default
	DefaultPawnClass = ADominoPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ADominoPlayerController::StaticClass();
}
