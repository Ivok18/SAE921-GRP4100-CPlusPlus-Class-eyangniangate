#include "Apprenti_Hero.h"
#include <set>

extern int random_nb_degats()
{
	int random_int;
	do
	{
		random_int = -100 + (rand() % 200);
	} while (random_int < -2 && random_int > 101);

	return random_int;
}
extern int random_nb_civils_secourrus()
{
	int random_int;
	do
	{
		random_int = rand() % 300;
	} while (random_int < 0);

	return random_int;
}
extern std::string generate_name_from_bank(std::vector<std::string>bank)
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
extern std::vector<std::string> create_cities_names_bank()
{
	std::vector<std::string> bank = { "Drury", "Itahull", "Yluata", "Arccester", "Vrarc","Frul", "Oyatol", "Icaver", "Truayvale","Ansdale" };
	
	return bank;
}

/*		BANQUE DE DONNEES 
* - banque de noms de villes
* - banque de noms de heros
* - banque de noms de civils
* - banque de noms de pouvoirs
*/
extern std::vector<std::string>cities_names = create_cities_names_bank();
//std::vector<std::string>heroes_names = create_heroes_names_bank();
//std::vector<std::string>common_names = create_common_names_bank();
//std::vector<std::string>powers_names = create_powers_names_bank();



Apprenti_Hero::Apprenti_Hero(){};
Apprenti_Hero::Apprenti_Hero(std::string nom_hero_, std::string nom_civil_, std::string pouvoir_)
{
	this->nom_hero = nom_hero_;
	this->nom_civil = nom_civil_;
	this->pouvoir = pouvoir_;
}

Apprenti_Hero::~Apprenti_Hero()
{
}


std::set<std::map<std::string, std::pair<int, int>>> Apprenti_Hero::passer_epreuves()
{
	/* je cree un conteneur vide des villes des epreuves */
	std::set<std::map<std::string, std::pair<int, int>>> villes_sauvetages; 

	for (int i = 0; i < 10; i++)
	{
		/* je cree une ville, pour l'instant sans infos */
		std::map<std::string, std::pair<int, int>> ville_sauvee; 

		/* je genere un nom de ville */
		std::string nom_ville = generate_name_from_bank(cities_names); 

		/* je genere des exploits -> civils secourrus(random) / degats(random) */
		std::pair<int, int> exploits = std::make_pair(random_nb_civils_secourrus(), random_nb_degats()); //exploits

		/* je rentre les infos de la ville */
		ville_sauvee.emplace(nom_ville, exploits); 

		/* j'ajoute cette ville a la liste des villes des epreuves */
		villes_sauvetages.emplace(ville_sauvee);
	}

	//villes_sauvees = villes_sauvetages;

	return villes_sauvetages;
}

void Apprenti_Hero::voir_mur_heroique()
{
}

float Apprenti_Hero::fibre_heroique()
{
	return 0.0f;
}

int Apprenti_Hero::suis_je_fais_pour_etre_un_heros()
{
	return 0;
}

int Apprenti_Hero::discuter_avec(Apprenti_Hero other)
{
	return 0;
}

//std::unordered_set<std::map<std::string, std::pair<int, int>>> Apprenti_Hero::revisionner_epreuves()
//{
	//return villes_sauvees;
//}
