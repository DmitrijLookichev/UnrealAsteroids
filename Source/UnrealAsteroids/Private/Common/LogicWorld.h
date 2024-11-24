// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Core/BaseSystem.h>


class LogicWorld
{
private:
	class ISystem* _systems;
	//time offset in current level
	float _levelTime;

public:
	LogicWorld();
	~LogicWorld();

	void OnManualUpdate();
};