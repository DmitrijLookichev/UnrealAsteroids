// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class ISystem
{
public:
	virtual void OnUpdate(float const time, float const delta) = 0;
};

template <class T>
class BaseSystem : public ISystem
{

protected:
	T * const Container;

public:
	BaseSystem(T* container);
	virtual ~BaseSystem();
};
