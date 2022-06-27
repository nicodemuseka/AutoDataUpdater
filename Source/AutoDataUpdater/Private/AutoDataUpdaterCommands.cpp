// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoDataUpdaterCommands.h"

#define LOCTEXT_NAMESPACE "FAutoDataUpdaterModule"

void FAutoDataUpdaterCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "Auto Data Updater", "Execute AutoDataUpdater action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
