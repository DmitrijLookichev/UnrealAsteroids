// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Aspects/Aspect.h"
#include "Datas/ShipMobility.h"
#include "Datas/ShipWeapon.h"
#include "Datas/ShipInput.h"

using namespace Asteroids::Core::Datas;
namespace Asteroids::Core::Aspects
{	
	class ShipAspect : public Aspect
	{
	private:
		struct ShipMobility _mobility;
		struct ShipWeapon _weapon;
		struct ShipInput _input;

		FVector _velocity;
		float _fireReload;

		//Components
	public:
		ShipMobility& Mobility() noexcept;
		ShipWeapon& Weapon() noexcept;
		ShipInput& Input() noexcept;

		//Datas
		FVector& Velocity() noexcept;
		float& FireReload() noexcept;

		ShipAspect(int id, CollisionData collider, ShipMobility mobility, ShipWeapon weapon);

		virtual Aspect* Clone(int id) override;
	}
}