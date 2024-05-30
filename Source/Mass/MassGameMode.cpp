// Copyright Epic Games, Inc. All Rights Reserved.

#include "MassGameMode.h"
#include "MassCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMassGameMode::AMassGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
