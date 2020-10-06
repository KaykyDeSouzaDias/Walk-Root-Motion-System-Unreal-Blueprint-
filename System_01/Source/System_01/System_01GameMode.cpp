// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "System_01GameMode.h"
#include "System_01Character.h"
#include "UObject/ConstructorHelpers.h"

ASystem_01GameMode::ASystem_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
