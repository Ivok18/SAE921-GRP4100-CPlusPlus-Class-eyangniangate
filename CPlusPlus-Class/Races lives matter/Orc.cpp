#include "Orc.h"
#include <iostream>

Orc::Orc()
{
	hunger = 2;
}

Orc::Orc(int hp_, int atk_, int hunger_)
{
	hp = hp_;
	atk = atk_;
	hunger = hunger_;
}

Orc::~Orc()
{
}

void Orc::Scelus()
{
	atk += 10;
	std::cout << "+10 natural attack" << std::endl << std::endl;
}

void Orc::Hunger_Increase()
{
	hunger += 10;
	atk += hunger;
	std::cout << "+10 hunger" << std::endl << std::endl;
}

void Orc::See_Stats()
{
	std::cout << "it seems you are worthy to see stats now, hmm:" << std::endl;
	std::cout << this->atk << " ATK " << "|| " << this->Hp() << " HP " << "|| " << this->hunger << " HUNGER" << std::endl;
}

void Orc::Natural_Attack()
{
	Crunch();
}

void Orc::Trained_Attack()
{
	if (class_ != nullptr)
	{
		std::cout << "To implemente.." << std::endl << std::endl;
	}

	else
	{
		std::cout << "This entity has no class" << std::endl << std::endl;
	}
}

void Orc::Defend()
{
	std::cout << "To implemente" << std::endl << std::endl;
}

void Orc::Heal()
{
	std::cout << "To implemente" << std::endl << std::endl;
}

void Orc::Natural_Power_Up()
{
	Scelus();
	Hunger_Increase();
}

void Orc::Crunch()
{
	std::cout << "Get Crunched!" << std::endl << std::endl;
}
