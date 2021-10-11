#include "Moon.h"
#include <iostream>

Moon::Moon()
{
	name = "no_name_planet";
	diameter = "unknown_diameter";
	mass =  "unknown_mass";
	atmosphere_composition = { std::vector<std::string>(10) };
	gravity = 0;
}

Moon::Moon(std::string name_)
{
	name = name_;
	gravity = 10;
}



Moon::~Moon()
{
}

void Moon::Get_Datas()
{
	std::cout << name << std::endl;
	std::cout << " gravity level: " << gravity << std::endl;
	
}
