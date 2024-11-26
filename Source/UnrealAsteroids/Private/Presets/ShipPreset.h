// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShipPreset.generated.h"

UCLASS()
class UShipPreset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	float GetRotationSpeed() { return RotationSpeed; }
	float GetAcceleration() { return Acceleration; }
	float GetDeceleration() { return Deceleration; }
	float GetMaxVelocity() { return MaxVelocity; }
	float GetFireReload() { return FireReload; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float RotationSpeed = 5.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float Acceleration = 2.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float Deceleration = .5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float MaxVelocity = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float FireReload = 1.f;
};
