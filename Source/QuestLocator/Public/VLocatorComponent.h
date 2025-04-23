// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VLocatorComponent.generated.h"


class USplineComponent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QUESTLOCATOR_API UVLocatorComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	TObjectPtr<USplineComponent> OwnerSplineComponent;

	UPROPERTY()
	TObjectPtr<UNiagaraComponent> OwnerNiagaraComponent;

	UPROPERTY(EditAnywhere, Category = "Locator")
	TObjectPtr<UNiagaraSystem> Particle;

	UPROPERTY()
	FTimerHandle TimerHandle;

	UPROPERTY(EditAnywhere, Category = "Locator")
	float Speed;

	UPROPERTY()
	float DistanceAlongSpline;

	UFUNCTION()
	void UpdatePath();

public:	
	// Sets default values for this component's properties
	UVLocatorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	UFUNCTION(BlueprintCallable)
	void ShowPath(FVector Origin, FVector Target);
	
		
};
