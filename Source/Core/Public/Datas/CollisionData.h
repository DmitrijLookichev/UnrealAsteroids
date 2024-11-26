// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Primitives/ObjectType.h"

using ObjectType = Asteroids::Core::ObjectType;
namespace Asteroids::Core::Datas
{
	const struct CollisionData
	{
	public:
		const float Radius;
		const ObjectType Type;

		CollisionData(float radius, ObjectType type);
	};
}
