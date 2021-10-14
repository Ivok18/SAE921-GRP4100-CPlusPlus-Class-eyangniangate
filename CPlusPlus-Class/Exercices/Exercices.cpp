#include <iostream>
#include "Stack.h"
#include <time.h>
#include <vector>
#include "Apprenti_Hero.h"


int random_int()
{
	int random_int;
	do
	{
		random_int = 5 + (rand() % 25);
	} while (random_int < 5);

	return random_int;
}
std::string generate_name_from_bank(std::vector<std::string>bank)
{
	std::string name;

	int random_name_index;

	do
	{
		random_name_index = rand() % 10;

	} while (random_name_index < 0);

	name = bank[random_name_index];

	return name;
}
std::vector<std::string> create_names_bank()
{
	std::vector<std::string> names_bank;
	names_bank.push_back("Alexa");
	names_bank.push_back("Sophie");
	names_bank.push_back("Austin");
	names_bank.push_back("Haley");
	names_bank.push_back("Angel");
	names_bank.push_back("Reese"); 
	names_bank.push_back("Logan");
	names_bank.push_back("Seth");
	names_bank.push_back("Kyle");
	names_bank.push_back("Trenton");

	return names_bank;
}

int main()
{
	
	
	
}
/*
	Apprenti_Hero manu("Muudo", "emmanuel", "Mixed Personnalities");
	auto epreuves = manu.passer_epreuves();

	std::cout << epreuves.size();
	*/
/*
1/ On voudrait gerer les apprentis heros d’une academie à l’aide d’une classe Apprenti_Hero définie par :

les attributs suivants :

- nom heros : futur nom de heros de l'apprenti hero

- pouvoir : capacité speciale de l'apprenti hero

- nom civil: son nom en tant que civil

- villes_sauvees : conteneur contenant: -les notes aux epreuves de sauvetage, sachant qu'il y en a eu une 10 dizaine.
La note de chaque epreuve de sauvetage est calculée en fonction du nombres de "civils" secourus pendant l'epreuve, et des degats (en points) faits par l'apprenti durant l'operation:
formule: NOTE = nbre de civils secourus / degats

les méthodes suivantes :

- void recruter (), permettant de recruter un nouvel apprenti dans l'academie

- void affichage (), permettant l’affichage des resultats d'un apprenti

- float moyenne (), retourne comme résultat la moyenne des notes aux epreuves de sauvetage

- int admis (), retourne comme résultat la valeur 1, si un étudiant est admis et la valeur 0, si pas admis
Un apprenti hero est considéré comme admis s'il a eu au moins une note positive aux epreuves de sauvetage

- int exae_quo (Apprenti_Hero AH), retourne comme résultat la valeur 1, si deux apprentis heros ont sauvé le même nombre de personnes

Ecrire la classe Apprenti_Hero dans le langage C++.
*/




























































































































































































































































































































































	




			
