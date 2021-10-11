#pragma once
#include "Race.h"
#include "Class.h"

class Entity : public Race, public Class
{
	//using Race::See_Stats;
	//using Class::See_Perks;

protected:
	Race* race;
	Class* class_;

public:
	Entity(Race* race, Class* class_);
	Entity();
	~Entity();
	void See_Soul();

	/*Gifts = natural talents*/
	void Natural_Attack(); 
	void Natural_Defense();
	void Natural_Heal();
	void Natural_Power_Up();

	/*Skills = honed capabilities*/
	void Trained_Attack();
	void Trained_Defense();
	void Trained_Heal();

	/*Awakening*/
	void Breakthrough_Power_Up();
	
};
