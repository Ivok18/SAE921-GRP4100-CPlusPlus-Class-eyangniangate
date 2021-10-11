#pragma once
#include "Entity.h"

class Boxer : public Entity
{
protected:
	int stamina;

public:
	Boxer();
	Boxer(int class_atk_ , std::string affinity_, int stamina_);
	~Boxer();
	void Natural_Attack();
	void Trained_Attack();
	void Defend();
	void Heal();
	void Breakthrough_Power_Up();
	void Throw_Normal_Punch();
	void Train_Casually();
	int Stamina();
	void See_Perks();
	
};

