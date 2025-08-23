// Copyright Epic Games, Inc. All Rights Reserved.

#include "Boy_Adventura_2025GameMode.h"
#include "Boy_Adventura_2025Character.h"
#include "UObject/ConstructorHelpers.h"

ABoy_Adventura_2025GameMode::ABoy_Adventura_2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
