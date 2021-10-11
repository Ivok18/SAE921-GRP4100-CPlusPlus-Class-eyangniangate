#include "Astrobject.h"

Astrobject::Astrobject()
{
	name = "no_name_planet";
	diameter = "unknown_km";
	mass = "unkown_mass";
	atmosphere_composition = { std::vector<std::string>(10) };
}

Astrobject::Astrobject(std::string name_, std::string diameter_, std::string mass_, std::string distance_from_sun_, std::vector<std::string> atmosphere_composition_)
{
	name = name_;
	diameter = diameter_;
	mass = mass_;
	distance_from_sun = distance_from_sun_;
	atmosphere_composition = atmosphere_composition_;
}

Astrobject::~Astrobject()
{
}
