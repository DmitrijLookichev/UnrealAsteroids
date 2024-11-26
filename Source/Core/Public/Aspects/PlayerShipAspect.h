// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ShipAspect.h"
#include "Datas/ShipLaser.h"
#include "Datas/CollisionData.h"
#include "Datas/ShipMobility.h"
#include "Datas/ShipWeapon.h"

using namespace Asteroids::Core::Datas;
namespace Asteroids::Core::Aspects
{
	class PlayerShipAspect : public ShipAspect
	{
	public:
		const struct LaserVisual
		{
		public:
			FVector const Start;
			FVector const End;
			float const Duration;

			LaserVisual(FVector start, FVector end, float duration)
				: Start(start), End(end), Duration(duration) {}
		};

	private:
		ShipLaser _laser;
		float _laserReload;
		int _laserCharges;
		float _laserVisualization;

	public:
		ShipLaser& Laser() noexcept;
		float& LaserReload() noexcept;
		int& LaserCharges() noexcept;
		LaserVisual& LaserVisualization() noexcept;

		PlayerShipAspect(int id, CollisionData collider, ShipMobility mobility,
			ShipWeapon weapon, ShipLaser laser);

		virtual Aspect* Clone(int id) override;
	};
}