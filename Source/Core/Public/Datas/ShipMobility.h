// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

namespace Asteroids::Core::Datas
{
	const struct ShipMobility
	{
	public:		
		float const RotationSpeed;
		float const Acceleration;
		float const Deceleration;
		float const MaxVelocity;

		ShipMobility(float rotationSpeed, float acceleration,
			float deceleration, float maxVelocity);
	};

}
