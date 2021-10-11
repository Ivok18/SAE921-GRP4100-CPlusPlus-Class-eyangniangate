#pragma once
#include "Entity.h"

class Orc : public Entity
{
protected:
	int hunger;

public:
	Orc();
	Orc(int hp_, int atk_, int hunger_);
	~Orc();
	void Scelus();	// increases atk
	void Hunger_Increase(); // increases hunger
	void See_Stats();
	void Natural_Attack();
	void Trained_Attack();
	void Defend();
	void Heal();
	void Natural_Power_Up();
	void Crunch();

	
};

