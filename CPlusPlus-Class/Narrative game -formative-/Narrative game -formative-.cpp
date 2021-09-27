#include <iostream>
#include <array>
#include <string>
#include <vector>

struct Character 
{
	std::string name;
	std::string origin_planet;
	std::string title;
	std::string engine;
	std::string mission;
};

int main()
{
	std::vector<Character> characters;
	
	Character sarah_ = { "Sarah Shepard", "Earth", "Captain", "The Explorer" }; 
	sarah_.mission = "SAVE EARTH! CE SARAH TA DERNIERE MISSION!";
	characters.push_back(sarah_);

	Character phil_ = { "Phil Spector", "Mars", "Pilot", "3434 - DFG" }; 
	phil_.mission = "SAVE MARS! ALLEZ PHIL!";
	characters.push_back(phil_);

	Character whilfghy_ = { "Whifghy", "Sector SD/F67", "Child", "Sxiot" };
	whilfghy_.mission = "SAVE SECTOR SD/F67 WHIL YOU?";
	characters.push_back(whilfghy_);

	bool found_player = false;
	do
	{
		std::cout << std::endl << std::endl;
		std::cout << "(Sarah Shepard), Born on planet (Earth) at 24 / 08 / 2087. (Captain) of the crusader ship (The Explorer)" << std::endl;
		std::cout << "(Phil spector), Born on planet (Mars) at 26 / 08 / 2038. (Pilot) of the H - Hunter n° (3434 - DFG)" << std::endl;
		std::cout << "(Whifghy), the metamorph.Created  in (Sector SD/F67).(Child) of the bioship (Sxiot)" << std::endl << std::endl;

		std::cout << "Choose wisely your player by writing specific data about him " << std::endl;


		std::string choice; std::getline(std::cin, choice);

		std::string data;

		
		int indx_player_found;

		for (int indx_letter = 0; indx_letter < choice.size(); indx_letter++)
		{
			if (found_player == false)
			{
				if (choice[indx_letter] != ' ')
				{
					data += choice[indx_letter];
				}

				if (choice[indx_letter] == ' ' || indx_letter + 1 == choice.length())
				{
					char upper = std::toupper(data[0]);
					data[0] = upper;

					if (data.length() >= 4)
					{
						for (int indx_player = 0; indx_player < characters.size(); indx_player++)
						{
							if (found_player == false)
							{
								if (characters[indx_player].name.find(data) != std::string::npos
									|| characters[indx_player].origin_planet.find(data) != std::string::npos
									|| characters[indx_player].title.find(data) != std::string::npos
									|| characters[indx_player].engine.find(data) != std::string::npos
									)
								{
									found_player = true;
									std::cout << "You chose: " << characters[indx_player].name << "!" << std::endl;
									std::cout << characters[indx_player].mission;
								}
							}

						}
					}

					data = "";

				}

			}
		}
	} while (found_player != true);
	

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
