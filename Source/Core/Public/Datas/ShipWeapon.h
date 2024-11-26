// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

namespace Asteroids::Core::Datas
{
	const struct ShipWeapon
	{
	public:
		FVector const WeaponOffset;
		float const FireReload;

		ShipWeapon(FVector weaponOffset, float fireReload);
	};
}
