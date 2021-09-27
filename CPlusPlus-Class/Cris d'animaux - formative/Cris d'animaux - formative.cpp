// Cris d'animaux - formative.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

enum class Animal : int
{
    LION = 1,
    CAT = 2,
    DOG = 3,
    MAN = 4
};

std::string scream(Animal animal)
{
    switch (animal)
    {
        case Animal::LION:   
            return "ROAAAR";
            break;

        case Animal::CAT:
            return "MIAOUW";
            break;

        case Animal::DOG:
            return "WOUUUF";
            break;

        case Animal::MAN:
            return "HEYYYY";
            break;

        default:
            return "nothing scream";
            break;
    }

}

    


int main()
{
    
    std::cout << "ANIMALS" << std::endl;
    std::cout << "LION (press -1- to hear the lion's scream)" << std::endl;
    std::cout << "CAT (press -2- to hear the cat's scream)" << std::endl;
    std::cout << "DOG (press -3- to hear the dog's scream)" << std::endl;
    std::cout << "MAN (press -4- to hear the man's scream)" << std::endl;
    std::cout << "other (press -choose integer- to hear nothing)" << std::endl;

    Animal animal_scream;

    int scream_choice;
       
    std::cin >> scream_choice;

    switch (scream_choice)
    {
        case 1:
            animal_scream = Animal::LION;
            
            break;

        case 2:
            animal_scream = Animal::CAT;
            break;

        case 3:
            animal_scream = Animal::DOG;
            break;

        case 4:
            animal_scream = Animal::MAN;
            break;
            
            default:
            std::cout << " nothing scream";
            return EXIT_SUCCESS;
            break;
    }

    std::cout << scream(animal_scream) << std::endl;

    return EXIT_SUCCESS;
}


