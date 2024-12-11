// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/ActorActionUtility.h"
#include "ExportAllBadSM.generated.h"

/**
 * 
 */
UCLASS()
class GENERALBLUTILITIES_API UExportAllBadSM : public UActorActionUtility
{
	GENERATED_BODY()

public:
#if WITH_EDITOR
	UFUNCTION(BlueprintCallable)
	static void ExportAll(TMap<FName, FAqTestStruct>& OutMap,TArray<FString>& OutStaticMeshes);
#endif
};
