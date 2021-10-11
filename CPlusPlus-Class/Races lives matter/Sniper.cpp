#include "Sniper.h"
#include <iostream>

Sniper::Sniper()
{
	nb_bullets = 10;
	precision = 0;
}

Sniper::Sniper(int nb_bullets_, int precision_)
{
	nb_bullets = nb_bullets_;
	precision = precision_;
	affinity = "~get sniped";
}

Sniper::~Sniper()
{
}

void Sniper::Natural_Attack()
{
	race->Natural_Attack();
}

void Sniper::Natural_Defense()
{
	race->Natural_Defense();
}

void Sniper::Natural_Heal()
{
	race->Natural_Heal();
}

void Sniper::Natural_Power_Up()
{
	race->Natural_Power_Up();
}

void Sniper::Trained_Attack()
{
	Snipe();
}

void Sniper::Snipe()
{
	while (nb_bullets > 0)
	{
		std::cout << "get sniped!" << std::endl;
		nb_bullets--;
	}
	
}

void Sniper::Trained_Defense()
{
	Bullets_Wall();
}

void Sniper::Bullets_Wall()
{
	this->class_res += 20;
	std::cout << "bullets wall sniped" << std::endl << std::endl;
}

void Sniper::Trained_Heal()
{
	Bullets_Syringe();
}

void Sniper::Bullets_Syringe()
{
	this->class_hp += 30;
	std::cout << "bullets syringe sniped" << std::endl << std::endl;
}

void Sniper::See_Perks()
{
	std::cout << "Soooo, it seems like you're worthy enough to dwell into the perks now, huh? " << std::endl;
	std::cout << this->class_atk << " CL-ATK" << " || " << this->class_res << " CL-RES || " << this->class_hp << " REG || " << nb_bullets << " BUL || " << precision << " PREC" << std::endl << std::endl;
	std::cout << this->affinity << std::endl << std::endl;
}

void Sniper::Breakthrough_Power_Up()
{
	Flow();	
}

void Sniper::Flow()
{
	precision += 10;
	class_atk += precision;
	nb_bullets += 10;
	std::cout << "+" << precision << " class atk" << std::endl << std::endl;
}

void Sniper::Awaken()
{
	std::cout << "Awakening" << std::endl << std::endl;
}

int Sniper::Nb_Bullets()
{
	return nb_bullets;
}
