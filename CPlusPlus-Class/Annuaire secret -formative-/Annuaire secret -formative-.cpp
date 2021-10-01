#include <time.h>
#include <map>
#include <string>
#include <iostream>
#include <vector>


std::string pick_random_string_from(std::vector<std::string> container)
{
	int random_index = rand() % container.size();

	return container[random_index];
}
void fill_agency(std::map<std::string, std::pair<std::string, int>>& agency, int members_count, std::vector<std::string> &member_names, std::vector<std::string> &member_powers_names)
{
	
	member_names.push_back("Kunka");
	member_names.push_back("Byun");
	member_names.push_back("Tuitt");
	member_names.push_back("Bult");


	
	member_powers_names.push_back("lefeu");
	member_powers_names.push_back("l'eau");
	member_powers_names.push_back("laterre");
	member_powers_names.push_back("l'air");


	while (agency.size() < 4)
	{
		for (int agent_count = 0; agent_count < member_names.size(); agent_count++)
		{
			std::string agent_name = pick_random_string_from(member_names);
			std::string power_element_name = pick_random_string_from(member_powers_names);
			int misssions_cleared_streak = 5 + rand() % 25;

			agency.emplace(agent_name, std::pair<std::string, int>(power_element_name, misssions_cleared_streak));
		}

	}
}
void display_agency_infos(std::map<std::string, std::pair<std::string, int>> agency)
{
	std::cout << "-nom de code-	-element-	-succes successifs-" << std::endl;
	for (auto it = agency.begin(); it != agency.end(); it++)
	{
		std::cout << it->first << "		" << it->second.first << "		" << it->second.second << std::endl;
	}

}
bool is_valid_element(std::vector<std::string> elements_, std::string element)
{
	std::vector<std::string>::iterator it;

	it = elements_.begin();

	for (it; it != elements_.end(); it++)
	{
		if(*(it) == element)
		{
			return true;
		}
	}

	return false;
}
void display_power_elements_names(std::vector<std::string> power_element_names)
{
	std::cout << "[ elements:";

	for (int i = 0; i < power_element_names.size(); i++)
	{
		std::cout << " | " << power_element_names[i];
	}

	std::cout << " ]";

	std::cout << std::endl;


	
}


int main()
{
	srand(time(NULL));

	std::map<std::string, std::pair<std::string, int>> agency;
	std::vector<std::string> agent_names;
	std::vector<std::string> power_element_names;

	
	fill_agency(agency, 4, agent_names, power_element_names);
		
	int secret_number = 1 + (rand() % 2);

	std::cout << "Entre le code secret. Indice: c'est un chiffre entre 1 et 3: ";

	int try_;
	std::cin >> try_;

	while (try_ != secret_number)
	{
		std::cout << "Mauvais code, reessaie ";
		std::cin >> try_;
	}

	
	std::cout << "Bien joue. Alors tu veux integrer l'agence hein? " << std::endl;
	std::cout << "On t'appelle comment dans le milieu? " << std::endl;

	std::string agent_name;
	std::cin >> agent_name;

	
	while (agent_name.size() > 5)
	{	
		
		std::cout << "Trop long" << std::endl;
		std::cout << "Pas assez pratique pour les missions" << std::endl;
		std::cout << "Et c'est pas assez stylax" << std::endl;
		std::cout << "Reviens avec un vrai blase" << std::endl;
		std::cout << "..." << std::endl;
		std::cout << "Alors? ";
		std::cin >> agent_name;
	}

	std::cout << "Ok, " << agent_name << std::endl << std::endl;

	display_power_elements_names(power_element_names);
	std::cout << "Ton element de predilection? ";

	std::string element_name;
	std::cin >> element_name;

	std::cout << std::endl;

	while (is_valid_element(power_element_names, element_name) == false)
	{
		std::cout << element_name << "?" << std::endl;

		std::cout << "Ton truc j'lai jamais vu" << std::endl;
		std::cout << "Reviens avec un vrai element" << std::endl;
		std::cout << "..." << std::endl;
		std::cout << "Alors? ";

		std::cin >> element_name;

	}

	std::cout << std::endl;

	std::cout << element_name << "?" << " Pas mal!" << std::endl;

	std::cout << "Fais-voir c'que tu sais faire? ";

	system("pause");

	std::cout << "Niice, tu passes le test :)" << std::endl << std::endl;

	std::cout << "Bienvenue dans l'agence" << std::endl << std::endl;

	std::cout << "A partir d'aujourd'hui, tu vas travailler avec de vrais veterans:" << std::endl;

	display_agency_infos(agency);

	std::cout << std::endl << std::endl;

	std::cout << "Tu peux demander un team-up avec l'un d'eux en entrant son nom de code dans le registre: ";

	std::string nom_de_code;
	std::cin >> nom_de_code;

	while (is_valid_element(agent_names, nom_de_code) == false)
	{
		std::cout << "il est pas chez nous lui, reessaie: ";
		std::cin >> nom_de_code;
	}

	for (auto it = agency.begin(); it != agency.end(); it++) 
	{
		if (it->first == nom_de_code)
		{
			std::cout << " maitrise " << it->second.first << ", " << it->second.second << " succes successifs" << std::endl;
			system("pause");
			return EXIT_SUCCESS;
		}
	}
	
	
	return EXIT_SUCCESS;
}


	

	


