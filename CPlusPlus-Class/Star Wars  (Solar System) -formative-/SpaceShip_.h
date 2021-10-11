#pragma once
#include <iostream>
#include "Planet.h"

class SpaceShip_
{
protected:
	std::string name;
	std::string color;
	int fuel;
	//int min_fuel;
	//int max_fuel;
	bool is_landing;
	Planet planet_landed_on;
	//int nb_of_planets_landed_on;



public:
	SpaceShip_();
	SpaceShip_(std::string name_, std::string color_);
	~SpaceShip_();

	int Get_Fuel();
	//friend int Randomm(SpaceShip_ spaceship);
	void Set_Sail(std::vector<Planet> &planets_available);
	void Land_On(Planet planet);
	Planet Get_Planet_Landed_On();
	bool Is_Landing();
	//int Get_Nb_Of_Planets_Landed_On();

};

