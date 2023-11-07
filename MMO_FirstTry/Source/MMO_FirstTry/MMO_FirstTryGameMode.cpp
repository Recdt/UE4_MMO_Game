// Copyright Epic Games, Inc. All Rights Reserved.

#include "MMO_FirstTryGameMode.h"
#include "MMO_FirstTryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMMO_FirstTryGameMode::AMMO_FirstTryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
