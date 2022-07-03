// Copyright (c) 2022 Nicodemus Eka Gunawan

#include "AutoDataNode.h"
#include "Misc/CString.h"

DEFINE_LOG_CATEGORY(LogDataParser);

UAutoDataNode::UAutoDataNode()
{

}

float UAutoDataNode::GetValueAsFloat()
{
	if (RawValue.IsEmpty())
	{
		return 0.0f;
	}

	// Check value validity
	if (RawValue.IsNumeric())
	{
		return FCString::Atof(*RawValue);
	}

	UE_LOG(LogDataParser, Error, TEXT("Data node %s is not float!"), *RawValue)
	return 0.0f;
}

int32 UAutoDataNode::GetValueAsInteger()
{
	if (RawValue.IsEmpty())
	{
		return 0;
	}

	// Check value validity
	if (RawValue.IsNumeric())
	{
		int32 Index = -1;

		if (RawValue.FindChar(TEXT('.'), Index))
		{
			// If value is float we truncate it and return as integer
			UE_LOG(LogDataParser, Warning, TEXT("Truncating float data node %s as integer"), *RawValue)
			return FMath::TruncToInt(FCString::Atof(*RawValue));
		}
		else
		{
			return FCString::Atoi(*RawValue);
		}
	}
	
	UE_LOG(LogDataParser, Error, TEXT("Data node %s is not int!"), *RawValue)
	return 0;
}

FString UAutoDataNode::GetValueAsString()
{
	// Raw value is just an FString, return as it is
	return RawValue;
}

FName UAutoDataNode::GetValueAsName()
{
	return FName(*RawValue);
}

bool UAutoDataNode::GetValueAsBool()
{
	if (RawValue.IsEmpty())
	{
		// Return false if empty
		return false;
	}
	else if (RawValue.IsNumeric())
	{
		// Return true if numeric value is bigger than 0
		return (FCString::Atof(*RawValue) > 0.0f);
	}
	else
	{
		// Return true if value is "TRUE"
		return (RawValue.Compare(TEXT("true"), ESearchCase::IgnoreCase) == 0);
	}
}
