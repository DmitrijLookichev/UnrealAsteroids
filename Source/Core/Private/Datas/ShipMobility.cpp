// Fill out your copyright notice in the Description page of Project Settings.


#include "Datas/ShipMobility.h"

namespace Asteroids::Core::Datas
{
	ShipMobility::ShipMobility(float rotationSpeed, float acceleration, 
	float deceleration, float maxVelocity)
		: RotationSpeed(rotationSpeed), Acceleration(acceleration), 
		Deceleration(deceleration), MaxVelocity(maxVelocity) {}
}
