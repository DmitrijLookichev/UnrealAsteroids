// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Aspects/Aspect.h"

namespace Asteroids::Core::Aspects
{
	class ColliderAspect : public Aspect
	{
	private:
		float const _speed;
		float const _lifetime;
		float _timeToDie;

	public:
		float const GetSpeed() const noexcept;
		float const GetLifetime() const noexcept;
		float& TimeToDie() noexcept;

		ColliderAspect(int id, CollisionData collider, float speed, float lifetime);

		virtual Aspect* Clone(int id) override;
	};
}
