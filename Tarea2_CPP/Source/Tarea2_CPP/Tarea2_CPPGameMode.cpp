// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tarea2_CPPGameMode.h"
#include "Tarea2_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATarea2_CPPGameMode::ATarea2_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
