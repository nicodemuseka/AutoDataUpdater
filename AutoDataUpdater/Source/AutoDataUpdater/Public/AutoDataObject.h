// Copyright (c) 2022 Nicodemus Eka Gunawan

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AutoDataObject.generated.h"

class UAutoDataNode;

 /*
 *	Object representing one data sheet
 */

UCLASS()
class AUTODATAUPDATER_API UAutoDataObject : public UObject
{
	GENERATED_BODY()

public:
	UAutoDataObject();

	// Original name of the data sheet, for logging purposes
	UPROPERTY(BlueprintReadOnly)
	FString FileOrigin = TEXT("");

	// Array containing the data sheet header
	UPROPERTY(BlueprintReadOnly)
	TArray<FString> DataHeader;

	// Array containing the data nodes, stored continuously in a single array
	UPROPERTY(BlueprintReadOnly)
	TArray<UAutoDataNode*> DataNodes;

	// Get the number of rows the data object contains
	UFUNCTION(BlueprintPure)
	int32 GetNumberOfRows();

	// Get data nodes from specific row number
	UFUNCTION(BlueprintPure)
	bool GetRow(int32 RowNumber, TArray<UAutoDataNode*>& OutNodes);

	// Parses the csv from the filepath into this object
	bool ParseCsv(const FString& Filepath);

private:
	
	// Adds the specified string into a DataNode, clearing the string in process
	void AddToNode(FString* StringToAdd);

	// Adds the specified string into the header, clearing the string in process
	void AddToHeader(FString* StringToAdd);
};
