#include <iostream>
#include <time.h>
#include <vector>

enum class Value : int
{
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5,
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	VALET = 11,
	QUEEN = 12,
	KING = 13,
	AS = 14,
};
enum class Type : int
{
	COEUR = 1,
	TREFLE = 2,
	CARREAU = 3,
	PIC = 4,
};


class Card
{
	//Attributes
private:
	Value value;
	Type type;

	//Functions
public:
	int getValue()
	{
		switch (value)
		{
		case Value::TWO:
			return 2;
			break;

		case Value::THREE:
			return 3;
			break;

		case Value::FOUR:
			return 4;
			break;

		case Value::FIVE:
			return 5;
			break;

		case Value::SIX:
			return 6;
			break;

		case Value::SEVEN:
			return 7;
			break;

		case Value::EIGHT:
			return 8;
			break;

		case Value::NINE:
			return 9;
			break;

		case Value::TEN:
			return 10;
			break;

		case Value::VALET:
			return 11;
			break;

		case Value::QUEEN:
			return 12;
			break;

		case Value::KING:
			return 13;
			break;

		case Value::AS:
			return 14;
			break;

		default:
			return EXIT_FAILURE;
			break;
		}
	}
	std::string getType()
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
	void setValue(Value s_value)
	{
		value = s_value;
	}
	void setType(Type s_type)
	{
		type = s_type;
	}
	void see()
	{
		if (getValue() == 11)
		{
			std::cout << "VALET";
		}

		else if (getValue() == 12)
		{
			std::cout << "REINE";
		}

		else if (getValue() == 13)
		{
			std::cout << "ROI";
		}

		else if (getValue() == 14)
		{
			std::cout << "AS";
		}

		else
		{
			std::cout << getValue();
		}

		std::cout << " de " << getType();
	}
	

};
class Deck
{
	
private:
	std::vector<Card> deck;
	int deck_size = 52;
	std::vector<Type> initialize_standard_types()
	{
		std::vector<Type> types_;
		Type coeur;
		coeur = Type::COEUR;

		Type trefle;
		trefle = Type::TREFLE;

		Type carreau;
		carreau = Type::CARREAU;

		Type pic;
		pic = Type::PIC;

		types_.push_back(coeur); types_.push_back(trefle); types_.push_back(carreau); types_.push_back(pic);

		return types_;
	}
	std::vector<Value> initialize_standard_values()
	{
		std::vector<Value> values_;

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

		values_.push_back(two);
		values_.push_back(three);
		values_.push_back(four);
		values_.push_back(five);
		values_.push_back(six);
		values_.push_back(seven);
		values_.push_back(six);
		values_.push_back(nine);
		values_.push_back(ten);
		values_.push_back(valet);
		values_.push_back(queen);
		values_.push_back(king);
		values_.push_back(as);

		return values_;

	}
	std::vector<Type> types = initialize_standard_types();
	std::vector<Value> values = initialize_standard_values();

	
public:
	bool clone_is_detected = false;
	int number_of_clones = 0;
	std::vector<Card> create()
	{
		for (int indx_value = 0; indx_value < values.size(); indx_value++)
		{
			for (int indx_type = 0; indx_type < types.size(); indx_type++)
			{
				add(values[indx_value], types[indx_type]);
			}
		}

		return deck;
	}
	std::vector<Card> access_deck()
	{
		return deck;
	}
	int getSize()
	{
		return deck_size;
	}
	void show()
	{
		for (int index_deck = 0; index_deck < deck.size(); index_deck++)
		{
			deck[index_deck].see();
			std::cout << std::endl;
		}

	}
	void random_hand()
	{
		for (int index_deck = 0; index_deck < 5; index_deck++)
		{
			int random_index = rand() % (deck.size());
			deck[random_index].see();
			std::cout << std::endl;
		}
	}
	void add(Value value, Type type)
	{
		Card card;
		card.setValue(value);
		card.setType(type);
		deck.push_back(card);

	}
	void replace_the_clones()
	{
		for (int indx_deck = 0; indx_deck < deck_size; indx_deck++)
		{
			for (int indx_deck_ = 0; indx_deck_ < deck_size; indx_deck_++)
			{
				if (indx_deck_ != indx_deck)
				{
					if ((deck[indx_deck].getType() == deck[indx_deck_].getType()) && (deck[indx_deck].getValue() == deck[indx_deck_].getValue()))
					{
						clone_is_detected = true;
						number_of_clones++;
						deck[indx_deck_] = generate_new_card();
					}
				}
			}
		}
	}
		Card generate_new_card()
		{
			Card card;
			int rand_value_index = rand() % values.size();
			int rand_type_index = rand() % types.size();
			card.setType(types[rand_type_index]);
			card.setValue(values[rand_value_index]);

			return card;
		}
	
};


int main()
{
	//	POKER 2 -formative-	//
	//creation deck PRANK
	srand(time(NULL));
	Deck deck;

	

	do
	{
		deck.clone_is_detected = false;
		deck.access_deck().clear();
		deck.create();
		deck.replace_the_clones();

		//for loop too fast at adding new cards -> problem unsolved..
		// !!!!! advice !!!! -> restart the program if it takes too mich time to finish
		std::cout << "// !!!!! advice !!!! -> restart the program if it takes too much time to finish" << std::endl;
	} while (deck.number_of_clones > 13);


	
	std::cout << deck.number_of_clones << " doublons" << std::endl;
	
	//interactions joueur systeme
	char action;
	do
	{
		std::cout << "Appuie sur -t- pour tirer 5 cartes aleatoirement: ";
		std::cin >> action;
	} while (action != 't');

	std::cout << std::endl;

	if (action == 't')
	{
		deck.random_hand();
	}

	return EXIT_SUCCESS;
}
