// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Datas/CollisionData.h"

namespace Asteroids::Core::Datas
{
	//todo move to self file
	struct RigidTransform
	{
	public:
		FQuat Rot;
		FVector Pos;
	
		static RigidTransform GetIdentity()
		{
			return RigidTransform(FQuat(0.0, 0.0, 0.0, 1.0), FVector());
		}

		RigidTransform(FQuat rotation, FVector translation)
			: Rot(rotation), Pos(translation) {}
	};
}

using CollisionData = Asteroids::Core::Datas::CollisionData;
using RigidTransform = Asteroids::Core::Datas::RigidTransform;
namespace Asteroids::Core::Aspects
{
	/// <summary>
	/// Базовое представление для Core-сущности
	/// </summary>
	class Aspect
	{
	private:
		int _id;
		CollisionData _collider;
		RigidTransform _transform;

	public:
		int GetID() const noexcept;

		CollisionData& Collider() noexcept;
		RigidTransform& Transform() noexcept;

		ObjectType const Type() const noexcept;

		Aspect(int id, CollisionData collisionData);
		virtual Aspect* Clone(int id) = 0;

		Aspect(Aspect const & copy) = delete;
		Aspect(Aspect&& move) = delete;
		Aspect& operator=(Aspect const & copy) = delete;
		Aspect& operator=(Aspect&& move) = delete;

		//std::string ToString()
		//	=> $"{GetType().Name}.{Type} = {InstanceID}";
	};
}
