// Copyright (c) 2022 Nicodemus Eka Gunawan

#include "AutoDataObject.h"
#include "AutoDataNode.h"

#include "Misc/CString.h"
#include "Misc/FileHelper.h"

UAutoDataObject::UAutoDataObject()
{
	DataNodes.Empty();
}

int32 UAutoDataObject::GetNumberOfRows()
{
	const int32 SingleRowNum = DataHeader.Num(); // Number of nodes in one row

	// Check if row number is valid
	if (SingleRowNum <= 0)
	{
		UE_LOG(LogDataParser, Error, TEXT("Data sheet %s missing row count!"), *FileOrigin);
		return -1;
	}

	// Check if data nodes count is perfectly divisible by the row count
	if (DataNodes.Num() % SingleRowNum != 0)
	{
		UE_LOG(LogDataParser, Error, TEXT("Data sheet %s has mismatched row count!"), *FileOrigin);
		return -1;
	}

	return (int32)(DataNodes.Num() / SingleRowNum);
}

bool UAutoDataObject::GetRow(int32 RowNumber, TArray<UAutoDataNode*>& OutNodes)
{
	// Check if the requested row number is valid
	if (RowNumber < 0 || RowNumber > (GetNumberOfRows() - 1))
	{
		return false;
	}

	// Add the requested data nodes into the node array
	for (int32 i = 0; i < DataHeader.Num(); i++)
	{
		// Get the node based on the row specified
		const int32 RowStart = RowNumber * DataHeader.Num();
		UAutoDataNode* NodeToAdd = DataNodes[i + RowStart];

		// Validity check, just in case
		if(NodeToAdd)
		{
			OutNodes.Add(NodeToAdd);
		}
	}

	return true;
}

bool UAutoDataObject::ParseCsv(const FString& Filepath)
{
	// Check last four character, ensure file extension is correct
	if (!Filepath.Right(4).Equals(TEXT(".csv")))
	{
		UE_LOG(LogDataParser, Error, TEXT("File %s is not a csv."), *Filepath);
		return false;
	}

	DataHeader.Empty();
	DataNodes.Empty();

	// Update file origin for logging
	FileOrigin = Filepath;

	// String loaded from the Csv
	FString CsvString = TEXT("");

	if (!FFileHelper::LoadFileToString(CsvString, *Filepath))
	{
		UE_LOG(LogDataParser, Error, TEXT("Failed to load %s."), *Filepath);
		return false;
	}

	// Read through the array of strings from the CSV, checking for special characters to separate nodes
	int32 Iterator = 0;

	bool bIsHeader = true; // Used to check the first row of data as header
	bool bIsInQuote = false; // Used to mark if data cell is wrapped by a quotation mark, which means the entry contains a comma

	FString CurrentStr = TEXT("");

	while (CsvString.IsValidIndex(Iterator))
	{
		FString CurrentChar = CsvString.Mid(Iterator, 1);
		Iterator++;

		// Skip this character, we're already checking the character \r for line breaks
		if (CurrentChar.Equals(TEXT("\n")))
			continue;

		// Look for header entries
		if (bIsHeader)
		{
			// Checks for line break, end the header check
			if (CurrentChar.Equals(TEXT("\r")))
			{
				bIsHeader = false;

				AddToHeader(&CurrentStr);
				continue;
			}
			
			// Check for comma, add as new header entry
			if (CurrentChar.Equals(TEXT(",")))
			{
				AddToHeader(&CurrentStr);
				continue;
			}

			CurrentStr.Append(CurrentChar);
			continue;
		}

		// If in quote, look for end quote
		if (bIsInQuote)
		{
			if (CurrentChar.Equals(TEXT("\"")))
			{
				bIsInQuote = false;
				continue;
			}

			CurrentStr.Append(CurrentChar);
			continue;
		}

		// Check for starting quote
		if (CurrentChar.Equals(TEXT("\"")))
		{
			bIsInQuote = true;
			continue;
		}

		// Check for line break or comma, add as node entry
		if (CurrentChar.Equals(TEXT("\r")) || CurrentChar.Equals(TEXT(",")))
		{
			AddToNode(&CurrentStr);
			continue;
		}

		// Else append character
		CurrentStr.Append(CurrentChar);
	}

	return true;
}

void UAutoDataObject::AddToNode(FString* StringToAdd)
{
	UAutoDataNode* NewNode = NewObject<UAutoDataNode>();
	if (NewNode)
	{
		NewNode->RawValue = *StringToAdd;
		DataNodes.Add(NewNode);
	}

	*StringToAdd = TEXT("");
}

void UAutoDataObject::AddToHeader(FString* StringToAdd)
{
	DataHeader.Add(*StringToAdd);
	*StringToAdd = TEXT("");
}
