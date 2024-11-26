// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Aspects/Aspect.h"

namespace Asteroids::Core
{
	class Aspect;
	/// <summary>
	/// »нтерфейс дл¤ работы с пулом в Core части проекта
	/// </summary>
	class IAspectPool
	{
	public:
		template<class T>//where T : Aspect
		T* GetAspect(ObjectType type)
		{
			return (T*)GetAspect(type);
		}

		virtual Aspect* GetAspect(ObjectType type) = 0;
		virtual void ReturnAspect(Aspect* aspect) = 0;
		virtual void ConfirmChanged() = 0;

		//todo check Ranges
		//IEnumerable<Aspect> GetEnumerable(int mask);
	};
}

