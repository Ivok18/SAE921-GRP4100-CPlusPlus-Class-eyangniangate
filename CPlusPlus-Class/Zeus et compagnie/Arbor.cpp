#include "Arbor.h"
#include <iostream>



Arbor::Arbor()
{
	fruits_name = "defaults";
	tree_capacity = 100;
	current_fruits_amount = tree_capacity;
	harvest_size = 0;
	minimum_harvest = 0;
}
Arbor::Arbor(std::string arbor_name_, std::string fruits_name_, int max_quantity_, int minimum_harvest_)
{
	fruits_name = fruits_name_;
	arbor_name = arbor_name_;
	tree_capacity = max_quantity_;
	current_fruits_amount = tree_capacity;
	minimum_harvest = minimum_harvest_;
	harvest_size = 0;
}
Arbor::~Arbor()
{
}

int Arbor::get_current_fruits_amount()
{
	return current_fruits_amount;
}
int Arbor::get_tree_capacity()
{
	return tree_capacity;
}
int Arbor::get_harvest_size()
{
	return harvest_size;
}
void Arbor::harvest()
{
	if (current_fruits_amount < tree_capacity)
	{
		std::cout << arbor_name << " was already harvested" << std::endl;
	}

	else
	{
		harvest_size = random(minimum_harvest, tree_capacity);
		//std::cout << arbor_name << " harvested !" << std::endl;
		current_fruits_amount -= harvest_size;
	}
	
	
}

int Arbor::get_minimum_harvest()
{
	return minimum_harvest;
}

std::string Arbor::get_fruits_name()
{
	return fruits_name;
}

void Arbor::observe()
{
	std::cout << "fruits observed: " << fruits_name << std::endl;
	std::cout << "max " << fruits_name << " amount: " << tree_capacity << std::endl;
	std::cout << "harvest size: " << harvest_size << std::endl;
	std::cout << "current amount of " << fruits_name << ": " << current_fruits_amount << std::endl << std::endl;

}

