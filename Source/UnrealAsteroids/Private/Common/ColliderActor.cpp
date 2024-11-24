// Fill out your copyright notice in the Description page of Project Settings.


#include "Common/ColliderActor.h"

// Sets default values
AColliderActor::AColliderActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

ObjectType AColliderActor::GetType() const noexcept
{
	return Type;
}

float AColliderActor::GetRadius() const noexcept
{	
	return Radius;
}

