#include "Planet.h"
#include <iostream>

/*
bool* Planet::SpaceShip_Has_Landed()
{
	return &Spaceship_Has_Landed());
}
*/

Planet::Planet()
{
	name = "no_name_planet";
	diameter = "uknown_diameter";
	mass = "unknown_mass";
	distance_from_sun = 10;
	atmosphere_composition = { std::vector<std::string>(10) };
	moons = { std::vector<Moon>(10)};
	spaceship_has_landed = false;

}

Planet::Planet(std::string name_, std::string diameter_, std::string mass_, std::string distance_from_sun_, std::vector<std::string> atmosphere_composition_, std::vector<Moon> moons_)
{
	name = name_;
	diameter = diameter_;
	mass= mass_;
	atmosphere_composition = atmosphere_composition_;
	moons = moons_;
	spaceship_has_landed = false;
}

Planet::~Planet()
{
}

void Planet::Get_Datas()
{
	if (atmosphere_composition.empty() == false)
	{
		std::cout << "Atmosphere composition:" << std::endl;

		for (std::string element : atmosphere_composition)
		{
			std::cout << "-" << element << std::endl;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << name << " atmosphere unknown" << std::endl;
	}
	std::cout << "Diameter:" << diameter << std::endl;
	std::cout << "Mass:" << mass << std::endl << std::endl;
	if (moons.empty() == false)
	{
		Show_Moons();
	}
	else
	{
		std::cout << name << " has no moons" << std::endl;
	}
	

	
}

void Planet::Show_Moons()
{
	if (moons.empty() == false)
	{
		std::cout << "Moons:" << std::endl;
	}
	for (Moon moon : moons)
	{
		moon.Get_Datas();
	}
	std::cout << std::endl << std::endl;
}

bool Planet::Has_SpaceShip_Landed()
{
	return spaceship_has_landed;
}

/*
void Planet::Landing_Checker(bool(*Spaceship_Has_Landed)())
{
	typedef bool (*p)();
	p It_Landed = Spaceship_Has_Landed;

	if (*It_Landed)
	{
		spaceship_has_landed = true;
		std::cout << "spaceship has landed" << std::endl << std::endl;
		
	}
}
*/

std::string Planet::Get_Name()
{
	return name;
}

void Planet::Set_Landing_Status(bool l)
{
	spaceship_has_landed = l;
}

