// Fill out your copyright notice in the Description page of Project Settings.


#include "Datas/ShipWeapon.h"

namespace Asteroids::Core::Datas
{
	ShipWeapon::ShipWeapon(FVector weaponOffset, float fireReload)
		: WeaponOffset(weaponOffset), FireReload(fireReload) {}
}
