// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Primitives/ObjectType.h"
#include "ColliderActor.generated.h"

UCLASS()
class AColliderActor : public AActor
{
	GENERATED_BODY()
	

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
	ObjectType Type;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
	float Radius = 1.0f;

public:
	AColliderActor();

	ObjectType GetType() const noexcept;
	float GetRadius() const noexcept;
};
