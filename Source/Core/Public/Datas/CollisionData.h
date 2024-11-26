// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Primitives/ObjectType.h"

namespace Asteroids::Core::Datas
{
	const struct CollisionData
	{
	public:
		const float Radius;
		const EObjectType Type;

		CollisionData(float radius, EObjectType type);
	};
}
