// Fill out your copyright notice in the Description page of Project Settings.


#include "Datas/ShipLaser.h"

namespace Asteroids::Core::Datas
{
	ShipLaser::ShipLaser(float laserReload, int maxCharges, float duration)
		: LaserReload(laserReload), MaxCharges(maxCharges), VisualDuration(duration) {}
}
