#pragma once
#include "Item.h"

class Potion : public Item
{
protected:
	std::string name;
	
public:
	Potion();
	Potion(std::string name_);
	~Potion();
	
	virtual void Use() = 0;
	virtual void Drink() = 0;
	virtual void Print_Name() = 0;
};

