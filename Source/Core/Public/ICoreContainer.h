// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IAspectPool.h"
#include "Aspects/PlayerShipAspect.h"
#include "Primitives/GameData.h"
#include "Primitives/Rect.h"

using namespace Asteroids::Core::Aspects;
namespace Asteroids::Core
{
	/// <summary>
	/// »нтерфейс дл¤ работы с контейнером в Core части проекта
	/// </summary>
	class ICoreContainer
	{
	public:
		virtual IAspectPool* const Aspects() const noexcept = 0;
		virtual PlayerShipAspect* const Player() const noexcept = 0;
		virtual GameData& Data() noexcept = 0;
		virtual Rect& Screen() noexcept = 0;
	};
}