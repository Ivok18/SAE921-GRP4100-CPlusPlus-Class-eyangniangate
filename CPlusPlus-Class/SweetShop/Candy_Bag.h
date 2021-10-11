#pragma once
#include <string>
#include <iostream>
class Candy_Bag
{
private:
	std::string type_of_candies;
	int amount_available;
	int max_amount;

public:
	Candy_Bag();
	Candy_Bag(std::string type_of_candy);
	~Candy_Bag();
	void change_amount_available(int new_amount);
	int get_amount_available();
	void see_infos();
	void sell_candies(int quantity);
	void fill_bag()
	{
		if (amount_available == max_amount)
		{
			std::cout << "u can't fill what's already full lol" << std::endl;
		}

		else
		{
			int how_much = max_amount - amount_available;
			amount_available += how_much;
		}
	}


	
};

