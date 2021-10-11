#pragma once
#include "../Zeus et compagnie/Utils.h"
#include <iostream>


class Arbor
{
private:
	int current_fruits_amount;
	int tree_capacity;
	int harvest_size;
	int minimum_harvest;
	std::string fruits_name;
	std::string arbor_name;


	
public:
	Arbor();
	Arbor(std::string arbor_name_, std::string fruits_name, int max_quantity_, int minimum_harvest_);
	~Arbor();

	int get_current_fruits_amount();
	int get_tree_capacity();
	int get_harvest_size();
	void harvest();
	int get_minimum_harvest();
	std::string get_fruits_name();
	

	void observe();
	
	
};

