/*
#include "SpaceShip.h"
#include <vector>
#include "Planet.h"



SpaceShip::SpaceShip()
{
	fuel = Randomm(*this, 5, 20 );
	min_fuel = 5;
	max_fuel = 30;
	name = "ford";
	color = "no color";
	planet_landed_on = Planet();
	landed = false;
}

SpaceShip::SpaceShip(std::string name_, std::string color_)
{
	name = name_;
	color = color_;
	fuel = Randomm(*this, min_fuel, max_fuel);
	planet_landed_on = Planet();
	
	
}


SpaceShip::~SpaceShip()
{
}

int SpaceShip::Get_Fuel()
{
	return fuel;
}

void SpaceShip::Set_Sail(std::vector<Planet> planets_available)
{
	int rand_ = Randomm(*this, min_fuel, max_fuel);
	planet_landed_on = planets_available[rand_];
	Land();
	
}

void SpaceShip::Land()
{
	landed = true;
}

int Randomm(SpaceShip spaceship, int min_, int max_)
{
	int rand_;
	do
	{
		rand_ = min_ + (rand() % (max_ - min_));
	} while (rand_ < min_);

	return rand_;
}
*/
