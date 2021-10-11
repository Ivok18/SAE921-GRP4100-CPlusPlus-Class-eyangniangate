#include "Human.h"
#include <iostream>

void Human::Meditate()
{
	hp += 40;
	intellect += 100;
	std::cout << "+40 HP" << std::endl;
	std::cout << "+100 INT" << std::endl << std::endl;
}

void Human::Natural_Power_Up()
{
	Awaken();
}

void Human::Awaken()
{
	if (intellect > 500)
	{
		wisdom += 1;
		std::cout << "wisdom +1" << std::endl << std::endl;
	}
}

void Human::Breakthrough_Power_Up()
{
	class_->Breakthrough_Power_Up();
}

Human::Human()
{
	intellect = 500;
	nb_towers = 0;
	wisdom = 0;
}

Human::Human(int intellect_)
{
	intellect = intellect_;
	nb_towers = 0;
	wisdom = 0;
}

Human::~Human()
{
}

void Human::See_Stats()
{
	std::cout << "it seems you are worthy to see stats now, hmm:" << std::endl;
	std::cout << this->atk << " ATK " << "|| " << this->Hp() << " HP" << " || " << intellect << " INT || " << nb_towers << " TOW || " << wisdom << " WIS" << std::endl << std::endl;
}

void Human::Natural_Attack()
{
	if (nb_towers > 0)
	{
		std::cout << "towers ready. towers firing!" << std::endl << std::endl;
	}
	
}

void Human::Natural_Defense()
{
	Build_Tower();
}

void Human::Trained_Attack()
{
	class_->Trained_Attack();
}

void Human::Trained_Defense()
{
	class_->Trained_Defense();
}

void Human::Trained_Heal()
{
	class_->Trained_Heal();
}


void Human::Build_Tower()
{
	if(intellect > 0)
	{ 
		std::cout << "Tinkering.." << std::endl << std::endl;
		intellect -= 50;
		nb_towers++;
	}
}

void Human::Natural_Heal()
{
	Meditate();
}

