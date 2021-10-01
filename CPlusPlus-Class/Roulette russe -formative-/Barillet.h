#pragma once
#include <array>
#include <iostream>


class Barillet
{
	private:
		std::array<int, 6> bullets = {0,0,0,0,0,0};

		
	public:
		void put_bullet()
		{
			int rand_ = rand() % bullets.size();
			bullets[rand_] = 1;
		}

		std::array<int,6> getBarillet()
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

