#include <iostream>
#include <time.h>


enum class Value : int
{
	TWO = 0,
	THREE = 1,
	FOUR = 2,
	FIVE = 3,
	SIX = 4,
	SEVEN = 5,
	EIGHT = 6,
	NINE = 7,
	TEN = 8,
	VALET = 9,
	QUEEN = 10,
	KING = 11,
	AS = 12,

	nbValues = 13,
};



std::string ValueToString(Value value)
{
	switch (value)
	{
		case Value::TWO:
			return "2";
			break;

		case Value::THREE:
			return "3";
			break;

		case Value::FOUR:
			return "4";
			break;

		case Value::FIVE:
			return "5";
			break;

		case Value::SIX:
			return "6";
			break;

		case Value::SEVEN:
			return "7";
			break;

		case Value::EIGHT:
			return "8";
			break;

		case Value::NINE:
			return "9";
			break;

		case Value::TEN:
			return "10";
			break;

		case Value::VALET:
			return "11";
			break;

		case Value::QUEEN:
			return "12";
			break;

		case Value::KING:
			return "13";
			break;

		case Value::AS:
			return "14";
			break;

		default:
			return "Invalid value";
			break;
	}
}


enum class Type : int
{
	COEUR = 0,
	TREFLE = 1,
	CARREAU = 2,
	PIC = 3,

	nbTypes = 4,
};





std::string TypeToString(Type type)
{
	switch (type)
	{
		case Type::COEUR:
			return "COEUR";
			break;

		case Type::TREFLE:
			return "TREFLE";
			break;

		case Type::CARREAU:
			return "CARREAU";
			break;

		case Type::PIC:
			return "PIC";
			break;

		default:
			return "Invalid type";
			break;
	}
}


constexpr int nbTypes = static_cast<int>(Type::nbTypes);
constexpr int nbValues = static_cast<int>(Value::nbValues);



void show_all_cards(std::string deck[nbTypes * nbValues])
{
	for (int index_deck = 0; index_deck < nbTypes * nbValues ; index_deck++)
	{
		std::cout << deck[index_deck] << std::endl;
	}

}

void random_hand(std::string deck[nbTypes * nbValues])
{
	srand(time(NULL));
	for (int index_deck = 0; index_deck < 6; index_deck++)
	{
		int random_index = rand() % (nbTypes * nbValues);
		std::cout << deck[random_index] << std::endl;
	}
}



int main()
{
	std::string deck[nbTypes * nbValues]{};

	Type coeur;
	coeur = Type::COEUR;

	Type trefle;
	trefle = Type::TREFLE;

	Type carreau;
	carreau = Type::CARREAU;

	Type pic;
	pic = Type::PIC;


	Type cards_types[nbTypes] = { coeur, trefle, carreau, pic };


	Value two;
	two = Value::TWO;

	Value three;
	three = Value::THREE;

	Value four;
	four = Value::FOUR;

	Value five;
	five = Value::FIVE;

	Value six;
	six = Value::SIX;

	Value seven;
	seven = Value::SEVEN;

	Value eight;
	eight = Value::EIGHT;

	Value nine;
	nine = Value::NINE;

	Value ten;
	ten = Value::TEN;

	Value valet;
	valet = Value::VALET;

	Value queen;
	queen = Value::QUEEN;

	Value king;
	king = Value::KING;

	Value as;
	as = Value::AS;

	Value cards_values[nbValues] = { two, three, four, five, six, seven, eight, nine, ten, valet, queen, king, as };

	std::string deck_combinaison;
	std::string value_converted_to_string;
	std::string type_converted_to_string;

	int index_combinaison = 0;

	for (int value = 0; value < nbValues; value++)
	{	
		value_converted_to_string = ValueToString(cards_values[value]);

		for (int type = 0; type < nbTypes; type++)
		{
			type_converted_to_string = TypeToString(cards_types[type]);
			deck_combinaison = "(" + value_converted_to_string + "," + type_converted_to_string + ")";
			deck[index_combinaison] = deck_combinaison;
			//std::cout << deck[index_combinaison] << std::endl;
			index_combinaison++;			
		}
			
	}
	
	std::cout << "Voici tes cartes.." << std::endl;
	show_all_cards(deck);
	

	std::cout << std::endl << std::endl;

	char action;
	do
	{
		std::cout << "Appuie sur -t- pour tirer 5 cartes aleatoirement: ";
	
		std::cin >> action;
	} while (action != 't');


	std::cout << std::endl;


	if (action == 't')
	{
		random_hand(deck);
	}

	return EXIT_SUCCESS;
}

























































































































//Using multidimensional array, create a program displaying the multiplication table.

/*
int rows_integers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

int columns_integers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

int resultat = 0;

for  (int row = 0; row < 10; row++)
{
	for (int column = 0; column < 10; column++)
	{
		resultat = rows_integers[row] * columns_integers[column];
		std::cout << rows_integers[row] << "x" << columns_integers[column] << "=" << resultat << "!" << '\t';
	}

	std::cout << std::endl;
}
*/


//OOOOOOOOOOOOOOOOOOOOOO
//OOOOOOOOOOOOOOOOOOOOOO
//OOOOOOOOOOOOOOOOOOOOOO











// Exercise : find the best score
//Create a program that finds the best score in this score array :
//int scores[]{ 84, 92, 76, 81, 56 };


	/*
	int scores[]{ 84, 92, 76, 81, 56 };

	int bestScore = 0;

	for (int i = 0; i < 5; i++)
	{
		if (scores[i] > bestScore)
		{
			bestScore = scores[i];
		}
	}

	std::cout << std::endl;

	std::cout << "best score: " << bestScore << std::endl;
	*/


// OOOOOOOOOOOOOOO
// OOOOOOOOOOOOO
// OOOOOOOOOOO




//Write a program that asks the user to input an integer V between 0 and 20.
//The program creates an array of 10 random integer between 0 and 20, and writes out the content of the arrayand a message “V is / is not in the array”
	/*
	do
	{
		srand(time(NULL));
		std::cout << "Write a integer between 0 and 20: ";

		int integer;

		int cumul = 0;

		std::cin >> integer;

		int random_integers[10];

		for (int i = 0; i < 10; i++)
		{
			int random_int = (rand() % 21);
			random_integers[i] = random_int;
			std::cout << random_integers[i] << '\t';

			if (random_integers[i] == integer)
			{
				cumul++;
			}
		}

		std::cout << std::endl;


		if (cumul != 0)
		{
			std::cout << integer << " is in the array" << std::endl;
		}

		else
		{
			std::cout << integer << " is not in the array" << std::endl;
		}

		std::cout << std::endl;
		std::cout << std::endl;

	} while (true);


	*/



//OOOOOOOOOOOOOOOOOOOOOOOOOOO
//OOOOOOOOOOOOOOOOOO
//OOOOOOOOOOOOOOOOOOO



// After asking the user his name, first name and age, display a full sentence welcoming him on the program.
	/*
		std::cout << "WRITE ur name: ";
		std::string name;
		std::cin >> name;

		std::cout << "WRITE ur firstName: ";
		std::string firstName;
		std::cin >> firstName;

		std::cout << "WRITE ur age: ";
		int age;
		std::cin >> age;

		std::cout << "Hello " << name << " " << firstName << ". U seem to be " << age << " years old.";
		*/




//OOOOOOOOOOOOOOOOOOOOOOOOOOO
//OOOOOOOOOOOOOOOOOOOOOOOOOOOO
///OOOOOOOOOOOOOOOOOOOOO



//Write a program to count all the vowels in a given string.
/*
char vowels[12] = { 'a','A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y','Y' };

std::string a_string;
std::cin >> a_string;

int vowel_count = 0;

for (int letter = 0; letter < a_string.length(); letter++)
{
	for (int vowel_index = 0; vowel_index < 12; vowel_index++)
	{
		if (a_string[letter] == vowels[vowel_index])
		{
			std::cout << vowels[vowel_index] << std::endl;
			vowel_count++;
		}
	}
}



std::cout << vowel_count;
*/





//OOOOO
//OOOO
//OOOOOOOOOOOOOOOOOOOOOOO

/*tips array

srand time(null)
for	..
{
	srand(values.at(i)) -> pour mettre une seed random a chaque fois 
}
*/
