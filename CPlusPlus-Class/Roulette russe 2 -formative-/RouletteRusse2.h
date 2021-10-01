#pragma once
#include "Barillet2.h"
#include "Contender2.h"

class RouletteRusse2
{
private:
    Barillet2 barillet;
    Contender2 contender_1;
    Contender2 contender_2;

public:
    void begin()
    {
        barillet.put_bullets();
        barillet.show_barillet();
        std::cout << " une bullet un mort ";
        std::cout << std::endl << std::endl;

        Contender2 contender_1;
        Contender2 contender_2;
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

        if (contender_1.missed())
        {
            std::cout << "Malheureusement pour son adversaire, " << contender_2.getName() << " a tire.." << std::endl << std::endl;
        }
        else if (contender_2.missed())
        {
            std::cout << "Malheureusement pour son adversaire, " << contender_1.getName() << " a tire.." << std::endl << std::endl;
        }

        else if(contender_1.missed() == false && contender_2.missed() == false)
        {
            std::cout << "!!! Probleme dans la matrice de la realité!!!!!!" << std::endl;
            std::cout << contender_1.getName() << " et " << contender_2.getName() << " sont morts.." << std::endl;
            std::cout << "Reboot de la realité courante %%%%%%%%%%%%%" << std::endl;
        }

        for (int i = 0; i < barillet.getBarillet().size(); i++)
        {
            if (barillet.getBarillet()[i] == 1)
            {
                barillet.clear(i);
            }
        }
        
        barillet.show_barillet();
        std::cout << " plus de bullet";
    }

};

