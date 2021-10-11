#pragma once
#include "Astrobject.h"
#include "Moon.h"

class Planet : public Astrobject
{
protected:
	std::vector<Moon> moons;
	bool spaceship_has_landed;
	//bool* SpaceShip_Has_Landed();

public:
	Planet();
	Planet(std::string name_, std::string diameter_, std::string mass_, std::string distance_from_sun_, std::vector<std::string> atmosphere_composition_, std::vector<Moon> moons_);
	~Planet();

	void Get_Datas();
	void Show_Moons();
	bool Has_SpaceShip_Landed();
	//void Landing_Checker(bool(*Spaceship_Has_Landed)());
	std::string Get_Name();
	void Set_Landing_Status(bool l);
	

};