#pragma once
#include <string>
class Vehicule
{
private:
	std::string pilot_name;
	std::string license_plate;
	int engine_power;
	int numb_of_wheels;


public:
	Vehicule();
	Vehicule(std::string pilot_name, std::string license_plate, int engine_power, int numb_of_wheels);
	~Vehicule();

	void see_infos();
};
