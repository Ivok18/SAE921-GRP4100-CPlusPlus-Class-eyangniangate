#pragma once
#include "Item.h"

class Weapon : public Item
{
protected:
	std::string name;

public:
	Weapon();
	Weapon(std::string name_);
	~Weapon();
	
	virtual void Use() = 0;
	virtual void Equip() = 0;
	virtual void Print_Name() = 0;
};

