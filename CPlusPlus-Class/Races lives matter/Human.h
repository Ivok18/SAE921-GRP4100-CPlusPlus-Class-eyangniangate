#pragma once
#include "Entity.h"

class Human : public Entity
{
	int intellect;
	int nb_towers;
	int wisdom;

private:
public:
	Human();
	Human(int intellect_);
	~Human();

	void See_Stats();
	/*Gifts = natural talents*/
	void Natural_Attack();
	void Natural_Defense();
	void Build_Tower();
	void Natural_Heal();
	void Meditate();
	void Natural_Power_Up();

	/*Skills = honed capabilities*/
	void Trained_Attack();
	void Trained_Defense();
	void Trained_Heal();

	/*Awakening*/
	void Breakthrough_Power_Up();
	void Awaken();

};

