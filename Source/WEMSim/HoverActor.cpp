// Fill out your copyright notice in the Description page of Project Settings.

#include "HoverActor.h"

DEFINE_LOG_CATEGORY(LogMyTest);

// Sets default values
AHoverActor::AHoverActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RunningTime = 0.0f;
	HoverSpeed = 1.0f;

}

// Called when the game starts or when spawned
void AHoverActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHoverActor::Tick(float DeltaTime)
{
	//  Window -> Developer Tools -> Output Log.
	UE_LOG(LogMyTest, Log, TEXT("Running Time: %f"), RunningTime);
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime*HoverSpeed) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;       //Scale our height by a factor of 20
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

}

