// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime\Core\Public\Misc\FileHelper.h>
#include "read_text_file.generated.h"

/**
 * 
 */
UCLASS()
class CAA_RACE_API Uread_text_file : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString LoadFileToString(FString filename);

	/*	
		UFUNCTION(BlueprintCallable, Category = 'File I/O')
		static TArray<FString> LoadFileToStringArray(FString filename);
	*/
};
