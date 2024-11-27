
#pragma once
#include "CoreMinimal.h"
#include "IntervalFloat.generated.h"

USTRUCT(BlueprintType)
struct COREMODULE_API FIntervalFloat
{
	GENERATED_BODY()

public:
	// Минимальноее граничное значение
	float Min;
	// Максимальное граничное значение
	float Max;

	FIntervalFloat();
	explicit FIntervalFloat(float value);
	FIntervalFloat(float min, float max);
	FIntervalFloat(int min, int max);

	FIntervalFloat(FIntervalFloat const& copy) = default;
	FIntervalFloat(FIntervalFloat&& move) = default;
	FIntervalFloat& operator=(FIntervalFloat const& copy) = default;
	FIntervalFloat& operator=(FIntervalFloat&& move) = default;

	bool operator==(FIntervalFloat const& other);
	bool operator!=(FIntervalFloat const& other);

	float Clamp(float value);

	float Clamp(int32 value);
	float Clamp(double value);
};