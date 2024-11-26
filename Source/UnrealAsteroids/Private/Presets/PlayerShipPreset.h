// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Presets/ShipPreset.h"
#include "PlayerShipPreset.generated.h"

UCLASS()
class UPlayerShipPreset : public UShipPreset
{
	GENERATED_BODY()
	
public:
	float GetLaserReload() { return LaserReload; }
	int GetLaserCharges() { return LaserCharges; }
	float GetVisualDuration() { return VisualDuration; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float LaserReload = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	int LaserCharges = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float VisualDuration = 2.f;
};
