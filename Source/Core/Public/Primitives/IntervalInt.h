
#pragma once
#include "CoreMinimal.h"
#include "IntervalInt.generated.h"

USTRUCT(BlueprintType)
struct COREMODULE_API FIntervalInt
{
	GENERATED_BODY()

public:
	// Минимальноее граничное значение
	int32 Min;
	// Максимальное граничное значение
	int32 Max;

	FIntervalInt();
	explicit FIntervalInt(float value);
	FIntervalInt(float min, float max);
	FIntervalInt(int32 min, int32 max);

	FIntervalInt(FIntervalInt const& copy) = default;
	FIntervalInt(FIntervalInt&& move) = default;
	FIntervalInt& operator=(FIntervalInt const& copy) = default;
	FIntervalInt& operator=(FIntervalInt&& move) = default;

	bool operator==(FIntervalInt const& other);
	bool operator!=(FIntervalInt const& other);

	float Clamp(int32 value);
};