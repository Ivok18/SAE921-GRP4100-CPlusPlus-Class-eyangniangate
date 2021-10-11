
#include <iostream>
#include "Planet.h"
#include "SpaceShip.h"
#include "SpaceShip_.h"
#include <time.h>
#include <termcolor/termcolor.hpp>
std::string Choose()
{
	std::string string;
	std::cin >> string;

	return string;
}

void Colorize_Journey(std::string color)
{
	if (color == "red")
	{
		std::cout << termcolor::red;
	}

	else if(color == "blue")
	{
		std::cout << termcolor::bright_blue;;
	}

	else if (color == "green")
	{
		std::cout << termcolor::green;
	}

	else if (color == "yellow")
	{
		std::cout << termcolor::yellow;
	}
}





int main()
{
	srand(time(NULL));
	//moon mars : Phobos, Deimos
	Moon phobos("Phobos");
	Moon deimos("Deimos");
	std::vector<Moon> mars_moons = { phobos, deimos };

	//jupiter moon
	Moon europa("Europa");
	std::vector<Moon> jupiter_moons = { europa };

	

	
	std::vector<Planet> planets_ =
	{
		{Planet("Mars", "6800_km", "10^23_kg", "143_million_miles", {std::vector<std::string>({"carbon_dioxide", "nitrogen", "argon"})},mars_moons)},
		{Planet("Jupiter", "14000_km","10^27_kg", "484_million_miles", std::vector<std::string>(), jupiter_moons)}, 
		{Planet("Eris", "2_km", "unknow_mass", "96.6_AU", {std::vector<std::string>()}, std::vector<Moon>())}
		
	};
	

	std::cout << "You are going to start a new adventure on your spaceship!" << std::endl;
	std::cout << "Pay attention to signs on your road, they will guide you in your journey" << std::endl;
	system("pause");
	std::cout << "What is the name of your spaceship -> ";

	//-------name---------------
	std::string name;
	name = Choose();
	//-------------------------

	std::cout << std::endl << std::endl;

	std::cout << "Choose it's color (red || blue || green || yellow) -> ";

	//-------color---------------
	std::string color;
	color = Choose();
	//-----------------------

	std::cout << std::endl << std::endl;

	SpaceShip_ space_ship(name, color);

	Colorize_Journey(color);

	char start;
	std::cout << "wanna start? -> y/n " << std::endl;
	std::cin >> start;
	if(start== 'y')
	{ 
		//~~~~~~~~~~~~~~ADVENTURE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		bool to_continue = false;
		std::cout << "Aventure begins aboard " << name << "! The " << color << " spaceship" << std::endl << std::endl;
		std::cout << "remember that fuel is running out as you travel through space" << std::endl;
		system("pause");
		space_ship.Set_Sail(planets_);
		char to_c;
		do
		{
			std::cout << "wanna continue? -> y/n " << std::endl;
			std::cin >> to_c;
			if (to_c == 'y')
			{
				to_continue = true;
				space_ship.Set_Sail(planets_);
			}
			else
			{
				to_continue = false;
			}
		} while (space_ship.Get_Fuel() > 0 && to_continue);

	
		std::cout << " You gained much wisdom on your journey, you've become a true space cruisader, congrats!" << std::endl;
		system("pause");

	}
	
	else
	{
		std::cout << "too bad." << std::endl;
		return EXIT_SUCCESS;
	}
	
}

