// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Primitives/ObjectType.h"
#include "ColliderActor.generated.h"

UCLASS()
class UNREALASTEROIDS_API AColliderActor : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
	EObjectType Type;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
	float Radius = 1.0f;

public:
	AColliderActor();

	EObjectType GetType() const noexcept;
	float GetRadius() const noexcept;
};
