#include "Sword.h"

Sword::Sword()
{
	name = "sword";
}

Sword::Sword(std::string name_)
{
	name = name_;
}

Sword::~Sword()
{
}

void Sword::Use()
{
	Equip();
}

void Sword::Equip()
{
	std::cout << "Equip " << name << ", user can now swing his sword";
}

void Sword::Print_Name()
{
	std::cout << name;
}

std::string Sword::Get_Name()
{
	return name;
}
