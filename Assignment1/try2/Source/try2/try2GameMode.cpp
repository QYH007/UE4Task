// Copyright Epic Games, Inc. All Rights Reserved.

#include "try2GameMode.h"
#include "try2HUD.h"
#include "try2Character.h"
#include "UObject/ConstructorHelpers.h"

Atry2GameMode::Atry2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atry2HUD::StaticClass();
}
