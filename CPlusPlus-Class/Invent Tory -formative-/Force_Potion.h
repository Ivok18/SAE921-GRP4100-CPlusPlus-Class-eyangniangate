#pragma once
#include "Potion.h"

class Force_Potion : public Potion
{
protected:
	std::string name;
public:
	Force_Potion();
	Force_Potion(std::string name_);
	~Force_Potion();

	void Use();
	void Drink();
	void Print_Name();
	std::string Get_Name();
};

