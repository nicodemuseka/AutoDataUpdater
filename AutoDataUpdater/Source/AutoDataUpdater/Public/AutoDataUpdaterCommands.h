// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "AutoDataUpdaterStyle.h"

class FAutoDataUpdaterCommands : public TCommands<FAutoDataUpdaterCommands>
{
public:

	FAutoDataUpdaterCommands()
		: TCommands<FAutoDataUpdaterCommands>(TEXT("AutoDataUpdater"), NSLOCTEXT("Contexts", "AutoDataUpdater", "AutoDataUpdater Plugin"), NAME_None, FAutoDataUpdaterStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
