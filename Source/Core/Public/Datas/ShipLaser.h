// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

namespace Asteroids::Core::Datas
{
	const struct ShipLaser
	{
	public:
		float const LaserReload;
		int const MaxCharges;
		float const VisualDuration;

		ShipLaser(float laserReload, int maxCharges, float duration);
	};
}
