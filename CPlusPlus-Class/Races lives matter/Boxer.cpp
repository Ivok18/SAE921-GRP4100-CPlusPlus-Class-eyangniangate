#include "Boxer.h"
#include <iostream>

Boxer::Boxer()
{
	stamina = 20;
}

Boxer::Boxer(int class_atk_, std::string affinity_, int stamina_)
{
	class_atk = class_atk_;
	affinity = affinity_;
	stamina = stamina_;
}

Boxer::~Boxer()
{
}

void Boxer::Natural_Attack()
{
	if (race != nullptr)
	{
		race->Natural_Attack();
	}

	else
	{
		std::cout << "this character has no race" << std::endl << std::endl;
	}
}

void Boxer::Trained_Attack()
{
	Throw_Normal_Punch();
}

void Boxer::Defend()
{
	std::cout << "Not implemented yet" << std::endl << std::endl;
}

void Boxer::Heal()
{
	std::cout << "Not implemented yet" << std::endl << std::endl;
}

void Boxer::Breakthrough_Power_Up()
{
	Train_Casually();
}

void Boxer::Throw_Normal_Punch()
{
	while (stamina > 0)
	{
		std::cout << "get Punched!" << std::endl;
		stamina--;

	}
}

void Boxer::Train_Casually()
{
	class_atk = class_atk + (class_atk / 2);
	std::cout << "+50% bonus on class damages" << std::endl << std::endl;
}

int Boxer::Stamina()
{
	return stamina;
}

void Boxer::See_Perks()
{
	std::cout << "Soooo, it seems like you're worthy enough to dwell into the perks now, huh? " << std::endl;
	std::cout << this->class_atk << "CLATK" << " || " << this->stamina << "STAM" << std::endl;
	std::cout << "~" << this->affinity << std::endl << std::endl;
}
