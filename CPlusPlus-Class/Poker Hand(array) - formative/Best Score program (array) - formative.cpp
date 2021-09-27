// Best Score program (array) - formative.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    int scores[]{ 100, 87, 5, 101, 56 };

	int bestScore = 0;

	for (int i = 0; i < 5 ; i++)
	{
		if (scores[i] > bestScore)
		{
			bestScore = scores[i];
		}
	}

	std::cout << std::endl; 

	std::cout << "best score: " << bestScore << std::endl;
}

