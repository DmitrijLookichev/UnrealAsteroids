// Fill out your copyright notice in the Description page of Project Settings.


#include "Aspects/Aspect.h"


namespace Asteroids::Core::Aspects
{
	int Aspect::GetID() const noexcept
	{ 
		return _id; 
	}
	CollisionData& Aspect::Collider() noexcept
	{
		return _collider;
	}
	RigidTransform& Aspect::Transform() noexcept
	{
		return _transform;
	}
	ObjectType const Aspect::Type() const noexcept
	{
		return _collider.Type;
	}
	Aspect::Aspect(int id, CollisionData collisionData)
		: _id(id), _collider(collisionData), _transform(RigidTransform::GetIdentity()) {}
}
