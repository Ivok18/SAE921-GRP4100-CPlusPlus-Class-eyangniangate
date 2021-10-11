#pragma once
#include <string>

class Car
{
public:
	Car();
	Car(std::string model, int year_of_fabrication, int random_);
	~Car();

	std::string get_model();
	void set_model(std::string new_model);

	int get_year_of_fabrication();
	void set_year_of_fabrication(int new_year);
	int get_random();
	
	void see_infos();

	bool operator< (const Car& other) const;
	


private:
	std::string model;
	int year_of_fabrication;
	int rand_;
};

