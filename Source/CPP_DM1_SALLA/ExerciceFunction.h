// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExerciceFunction.generated.h"

/**
 * 
 */
UCLASS()
class CPP_DM1_SALLA_API UExerciceFunction : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Debug")
	static void PrintMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "Mouvement")
	static void TeleportTo(AActor* ActorToTeleport, AActor* TargetActor);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Vector")
	static FVector FindShortestVector(const TArray<FVector> Vectors);
};
