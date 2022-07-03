// Copyright (c) 2022 Nicodemus Eka Gunawan

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AutoDataNode.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogDataParser, Log, All);

/**
 *	Object containing one cell of data
 *	(we don't really care about data size (array of array of array) since this is intended for editor use only)
 */
UCLASS()
class AUTODATAUPDATER_API UAutoDataNode : public UObject
{
	GENERATED_BODY()

public:
	UAutoDataNode();
	
	// Single cell value
	UPROPERTY(BlueprintReadOnly)
	FString RawValue = TEXT("");

	/*
	*	Converts the raw value of the node as float
	*	@return: converted value if successful, else 0.0f
	*/
	UFUNCTION(BlueprintPure)
	float GetValueAsFloat();

	/*
	*	Converts the raw value of the node as integer, if raw value is a float it will be truncated
	*	@return: converted value if successful, else 0
	*/
	UFUNCTION(BlueprintPure)
	int32 GetValueAsInteger();

	/*
	*	Returns the value as string, can be empty
	*/
	UFUNCTION(BlueprintPure)
	FString GetValueAsString();

	/*
	*	Returns the value as FName, can be empty
	*/
	UFUNCTION(BlueprintPure)
	FName GetValueAsName();

	/*
	*	Converts the raw value of the node as boolean
	*	Will return true if numeric value bigger than 0, or string value of "true" (case insensitive)
	*	@return value as boolean
	*/
	UFUNCTION(BlueprintPure)
	bool GetValueAsBool();
};
