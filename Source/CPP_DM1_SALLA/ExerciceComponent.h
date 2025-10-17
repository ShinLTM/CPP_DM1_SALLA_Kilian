// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExerciceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPP_DM1_SALLA_API UExerciceComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UExerciceComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Scale")
	void StartOscillation();

	UFUNCTION(BlueprintCallable, Category = "Scale")
	void StopOscillation();
private:
	UPROPERTY()
	FVector BaseScale;

	UPROPERTY(BlueprintReadOnly,EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float TargetScale;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	float ScaleSpeed;

	float Temps;
};
