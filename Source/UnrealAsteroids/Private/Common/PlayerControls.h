// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "PlayerControls.generated.h"

class UInputAction;

UCLASS()
class UPlayerControls : public UDataAsset
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	class UInputMappingContext* Mapping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	UInputAction* Acceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	UInputAction* Rotate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	UInputAction* Fire;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main")
	UInputAction* Laser;

public:
	UInputMappingContext* const GetMapping() const;
	UInputAction* const GetAcceleration() const;
	UInputAction* const GetRotate() const;
	UInputAction* const GetFire() const;
	UInputAction* const GetLaser() const;
};
