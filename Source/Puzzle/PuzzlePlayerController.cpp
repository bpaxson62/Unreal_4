// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Puzzle.h"
#include "PuzzlePlayerController.h"

APuzzlePlayerController::APuzzlePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
