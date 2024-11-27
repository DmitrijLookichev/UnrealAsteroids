// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseSystem.h"
#include "SceneSettings.h"

class LogicWorld
{
private:
	class ISystem* _systems;
	//time offset in current level
	float _levelTime;

public:
	LogicWorld(USceneSettings* settings);
	LogicWorld();
	~LogicWorld();

	void OnManualUpdate();
};