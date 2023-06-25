// Copyright Epic Games, Inc. All Rights Reserved.

#include "NightButtonCommands.h"

#define LOCTEXT_NAMESPACE "FNightButtonModule"

void FNightButtonCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "NightButton", "Execute NightButton action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
