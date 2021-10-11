#pragma once
#include "Entity.h"

class Sniper : public Entity
{

private:
	int nb_bullets;
	int precision;
public:
	Sniper();
	Sniper(int nb_bullets_, int precision_);
	~Sniper();
	

	/*Gifts = natural talents*/
	void Natural_Attack();
	void Natural_Defense();
	void Natural_Heal();;
	void Natural_Power_Up();
	int Nb_Bullets();

	/*Skills = honed capabilities*/
	void Trained_Attack();
	void Snipe();
	void Trained_Defense();
	void Bullets_Wall();
	void Trained_Heal();
	void Bullets_Syringe();
	void See_Perks();

	/*Awakening*/
	void Breakthrough_Power_Up();
	void Flow();
	void Awaken();


};

