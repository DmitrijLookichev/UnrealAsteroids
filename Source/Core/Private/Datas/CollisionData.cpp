// Fill out your copyright notice in the Description page of Project Settings.


#include "Datas/CollisionData.h"

namespace Asteroids::Core::Datas
{
	CollisionData::CollisionData(float radius, EObjectType type)
		: Radius(radius), Type(type) {}
}