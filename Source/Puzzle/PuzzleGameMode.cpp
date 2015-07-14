// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Puzzle.h"
#include "PuzzleGameMode.h"
#include "PuzzlePlayerController.h"

APuzzleGameMode::APuzzleGameMode()
{
	// no pawn by default
	DefaultPawnClass = NULL;
	// use our own player controller class
	PlayerControllerClass = APuzzlePlayerController::StaticClass();
}
