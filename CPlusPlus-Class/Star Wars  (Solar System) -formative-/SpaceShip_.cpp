#include "SpaceShip_.h"
#include <vector>
#include "Planet.h"



SpaceShip_::SpaceShip_()
{
	fuel = 30;
	//min_fuel = 5;
	//max_fuel = 30;
	name = "ford";
	color = "no color";
	planet_landed_on = Planet();
	is_landing = false;
	//nb_of_planets_landed_on = 0;
}

SpaceShip_::SpaceShip_(std::string name_, std::string color_)
{
	name = name_;
	color = color_;
	fuel = 30;
	planet_landed_on = Planet();
	is_landing = false;
	//min_fuel = 5;
	//max_fuel = 30;
	//nb_of_planets_landed_on = 0;
}


SpaceShip_::~SpaceShip_()
{
}

int SpaceShip_::Get_Fuel()
{
	return fuel;
}


void SpaceShip_::Set_Sail(std::vector<Planet> &planets_available)
{
	int rand_;
	do
	{
		rand_ = rand() % planets_available.size() - 1;
	} while (rand_ < 0);
	planet_landed_on = planets_available[rand_];

	if(planet_landed_on.Has_SpaceShip_Landed() == false)
	{
		Land_On(planet_landed_on);	
		planets_available[rand_].Set_Landing_Status(true);
		
	}

	else
	{
		std::cout << name << "is traveling.. nothing to signal in this area of the Universe" << std::endl;
		std::cout << "fuel remaining -> " << fuel << std::endl;
		fuel -= 5;
	}
	
 	
	

	std::cout << std::endl << std::endl;
	
}

void SpaceShip_::Land_On(Planet planet)
{
	
	is_landing = true; // -> may be useless
	fuel -= 5;
	std::cout << "new planet discovered!" << std::endl << name << " landed on " << planet_landed_on.Get_Name() << "!" << std::endl << std::endl;
	planet_landed_on.Get_Datas();
	std::cout << "fuel remaining -> " << fuel << std::endl;
	is_landing = false; // -> may be useless
	//nb_of_planets_landed_on++;
}

Planet SpaceShip_::Get_Planet_Landed_On()
{
	return planet_landed_on;
}

bool SpaceShip_::Is_Landing()
{
	return is_landing;
}

/*int SpaceShip_::Get_Nb_Of_Planets_Landed_On()
{
	return nb_of_planets_landed_on;
}
*/
/*
int Randomm(SpaceShip_ spaceship)
{

	int rand_;
	do
	{
		rand_ = spaceship.min_fuel + (rand() % (spaceship.max_fuel - spaceship.min_fuel));
	} while (rand_ < spaceship.min_fuel);

	return rand_;
}
*/