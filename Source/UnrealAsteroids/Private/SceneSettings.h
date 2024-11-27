// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Actors/ColliderActor.h"
#include "Actors/ShipActor.h"
#include "Presets/ColliderPreset.h"
#include "Presets/ShipPreset.h"
#include "Presets/PlayerShipPreset.h"
#include "Primitives/IntervalInt.h"
#include "Primitives/IntervalFloat.h"
#include "Primitives/ObjectType.h"
#include "SceneSettings.generated.h"

#pragma region Internal structs
	USTRUCT(BlueprintType)
	struct FPlayerShipSettings
	{
		GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly)
		AShipActor* Prefab;
		UPROPERTY(BlueprintReadOnly)
		UPlayerShipPreset* Preset;
	};
	USTRUCT(BlueprintType)
	struct FShipSettings
	{
		GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly)
		AShipActor* Prefab;
		UPROPERTY(BlueprintReadOnly)
		UShipPreset* Preset;
	};
	USTRUCT(BlueprintType)
	struct FColliderSettings
	{
		GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly)
		AColliderActor* Prefab;
		UPROPERTY(BlueprintReadOnly)
		UColliderPreset* Preset;
	};
	USTRUCT(BlueprintType)
	struct FTypePointPair
	{
		GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly)
		EObjectType Type;
		UPROPERTY(BlueprintReadOnly)
		int Points;
	};
#pragma endregion

	struct FIntervalInt;
	struct FIntervalFloat;

UCLASS()
class USceneSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	FPlayerShipSettings GetPlayer() { return Player; }
	FShipSettings GetAlien() { return Alien; }
	FColliderSettings GetProjectilePlayer() { return ProjectilePlayer; }
	FColliderSettings GetProjectileAlien() { return ProjectileAlien; }
	FColliderSettings GetBigAsteroid() { return BigAsteroid; }
	FColliderSettings GetSmallAsteroid() { return SmallAsteroid; }

	int* GetPoints(size_t& size)
	{
		size = Points.Num();
		int* points = new int[size];
		for(size_t i = 0; i < size; ++i)
			points[(size_t)Points[i].Type] = Points[i].Points;
		return points;
	}

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FPlayerShipSettings Player;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FShipSettings Alien;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FColliderSettings ProjectilePlayer;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FColliderSettings ProjectileAlien;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FColliderSettings BigAsteroid;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FColliderSettings SmallAsteroid;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FIntervalFloat AsteroidSpawnInterval = FIntervalFloat(3.0f, 10.0f);
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FIntervalFloat AlienSpawnInterval = FIntervalFloat(7.0f, 15.0f);
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	FIntervalInt SpawnSmallAsteroids = FIntervalInt(3, 7);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Main")
	TArray<FTypePointPair> Points;
};
