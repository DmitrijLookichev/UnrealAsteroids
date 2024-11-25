// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControls.h"

UInputMappingContext* const UPlayerControls::GetMapping() const
{
	return Mapping;
}

UInputAction* const UPlayerControls::GetAcceleration() const
{
	return Acceleration;
}

UInputAction* const UPlayerControls::GetRotate() const
{
	return Rotate;
}

UInputAction* const UPlayerControls::GetFire() const
{
	return Fire;
}

UInputAction* const UPlayerControls::GetLaser() const
{
	return Laser;
}
