// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoverActor.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMyTest, Log, All);

UCLASS()
class WEMSIM_API AHoverActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHoverActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// The speed of the hover
	UPROPERTY(EditAnywhere)
	float HoverSpeed;

private:
	float RunningTime;

};
