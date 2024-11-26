// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

using float2 = UE::Math::TVector2<float>;
namespace Asteroids::Core
{
	const struct Rect
	{
	public:
		float2 const Min;
		float2 const Max;

		Rect(float xMin, float yMin, float xMax, float yMax);
		Rect(float2 min, float2 max);
	};
}
