// Fill out your copyright notice in the Description page of Project Settings.


#include "UMyGameInstance.h"
#include <Kismet/GameplayStatics.h>

UUMyGameInstance* UUMyGameInstance::GetInstance(UObject* WorldContextObject)
{
    return Cast<UUMyGameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
}
