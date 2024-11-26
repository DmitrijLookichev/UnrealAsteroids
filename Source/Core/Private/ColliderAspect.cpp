// Fill out your copyright notice in the Description page of Project Settings.


#include "ColliderAspect.h"

namespace Asteroids::Core::Aspects
{
	float const ColliderAspect::GetSpeed() const noexcept
	{
		return _speed;
	}
	float const ColliderAspect::GetLifetime() const noexcept
	{
		return _lifetime;
	}
	float& ColliderAspect::TimeToDie() noexcept
	{
		return _timeToDie;
	}
	ColliderAspect::ColliderAspect(int id, CollisionData collider, float speed, float lifetime)
		: Aspect(id, collider), _speed(speed), _lifetime(lifetime), _timeToDie(.0f) {}
	Aspect* ColliderAspect::Clone(int id)
	{
		return new ColliderAspect(id, Collider(), _speed, _lifetime);
	}
}
