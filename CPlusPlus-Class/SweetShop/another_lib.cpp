#include "another_lib.h"
#include <set>

int random_intt()
{
	int rand_;

	do
	{
		rand_ = rand() % 25;
	} while (rand_ < 2);

	return rand_;
}

std::string generate_name_from_bank2(std::vector<std::string> bank)
{
	std::string name;

	int random_name_index;

	do
	{
		random_name_index = rand() % 4;

	} while (random_name_index < 0);

	name = bank[random_name_index];

	return name;
}

std::vector<std::string> create_names_bank2()
{
	std::vector<std::string> names_bank = { "Tiftofs", "Stampers", "Slapples", "Pastels" };
	
	return names_bank;
}
