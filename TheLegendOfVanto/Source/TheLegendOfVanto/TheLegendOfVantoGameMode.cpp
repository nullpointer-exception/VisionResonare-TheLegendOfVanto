// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheLegendOfVantoGameMode.h"
#include "TheLegendOfVantoCharacter.h"

ATheLegendOfVantoGameMode::ATheLegendOfVantoGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATheLegendOfVantoCharacter::StaticClass();	
}
