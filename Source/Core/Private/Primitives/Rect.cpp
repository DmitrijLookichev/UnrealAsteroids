// Fill out your copyright notice in the Description page of Project Settings.


#include "Primitives/Rect.h"

namespace Asteroids::Core
{
	Rect::Rect(float xMin, float yMin, float xMax, float yMax)
		: Min(float2(xMin, yMin)), Max(float2(xMax, yMax)) {}
	Rect::Rect(float2 min, float2 max)
		: Min(min), Max(max) {}
}
