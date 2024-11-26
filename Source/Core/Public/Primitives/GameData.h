// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

namespace Asteroids::Core
{
	struct GameData
	{
	public:
		GameData(GameData const & copy) = delete;
		GameData(GameData&& move) = delete;
		GameData& operator=(GameData const & copy) = delete;
		GameData& operator=(GameData&& move) = delete;
	};
}

