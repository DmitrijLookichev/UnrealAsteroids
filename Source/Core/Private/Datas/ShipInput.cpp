// Fill out your copyright notice in the Description page of Project Settings.

#include "Datas/ShipInput.h"

namespace Asteroids::Core::Datas
{
	void ShipInput::Set(Values input, bool value)
	{
		_flag = (Values)(value
			? _flag | input
			: _flag & ~input);
	}

	bool const ShipInput::Get(Values input) const
	{
		return (_flag & input) != 0;
	}

	void ShipInput::Reset()
	{
		_flag = Values::None;
	}
}
