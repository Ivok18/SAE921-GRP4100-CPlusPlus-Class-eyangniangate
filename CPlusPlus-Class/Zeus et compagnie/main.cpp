/*
Créer un programme permettant de gérer les arbres du jardin d'eden :
Au jardin d'eden, il y a 2 types d’arbres : les arbres de vie , les arbres interdits
Un fruit vital << biota >> pèse 21g en moyenne, une fruit interdit <<prohibeo>> pèse 2g en moyenne
En pleine saison, un arbre de vie porte entre 40 et 50 biotas, un arbre interdit entre 50 et 70 prohibeos
Zeus ordonne a Adam de lui fournir chaque saison 200g de fruits 

Dimensionner approximativement le nombre d’arbres à planter -> 3 arbres de vies, 1 arbre interdit
Créer un programme permettant les récoltes à l’aide :
une hiérarchie de classes permettant la distinction des différents arbres

les classes pourront implémenter une méthode permettant
 “la pousse des fruits” ( = initier la quantité; on ignorera les problèmatiques de saison en estimant les fruits immédiatement disponilbles)
la récolte en vérifiant la quantité disponible sur chaque arbre 

le programme principal permettra a Adam de gérer 10 récoltes et d’afficher le contenu de chaque récolte. 
(NB : Il faut donner une priorité à un type de récolte; Ex: recolter d’abord les biotas, puis les prohibeos

Si la récolte n’est pas suffisante (< 200g) Adam sera chassé du jardin avant la fin des 10 récoltes.

*/
#include <iostream>
#include "Arbor.h"
#include <time.h>
#include "Arborbiota.h"
#include "Arborprohibeo.h"
#include <vector>

int main()
{
	srand(time(NULL));

	/* I create the trees */
	std::vector<Arborbiota> arborbiotas = { {Arborbiota("arborbiota","biotas",50,0)}, {Arborbiota("arborbiota","biotas",40,0)},
		{Arborbiota("arborbiota","biotas",45,0)} };

	Arborprohibeo arborprohibeo("arborprohibeo","prohibeos", 70, 5);

	int max_fruits_harvested = 0;
	int weight_full_harvest = 0;

	/* I harvest the arborbiotas */
	for (Arborbiota arbor : arborbiotas )
	{
		/* I do these things each time I harvest an arborbiota */
		int weight_harvest = 0;
		arbor.harvest();
		max_fruits_harvested += arbor.get_harvest_size();
		weight_harvest = arbor.get_harvest_size() * 21;
		if (weight_harvest < 21 )
		{
			std::cout << "Zeus is angry, Adam get fired from Eden, because he only harvested " << weight_harvest << "g of " << arbor.get_fruits_name() << std::endl;
			return EXIT_FAILURE;
		}

		weight_full_harvest += weight_harvest;	
	}

	std::cout << "biotas harvested!" << std::endl;
	
	/* I show the number of biotas harvested */
	std::cout << "arborbiotas harvest size: " << max_fruits_harvested << std::endl << std::endl;

	/* I harvest the arborprohibeo */
	arborprohibeo.harvest();
	max_fruits_harvested += arborprohibeo.get_harvest_size(); 
	int weight_harvest_ = arborprohibeo.get_harvest_size() * 2;

	if (weight_harvest_ < 2)
	{
		std::cout << "Zeus is angry, Adam get fired from Eden, because he only harvested " << weight_harvest_ << "g of " << arborprohibeo.get_fruits_name() << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << "prohibeos harvested" << std::endl;

	weight_full_harvest += weight_harvest_;
	/* I show the number of prohibeos harvested */
	std::cout << "arborprohibeo harvest size: " << arborprohibeo.get_harvest_size() << std::endl << std::endl;


	/* I show maximum number of fruits harveted */
	std::cout << "full harvest size: " << max_fruits_harvested << std::endl;
	std::cout << "Adam harvest " << weight_full_harvest << "g of fruits, Zeus is content of his work, and create Eve" << std::endl;
	

	return EXIT_SUCCESS;
}