// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_LastDayGameMode.h"
#include "UE5_LastDayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_LastDayGameMode::AUE5_LastDayGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
