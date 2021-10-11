#pragma once
#include <string>
#include <map>
#include <unordered_set>
#include <set>
class Apprenti_Hero
{
public:
	Apprenti_Hero();
	Apprenti_Hero(std::string nom_hero_, std::string nom_civil_, std::string pouvoir_);
	~Apprenti_Hero();
	std::set<std::map<std::string, std::pair<int, int>>> passer_epreuves();
	void voir_mur_heroique();
	float fibre_heroique();
	int suis_je_fais_pour_etre_un_heros();
	int discuter_avec(Apprenti_Hero other);
	std::set<std::map<std::string, std::pair<int, int>>> revisionner_epreuves();


private:
	std::string nom_hero;
	std::string pouvoir;
	std::string nom_civil;
	int total_civils_secourrus; 
	int total_degats;
	int devotion;
	int fibre_heroique_;
	std::set<std::map<std::string, std::pair<int, int>>> villes_sauvees;
};

