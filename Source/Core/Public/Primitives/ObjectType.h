// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EObjectType : uint8
{
	Player = 0,				//1
	Alien = 1,				//2
	BigAsteroid = 2,		//4
	SmallAsteroid = 3,		//8
	ProjectilePlayer = 4,	//16
	ProjectileAlien = 5		//32
};
