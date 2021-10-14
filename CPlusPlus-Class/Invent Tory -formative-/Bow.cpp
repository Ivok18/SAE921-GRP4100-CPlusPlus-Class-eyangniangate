#include "Bow.h"

Bow::Bow()
{
	name = "bow";
}

Bow::Bow(std::string name_)
{
	name = name_;
}

Bow::~Bow()
{
}

void Bow::Use()
{
	Equip();
}

void Bow::Equip()
{
	std::cout << "Equip " << name << ", user can now throw arrows";
}

void Bow::Print_Name()
{
	std::cout << name;
}

std::string Bow::Get_Name()
{
	return name;
}
