#include "Health_Potion.h"


Health_Potion::Health_Potion()
{
	name = "health potion";
}

Health_Potion::Health_Potion(std::string name_)
{
	name = name_;
}

Health_Potion::~Health_Potion()
{
}

void Health_Potion::Use()
{
	Drink();
}

void Health_Potion::Drink()
{
	std::cout << "Drinking " << name << " +10 hp";
}

void Health_Potion::Print_Name()
{
	std::cout << name;
}

std::string Health_Potion::Get_Name()
{
	return name;
}
