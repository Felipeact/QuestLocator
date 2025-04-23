// Fill out your copyright notice in the Description page of Project Settings.


#include "VLocatorComponent.h"
#include "Components/SplineComponent.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"


// Sets default values for this component's properties
UVLocatorComponent::UVLocatorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UVLocatorComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();
	UActorComponent* SplineComponentRef = Owner->AddComponentByClass(USplineComponent::StaticClass(), true, FTransform::Identity, false);

	OwnerSplineComponent = Cast<USplineComponent>(SplineComponentRef);	

	UActorComponent* NiagaraComponentRef = Owner->AddComponentByClass(
		UNiagaraComponent::StaticClass(),
		true,
		FTransform::Identity,
		false);
	OwnerNiagaraComponent = Cast<UNiagaraComponent>(NiagaraComponentRef);
	OwnerNiagaraComponent->SetAsset(Particle);
	
}

void UVLocatorComponent::ShowPath(FVector Origin, FVector Target)
{
	// Clear previous points in the spline
	OwnerSplineComponent->ClearSplinePoints();

	UNavigationPath* Path = UNavigationSystemV1::FindPathToLocationSynchronously(GetWorld(), Origin, Target);

	TArray<FNavPathPoint> PathPoints = Path->GetPath()->GetPathPoints();

	if (PathPoints.Num() > 0)
	{
		//Add the path points to the spline
		for (int32 Index = 0; Index != PathPoints.Num(); ++Index)
		{
			OwnerSplineComponent->AddSplinePoint(PathPoints[Index].Location, ESplineCoordinateSpace::World);
			//Set the tangents to zero to avoid weird "knots"
			OwnerSplineComponent->SetTangentsAtSplinePoint(Index, FVector::ZeroVector, FVector::ZeroVector, ESplineCoordinateSpace::Local);
		}

		OwnerNiagaraComponent->SetWorldLocation(PathPoints[0].Location);

		//Reset the simulation
		OwnerNiagaraComponent->ReinitializeSystem();
		//Reset to 0.0
		DistanceAlongSpline = 0.0f;

		//Clear any active timer
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		//Start the timer
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UVLocatorComponent::UpdatePath, 0.02f /* Repeat every 0.02 seconds */, true /* Loop */);
	}

}

void UVLocatorComponent::UpdatePath()
{
	//Get the timer rate
	float TimerRate = GetWorld()->GetTimerManager().GetTimerRate(TimerHandle);

	//Update the distance along the spline
	DistanceAlongSpline += Speed * TimerRate;

	//Check if it reached the end
	if (DistanceAlongSpline >= OwnerSplineComponent->GetSplineLength())
	{
		//Clear the timer
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
	else
	{
		//Update particle location in world space
		FVector NewLocation = OwnerSplineComponent->GetLocationAtDistanceAlongSpline(DistanceAlongSpline, ESplineCoordinateSpace::World);
		OwnerNiagaraComponent->SetWorldLocation(NewLocation);

		//Update particle rotation in world space
		FRotator NewRotation = OwnerSplineComponent->GetRotationAtDistanceAlongSpline(DistanceAlongSpline, ESplineCoordinateSpace::World);
		OwnerNiagaraComponent->SetWorldRotation(NewRotation);
	}
}


