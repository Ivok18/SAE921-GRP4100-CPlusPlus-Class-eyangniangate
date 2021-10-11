#include "Class.h"
#include <iostream>

Class::Class()
{
	class_atk = 5;
	affinity = "just normal things";
}

Class::Class(int atk_, int res_,  std::string affinity_)
{
	class_atk = atk_;
	class_res = res_;
	affinity = affinity_;
}

Class::~Class()
{
}

int Class::Class_Atk()
{
	return class_atk;
}

std::string Class::Affinity()
{
	return affinity;
}


void Class::See_Perks()
{
	/*
	std::cout << "Soooo, it seems like you're worthy enough to dwell into the perks now, huh? " << std::endl;
	std::cout << this->class_atk << " CLATK" << std::endl;
	std::cout << this->affinity << std::endl;
	*/
	
}

void Class::Trained_Attack()
{
	std::cout << "Trained Attack" << std::endl << std::endl;
}

void Class::Trained_Defense()
{
	std::cout << "Trained Defense" << std::endl << std::endl;
}

void Class::Trained_Heal()
{
	std::cout << "Trained Heal" << std::endl << std::endl;
}

void Class::Breakthrough_Power_Up()
{
	std::cout << "Breakthrough" << std::endl << std::endl;
}

