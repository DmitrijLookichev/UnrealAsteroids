// Fill out your copyright notice in the Description page of Project Settings.


#include "Common/ShipActor.h"

UNiagaraSystem* const AShipActor::GetLine() const noexcept
{
	return Line;
}
