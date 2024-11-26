// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

namespace Asteroids::Core::Datas
{
	struct ShipInput
	{
		enum Values : uint8
		{
			None = 0 << 0,
			Acceleration = 1 << 0,
			Fire = 1 << 1,
			Laser = 1 << 2,
			// = 1 << 3,
			// = 1 << 4,
			// = 1 << 5,
			// = 1 << 6,
			Pause = 1 << 7
		};

	private:

		Values _flag;

	public:
		float Rotate;

		void Set(Values input, bool value);
		bool const Get(Values input) const;
		void Reset();
	};
}
