// Fill out your copyright notice in the Description page of Project Settings.


#include "SceneController.h"

USceneController::USceneController()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void USceneController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	_world.OnManualUpdate();
}

void USceneController::BeginPlay()
{
	Super::BeginPlay();
	_world = LogicWorld(Settings);//, Presentation);
}

