#pragma once
#include "Barillet.h"
#include "Contender.h"

class RouletteRusse
{
	private:
		Barillet barillet;
		Contender contender_1;
		Contender contender_2;

	public:
		void begin()
		{
            barillet.put_bullet(); 
            barillet.show_barillet();
            std::cout << " une bullet un mort ";
            std::cout << std::endl << std::endl;

            Contender contender_1;
            Contender contender_2;
            contender_1.setBarillet(barillet);
            contender_2.setBarillet(barillet);

            std::cout << "nom du j1: ";
            std::string nom_j1;
            std::cin >> nom_j1;

            std::cout << "nom du j2: ";
            std::string nom_j2;
            std::cin >> nom_j2;

            contender_1.setName(nom_j1);  
            contender_2.setName(nom_j2);
           
            do
            {
                contender_1.roll();
                contender_1.shoot();

                contender_2.roll();
                contender_2.shoot();

                std::cout << std::endl;

            } while (contender_1.missed() && contender_2.missed());

            for (int i = 0; i < barillet.getBarillet().size(); i++)
            {
                if (barillet.getBarillet()[i] == 1)
                {
                    barillet.clear(i);
                }
            }

            if (contender_1.missed())
            {
                std::cout << "Malheureusement pour son adversaire, " << contender_2.getName() << " a tire.." << std::endl << std::endl;
            }
            else if (contender_2.missed())
            {
                std::cout << "Malheureusement pour son adversaire, " << contender_1.getName() << " a tire.." << std::endl << std::endl;
            }

            barillet.show_barillet();
            std::cout << " plus de bullet";
          
		}

};

