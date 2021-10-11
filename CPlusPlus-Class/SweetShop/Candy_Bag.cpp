#include "Candy_Bag.h"
#include "another_lib.h"
#include <iostream>



Candy_Bag::Candy_Bag()
{
	type_of_candies = "standard candy";
	amount_available = random_intt();
}

Candy_Bag::Candy_Bag(std::string type_of_candy)
{
	this->type_of_candies = type_of_candy;
	max_amount = random_intt();
	amount_available = max_amount;
	
}

Candy_Bag::~Candy_Bag()
{
}

void Candy_Bag::change_amount_available(int new_amount)
{
	this->amount_available = amount_available;
}

int Candy_Bag::get_amount_available()
{
	return amount_available;
}

void Candy_Bag::see_infos()
{
	std::cout << "oh! there is " << amount_available << " " << type_of_candies << " candies in this bag, miam!" << std::endl;
}

void Candy_Bag::sell_candies(int quantity)
{
	if (amount_available >= quantity)
	{
		this->amount_available -= quantity;
	}

	else
	{
		std::cout << "that's too much bro, max u can get right now is " << amount_available << " " << type_of_candies << std::endl;
	}
	
}
