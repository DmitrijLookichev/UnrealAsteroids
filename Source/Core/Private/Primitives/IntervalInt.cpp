#include "Primitives/IntervalInt.h"

FIntervalInt::FIntervalInt() : Min(0), Max(0) {}

FIntervalInt::FIntervalInt(float value) : Min(value), Max(value) {}

FIntervalInt::FIntervalInt(float min, float max) : Min(min), Max(max) {}

FIntervalInt::FIntervalInt(int32 min, int32 max) : FIntervalInt((float)min, (float)max) {}

bool FIntervalInt::operator==(FIntervalInt const& other) { return Min == other.Min && Max == other.Max; }

bool FIntervalInt::operator!=(FIntervalInt const& other) { return Min != other.Min || Max != other.Max; }

float FIntervalInt::Clamp(int32 value)
{
	return value > Max ? Max :
		value < Min ? Min : value;
}

