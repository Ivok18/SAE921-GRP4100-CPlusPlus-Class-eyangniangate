#include "Force_Potion.h"

Force_Potion::Force_Potion()
{
	name = "force potion";
}

Force_Potion::Force_Potion(std::string name_)
{
	name = name_;
}

Force_Potion::~Force_Potion()
{
}

void Force_Potion::Use()
{
	Drink();
}

void Force_Potion::Drink()
{
	std::cout << "Drinking " << name << " +10 strength";
}

void Force_Potion::Print_Name()
{
	std::cout << name;
}

std::string Force_Potion::Get_Name()
{
	return name;
}
