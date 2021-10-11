#include "Black_Orc.h"
#include <iostream>

/*
Black_Orc::Black_Orc()
{
	hp = 50;
	atk = 10;
	class_atk = 10;
	stamina = 5;
	hunger = 0;
	affinity = "just normal black orc routines";
}

Black_Orc::Black_Orc(int hp_, int atk_, int class_atk_, int stamina_, int hunger_, std::string affinity_)
{
	hp = hp_;
	atk = atk_;
	class_atk = class_atk_;
	stamina = stamina_;
	hunger = hunger_;
	affinity = affinity_;
}


Black_Orc::~Black_Orc()
{
}

void Black_Orc::Throw_Hungry_Punch()
{
	if (hunger <= 0)
	{
		std::cout << "I'm not hungrt anymore, becayse I'm happy an orc with a full belly, ahahaha!" << std::endl;
	}

	else
	{
		while (stamina > 0 && hunger > 0)
		{
			std::cout << "Get Hungry Punched, miam!" << std::endl;
			stamina--;
			hunger--;
		}
		
	}
}

void Black_Orc::Train_Hangry()
{
	if (hunger <= 0)
	{
		std::cout << "not hungry." << std::endl;
	}

	else
	{
		hunger *= 2;
		class_atk += hunger;
	}
	
}

void Black_Orc::See_Soul()
{
	std::cout << "Entering the soul.." << std::endl;
	See_Stats();
	See_Perks();
}

void Black_Orc::See_Stats()
{
	std::cout << this->atk << " ATK " << "|| " << this->Hp() << " HP " << "|| " << this->hunger << " HUNGER" << std::endl;
}

void Black_Orc::See_Perks()
{
	std::cout << this->class_atk << "C.ATK" << " || " << this->stamina << "STAM" << std::endl;
	std::cout << "What can I do? " << this->affinity << std::endl;
}
*/
