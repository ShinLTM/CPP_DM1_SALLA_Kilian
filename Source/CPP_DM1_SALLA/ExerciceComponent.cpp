// Fill out your copyright notice in the Description page of Project Settings.


#include "ExerciceComponent.h"

// Sets default values for this component's properties
UExerciceComponent::UExerciceComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	BaseScale = FVector::OneVector;
	TargetScale = 6;
	ScaleSpeed = 2;
}


// Called when the game starts
void UExerciceComponent::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	BaseScale = Owner->GetActorScale3D();
	UE_LOG(LogTemp, Warning, TEXT("BaseScale = %s"), *BaseScale.ToString());

}


// Called every frame
void UExerciceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Temps += DeltaTime;

	float Scale = FMath::Sin(Temps * ScaleSpeed);

	FVector CurrentScale = FMath::Lerp(BaseScale, FVector(TargetScale), Scale);

	GetOwner()->SetActorScale3D(CurrentScale);
}

void UExerciceComponent::StartOscillation()
{

}

void UExerciceComponent::StopOscillation()
{

}

