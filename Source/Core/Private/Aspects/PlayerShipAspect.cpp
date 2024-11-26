// Fill out your copyright notice in the Description page of Project Settings.


#include "Aspects/PlayerShipAspect.h"

namespace Asteroids::Core::Aspects
{
    ShipLaser& PlayerShipAspect::Laser() noexcept
    {
        return _laser;
    }
    float& PlayerShipAspect::LaserReload() noexcept
    {
        return _laserReload;
    }
    int& PlayerShipAspect::LaserCharges() noexcept
    {
        return _laserCharges;
    }
    PlayerShipAspect::LaserVisual const& PlayerShipAspect::LaserVisualization() const noexcept
    {
        return _laserVisualization;
    }
    PlayerShipAspect::PlayerShipAspect(int id, CollisionData collider, ShipMobility mobility, 
    ShipWeapon weapon, ShipLaser laser)
        : ShipAspect(id, collider, mobility, weapon), _laser(laser), _laserCharges(laser.MaxCharges) {}
    Aspect* PlayerShipAspect::Clone(int id)
    {
        return new PlayerShipAspect(id, Collider(), Mobility(), Weapon(), _laser);
    }
}
