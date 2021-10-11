#include "Car.h"
#include <iostream>
#include "lib.h"

Car::Car() 
{
	year_of_fabrication = 1850;
	model = "Equisia";
	rand_ = random_int2();
}

Car::Car(std::string model, int year_of_fabrication, int random)
{
	this->model = model;
	this->year_of_fabrication = year_of_fabrication;
	this->rand_ = random;
}

Car::~Car(){}

std::string Car::get_model()
{
	return model;
}

void Car::set_model(std::string new_model)
{
	std::cout << "Congrats!" << std::endl;
	std::cout << "You suddenly become God, you can change everything, even the model of a car!" << std::endl;
	this->model = new_model;
}

int Car::get_year_of_fabrication()
{
	return year_of_fabrication;
}

void Car::set_year_of_fabrication(int new_year)
{
	std::cout << "Congrats!" << std::endl;
	std::cout << "You suddenly become God, you can change everything, even a car's year of fabrication!" << std::endl;
	this->year_of_fabrication = new_year;
	
}

int Car::get_random()
{
	return rand_;
}

void Car::see_infos()
{
	std::cout << "This is.. just a car: ";
	std::cout <<  model << " " << year_of_fabrication << " was anihilated " << rand_ << " times by God." << std::endl << std::endl;
	
}

bool Car::operator<(const Car& other) const
{
	return this->year_of_fabrication < other.year_of_fabrication;	
}


