// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ColliderActor.h"
#include "ShipActor.generated.h"

UCLASS()
class UNREALASTEROIDS_API AShipActor : public AColliderActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Main")
	class UNiagaraSystem* Line;

public:
	UNiagaraSystem* const GetLine() const noexcept;
};
