// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/BaseSystem.h"

template<class T>
BaseSystem<T>::BaseSystem(T* container)
{
	Container = container;
}

template<class T>
BaseSystem<T>::~BaseSystem() { }

