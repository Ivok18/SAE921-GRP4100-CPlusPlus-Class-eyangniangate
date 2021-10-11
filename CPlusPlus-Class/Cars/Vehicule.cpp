#include "Vehicule.h"
#include <iostream>

Vehicule::Vehicule()
{
	pilot_name = "sir default";
	license_plate = "123456789123";
	engine_power = 0;
	numb_of_wheels = 0;
}

Vehicule::Vehicule(std::string a_pilot_name, std::string a_license_plate, int an_engine_power, int a_numb_of_wheels)
{
	pilot_name = a_pilot_name;
	license_plate = a_license_plate;
	engine_power = an_engine_power;
	numb_of_wheels = a_numb_of_wheels;
}

Vehicule::~Vehicule()
{
}

void Vehicule::see_infos()
{
	std::cout << "This is.. just a vehicule." << std::endl;
}
