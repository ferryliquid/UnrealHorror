// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UMyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALHORROR_API UUMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	// getter for singleton instance
	static UUMyGameInstance* GetInstance(UObject* WorldContextObject);

	UPROPERTY(BlueprintReadWrite, Category = "Game Instance [Singleton]")
	int32 Score = 0;
	
};
