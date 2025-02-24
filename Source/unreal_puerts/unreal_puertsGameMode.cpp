// Copyright Epic Games, Inc. All Rights Reserved.

#include "unreal_puertsGameMode.h"
#include "unreal_puertsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aunreal_puertsGameMode::Aunreal_puertsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/TypeScript/TS_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
