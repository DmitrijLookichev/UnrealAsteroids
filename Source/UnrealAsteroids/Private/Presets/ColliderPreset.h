// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ColliderPreset.generated.h"

/**
 * настройки примитивного аспекта (прожектайлы и астеройды)
 */
UCLASS()
class UColliderPreset : public UDataAsset
{
	GENERATED_BODY()

public:
	float GetMoveSpeed() { return MoveSpeed; }
	float GetLifetime() { return Lifetime; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float MoveSpeed = 5.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	float Lifetime = 5.f;
};
