// Fill out your copyright notice in the Description page of Project Settings.


#include "Aspects/ShipAspect.h"

namespace Asteroids::Core::Aspects
{
    ShipMobility& ShipAspect::Mobility() noexcept
    {
        return _mobility;
    }
    ShipWeapon& ShipAspect::Weapon() noexcept
    {
        return _weapon;
    }
    ShipInput& ShipAspect::Input() noexcept
    {
        return _input;
    }
    FVector& ShipAspect::Velocity() noexcept
    {
        return _velocity;
    }
    float& ShipAspect::FireReload() noexcept
    {
        return _fireReload;
    }
    ShipAspect::ShipAspect(int id, CollisionData collider, ShipMobility mobility, ShipWeapon weapon) 
        : Aspect(id, collider), _mobility(mobility), _weapon(weapon), _input(ShipInput()) {}

    Aspect* ShipAspect::Clone(int id)
    {
        return new ShipAspect(id, Collider(), _mobility, _weapon);
    }
}
