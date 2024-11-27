#include "Primitives/IntervalFloat.h"

FIntervalFloat::FIntervalFloat() : Min(0.f), Max(0.f) {}

FIntervalFloat::FIntervalFloat(float value) : Min(value), Max(value) {}

FIntervalFloat::FIntervalFloat(float min, float max) : Min(min), Max(max) {}

FIntervalFloat::FIntervalFloat(int min, int max) : FIntervalFloat((float)min, (float)max) {}

bool FIntervalFloat::operator==(FIntervalFloat const& other) { return Min == other.Min && Max == other.Max; }

bool FIntervalFloat::operator!=(FIntervalFloat const& other) { return Min != other.Min || Max != other.Max; }

float FIntervalFloat::Clamp(float value)
{
	return value > Max ? Max :
		value < Min ? Min : value;
}

float FIntervalFloat::Clamp(int32 value) { return Clamp((float)value); }
float FIntervalFloat::Clamp(double value) { return Clamp((float)value); }
