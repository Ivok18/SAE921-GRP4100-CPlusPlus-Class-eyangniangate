#pragma once
#include <string>
#include "Barillet.h"
#include <iostream>

class Contender
{
	private:
		std::string desperados_name;
		Barillet barillet;
		int random_indx_container = 0;
		bool missed_ = true;

	public:
		void roll()
		{
			pick_random_container();
		}
		void pick_random_container()
		{
			int rand_indx;
			rand_indx = (rand() % barillet.getBarillet().size());
			random_indx_container = rand_indx;
		}
		void shoot()
		{
			if (barillet.getBarillet()[random_indx_container] == 1)
			{		
				missed_= false;
				std::cout << "PAN!" << std::endl;
				//barillet.clear(random_indx_container);
			}	
			
			else
			{
				missed_ = true;
				std::cout << "PAN!"<< std::endl;
			}

		}
		void setBarillet(Barillet barillet_)
		{
			barillet = barillet_;
		}
		void setName(std::string name_)
		{
			desperados_name = name_;
		}
		bool missed()
		{
			return missed_;
		}
		std::string getName()
		{
			return desperados_name;
		}
		
};

