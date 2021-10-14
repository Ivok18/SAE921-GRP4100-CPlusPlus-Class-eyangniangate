#pragma once
#include "Potion.h"

class Health_Potion : public Potion
{
private:
	std::string name;

public:
	Health_Potion();
	Health_Potion(std::string name_);
	~Health_Potion();
	
	void Use();
	void Drink();
	void Print_Name();
	std::string Get_Name();
	
};

