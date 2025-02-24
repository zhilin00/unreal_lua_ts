// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue4LuaGameMode.h"
#include "ue4LuaCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue4LuaGameMode::Aue4LuaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	// ªÒ»°¿∂Õº¿‡
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/LuaVersion/LuaCharactor"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
