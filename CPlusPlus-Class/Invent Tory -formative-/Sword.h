#pragma once
#include "Weapon.h"

class Sword : public Weapon
{
protected:
	std::string name;

public:
	Sword();
	Sword(std::string name_);
	~Sword();

	void Use();
	void Equip();
	void Print_Name();
	std::string Get_Name();

};

