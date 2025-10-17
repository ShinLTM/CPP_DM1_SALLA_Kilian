// Fill out your copyright notice in the Description page of Project Settings.


#include "ExerciceFunction.h"

void UExerciceFunction::PrintMessage(const FString& Message)
{
    UE_LOG(LogTemp, Display, TEXT("RAISE YOUR FLAG"), *Message)
}

void UExerciceFunction::TeleportTo(AActor* ActorToTeleport, AActor* TargetActor)
{
    FVector TargetLocation = TargetActor->GetActorLocation();
    ActorToTeleport->SetActorLocation(TargetLocation);
}

FVector UExerciceFunction::FindShortestVector(const TArray<FVector> Vectors)
{
    FVector Shortest = Vectors[0];
    float MinLengthSquared = Shortest.SizeSquared();

    for (const FVector& Vec : Vectors)
    {
        float LengthSquared = Vec.SizeSquared();
        if (LengthSquared < MinLengthSquared)
        {
            MinLengthSquared = LengthSquared;
            Shortest = Vec;
        }
    }

    return Shortest;

}



