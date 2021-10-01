#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <random>

std::vector<std::string> breeds = { "Lusitano", "Cream", "Basque", "Bashkir", "Friesian", "Tiny", "Hayagriva" };
std::vector<std::string> run_synonyms = { "rushes", "spurts", "dashes", "flies", "gallops", "springs", "sprints", "lopes" };
std::vector<std::string> horse_names = { "Seamus", "Toby", "Peal", "Dolly", "Chucky", "Topaz", "Quicky", "Truffles", "Jetset", "Groovy","Frodoe","Kalina","Polly","Lexi","Buster","Punch" };

std::string generate_random_run_synonym()
{
	int rand_ = rand() % run_synonyms.size();
	return run_synonyms[rand_];
}
std::string generate_random_breed()
{
	int rand_ = rand() % breeds.size();
	return breeds[rand_];

}
std::string generate_random_horse_name()
{
	int rand_ = rand() % horse_names.size();
	return horse_names[rand_];
}

constexpr int MAX_SCORE = 100;
constexpr int MAX_HORSES = 15;
constexpr int MAX_HORSES_BET_ON = 3;

class Horse
{
private:
	std::string breed = " ";
	std::string name = " ";
	int score = 0;

public:
	void exist()
	{
		setName(generate_random_horse_name());
		setBreed(generate_random_breed());
	}

	void run()
	{
		int rand_ = rand() % MAX_SCORE;
		score = rand_;
	}
	std::string getBreed()
	{
		return breed;
	}
	void setBreed(std::string breed_)
	{
		breed = breed_;
	}
	std::string getName()
	{
		return name;
	}
	void setName(std::string name_)
	{
		name = name_;
	}
	int getScore()
	{
		return score;
	}

};
class HorseRacing
{
private:
	std::vector<Horse> horse_racing;
	std::vector<std::string> horses_bet_on;
	int max_participants = MAX_HORSES;
	int valid_bets = 0;
	int winning_bets = 0;
	bool clone_detected;

public:
	void begin()
	{
		create();
		do
		{
			clone_detected = false;
			replace_clones();

		} while (clone_detected);

		announce_horses();
		bet();
		start_race();
		sort_scores();
		show_scores();
	}

	void create()
	{
		for (int i = 0; i < max_participants; i++)
		{
			Horse horse;
			horse.exist();
			add(horse);
		}

	}
	void replace_clones()
	{
		for (int indx_horse = 0; indx_horse < max_participants; indx_horse++)
		{
			for (int indx_horse_ = 0; indx_horse_ < max_participants; indx_horse_++)
			{
				if (indx_horse_ != indx_horse)
				{
					if (horse_racing[indx_horse].getName() == horse_racing[indx_horse_].getName())
					{
						clone_detected = true;
						Horse new_horse;
						new_horse.exist();
						horse_racing[indx_horse_] = new_horse;
					}
				}
			}
		}
	}
	void announce_horses()
	{
		std::cout << "Here they are!" << std::endl;
		for (int index_horse = 0; index_horse < max_participants; index_horse++)
		{
			std::cout << "(" << horse_racing[index_horse].getName() << ")" << ", the " << horse_racing[index_horse].getBreed() << " horse " << std::endl;
		}
	}
	void add(Horse horse)
	{
		horse_racing.push_back(horse);
	}
	void bet()
	{
		do
		{
			valid_bets = 0;
			horses_bet_on.clear();
			std::cout << '\n' << "bets on!" << std::endl;
			std::cout << "Which tierce (3 horses) do you think will win?" << std::endl;

			for (int i = 0; i < MAX_HORSES_BET_ON; i++)
			{
				std::string horse_bet_on;
				std::cin >> horse_bet_on;
				horses_bet_on.push_back(horse_bet_on);
			}

			for (int indx_horse_name_bet_on = 0; indx_horse_name_bet_on < MAX_HORSES_BET_ON; indx_horse_name_bet_on++)
			{
				for (int indx_horse = 0; indx_horse < max_participants; indx_horse++)
				{
					if (horse_racing[indx_horse].getName() == horses_bet_on[indx_horse_name_bet_on])
					{
						valid_bets++;
					}

				}
			}


		} while (valid_bets < 3);

		std::cout << "so you bet on " << horses_bet_on[0] << ", " << horses_bet_on[1] << " and " << horses_bet_on[2] << " huh?";
		std::cout << std::endl << std::endl;
	}
	void start_race()
	{
		for (int indx_horse = 0; indx_horse < max_participants; indx_horse++)
		{
			std::cout << horse_racing[indx_horse].getName() << " " << generate_random_run_synonym() << "!" << std::endl;
			horse_racing[indx_horse].run();
		}

	}
	void sort_scores()
	{
		for (int indx_horse = 0; indx_horse < max_participants; indx_horse++)
		{
			for (int indx_horse_ = indx_horse; indx_horse_ < max_participants; indx_horse_++)
			{
				if (horse_racing[indx_horse].getScore() > horse_racing[indx_horse_].getScore())
				{
					Horse temp = horse_racing[indx_horse];
					horse_racing[indx_horse] = horse_racing[indx_horse_];
					horse_racing[indx_horse_] = temp;
				}
			}
		}
	}
	void show_scores()
	{
		std::cout << std::endl << std::endl;
		for (int indx_horse = 0; indx_horse < max_participants; indx_horse++)
		{
			std::cout << horse_racing[indx_horse].getName() << "  ";
			std::cout << horse_racing[indx_horse].getScore() << " s" << std::endl;
		}

		std::cout << std::endl << std::endl;

		if (win())
		{
			std::cout << std::endl << std::endl;
			std::cout << "CONGRATS!" << std::endl;
			std::cout << "You won " << winning_bets << " bet(s)!" << std::endl;
		}

		else
		{
			std::cout << std::endl << std::endl;
			std::cout << "YOU LOST UR BET ):" << std::endl;
		}
	}
	bool win()
	{
		for (int i_horse = 0; i_horse < MAX_HORSES_BET_ON; i_horse++)
		{
			for (int indx_race_horce = 0; indx_race_horce < 3; indx_race_horce++)
			{
				if (horses_bet_on[i_horse] == horse_racing[indx_race_horce].getName())
				{
					winning_bets++;
				}
			}
		}

		if (winning_bets >= 1)
		{
			return true;
		}

		return false;

	}


};

int main()
{
	srand(time(NULL));

	HorseRacing horse_racing;
	horse_racing.begin();

	return EXIT_SUCCESS;
}
