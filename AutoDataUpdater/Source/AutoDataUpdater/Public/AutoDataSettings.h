// Copyright (c) 2022 Nicodemus Eka Gunawan

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AutoDataSettings.generated.h"

/**
 *	Plugin settings for AutoDataUpdater
 */
UCLASS(config = Engine)
class AUTODATAUPDATER_API UAutoDataSettings : public UObject
{
	GENERATED_BODY()
	
public:

	/*
	*	Filepath of the csv files to load
	*/
	UPROPERTY(config, EditAnywhere, Category = General)
	TArray<FString> DataFilepaths;

	/*
	*	If set to true, will automatically append the project path before the specified filepaths
	*/
	UPROPERTY(config, EditAnywhere, Category = General)
	bool bAutoAppendProjectPath = true;
};
