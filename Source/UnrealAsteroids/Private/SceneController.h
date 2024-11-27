// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LogicWorld.h"
#include "SceneSettings.h"
#include "SceneController.generated.h"

//Entrance point
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class USceneController : public USceneComponent
{
	GENERATED_BODY()

private:
	LogicWorld _world;

protected:
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Main")
	//PresentationController* Presentation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Main")
	USceneSettings* Settings;

public:
	USceneController();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;
};
