#pragma once
#include <array>
#include <iostream>


class Barillet2
{
private:
	std::array<int, 10> bullets = { 0,0,0,0,0,0 };


public:
	void put_bullets()
	{
		int rand_ = 0;
		int rand2_ = 0;

		do
		{
			rand_ = rand() % bullets.size();
			rand2_ = rand() % bullets.size();
		} while (rand_ == rand2_);

		std::cout << "rand: " << rand_ << std::endl;
		std::cout << "rand2: " << rand2_ << std::endl;

		bullets[rand_] = 1;
		bullets[rand2_] = 1;
		
	}

	std::array<int, 10> getBarillet()
	{
		return bullets;
	}
	void show_barillet()
	{
		for (int i = 0; i < bullets.size(); i++)
		{
			std::cout << bullets[i] << " ";
		}
	}
	void clear(int indx)
	{
		bullets.at(indx) = 0;
	}

};

