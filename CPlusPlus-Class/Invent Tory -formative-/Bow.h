#pragma once
#include "Weapon.h"

class Bow : public Weapon
{
protected:
	std::string name;

public:
	Bow();
	Bow(std::string name_);
	~Bow();

	void Use();
	void Equip();
	void Print_Name();
	std::string Get_Name();

};
