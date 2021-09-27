// Exercices.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.





// Write a C++ program to reverse a given string

	/*
	std::cout << "Enter your string: ";

	std::string my_string;

	std::cin >> my_string;

	std::string my_inverso_string;

	std::cout << "inverso: ";

	for (int letter = my_string.length() - 1; letter >= 0; letter--)
	{
		my_inverso_string += my_string[letter];
	}

	std::cout << my_inverso_string;
	*/




	// 0000000000000000000000000000000000
	// 00000000000000000000000000000000
	// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO







		//Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
		/*
		std::array alphabet
		{
			'a','b', 'c', 'd',
			'e', 'f', 'g', 'h',
			'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p',
			'q', 'r', 's', 't',
			'u', 'v', 'w', 'x',
			'y', 'z'
		};

		for (auto letter : alphabet)
		{
			std::cout << letter;
		}

		std::cout << std::endl;
		std::cout << std::endl;


		std::cout << "Write a word: ";

		std::string word;

		std::cin >> word;

		std::cout << word << " becomes ";

		for (int letter = 0; letter < word.size() ; letter++)
		{
			if(word.at(letter) == 'z')
			{
				word.at(letter) = 'a';
			}

			else
			{
				word.at(letter)++;
			}
		}


		std::cout << word;
		*/

		/*

		std::cout << "Write words: ";

		std::string za_words;

		std::getline(std::cin, za_words);


		for (int letter = 0; letter < za_words.length(); letter++)
		{
			if (letter == 0)
			{
				za_words[letter] = toupper(za_words[letter]);
			}

			if (za_words[letter] == ' ')
			{
				letter++;
				za_words[letter] = toupper(za_words[letter]);
			}
		}

		std::cout << "\n" << za_words;
		*/


		// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
		// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
		// OOOOOOOOOOOOOOOOOOOOOOOO








		// Write a C++ program to find the largest word in a given string.
			/*
			std::cout << "Write something.." << "\n";

			std::string word;

			std::getline(std::cin, word);

			std::cout << std::endl;


			int buffer = 0; //nombre de lettres du mot courant
			int buffer_with_most_letters = 0; //nombre de lettres du mot le plus long
			int current_letter = 0; //indice de la lettre courante de l'expression "word"
			int index_first_letter_of_largest_word = 0;//indice de la premiere lettre du mot le plus long
			int current_buffer_first_letter = 0; //indice de la premiere lettre du mot courant
			int number_of_words = 0; //nombre de mots dans l'expression WORD




			for (int letter = 0; letter < word.length(); letter++)
			{
				current_letter = letter; //la lettre courante du string

				buffer = buffer + 1; // on incremente le nombre de lettre du mot courant a chaque nouvelle lettre

				//au début du string
				if (letter == 0)
				{

					current_buffer_first_letter = letter; //indice de la premiere lettre du mot courant (premier mot)
				}


				//si la lettre courante est 'espace'
				if (word[current_letter] == ' ')
				{
					buffer = buffer - 1; //on decremente le nombre de lettre du mot courant


					number_of_words++; //ça veut dire que il y a un mot de plus, parce que un espace signifie l'arrivée d'un nouveau mot
					// -> ne prend en compte que ce scenario

					// si le mot courant(un des mots du string) a plus de lettres que le mot le plus long
					if (buffer >= buffer_with_most_letters)
					{
						buffer_with_most_letters = buffer; // le mot le plus long est le mot courant
						current_buffer_first_letter = current_letter - buffer; //-> on enregistre l'indice de sa premiere lettre
						index_first_letter_of_largest_word = current_buffer_first_letter; // ->on enregistre l'indice de sa premiere lettre

					}

					buffer = 0;	// on reinitialise le nombre de lettres du mot courant
				}


				//si on est a la fin du string
				if (current_letter == word.length() - 1)
				{

					//ça veut dire que il y a un mot de plus, car si on est la fin du string, ça veut dire que y'a un mot juste avat la fin
					number_of_words++;
					//-> ne prend pas en compte les autres scenario. Exemple: le string est rempli d'espace

					// si le dernier mot du string a plus de lettre que le mot le plus long
					if (buffer >= buffer_with_most_letters)
					{
						buffer_with_most_letters = buffer; // le mot le plus long est le dernier mot
						current_buffer_first_letter = current_letter - buffer + 1; // -> on enregistre l'indice de la premiere lettre du dernier mot
						index_first_letter_of_largest_word = current_buffer_first_letter; // -> on enregistre l'indice de la premiere lettre du dernier mot
					}

				}


			}

			if (number_of_words == 1)
			{
				std::cout << "largest word is: " << word << std::endl;
			}


			for (int letter = index_first_letter_of_largest_word; letter < index_first_letter_of_largest_word + buffer; letter++)
			{
				std::cout << word[letter];
			}

			*/


			// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
			// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
			// OOOOOOOOOOOOOOOOOOOOOOOO



			//Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
				/*
				std::cout << "Write something.." << std::endl;

				std::string string1;

				std::getline(std::cin, string1);



				for (int asci = 0; asci < string1.length(); asci++)
				{
					for (int asci_ = asci; asci_< string1.length(); asci_++)
					{
						if (string1[asci] > string1[asci_])
						{
							int temp = string1[asci];
							string1[asci] = string1[asci_];
							string1[asci_] = temp;
						}
					}
				}

				std::cout << string1;
				*/





				// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
				// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
				// OOOOOOOOOOOOOOOOOOOOOOOO



			//Write a C++ program to count all the words in a given string.
				/*
				std::cout << "Write something.." << std::endl;

				std::string a_string;

				std::getline(std::cin, a_string);

				int number_of_space = 0;
				int number_of_real_space = 0;
				int number_of_word = 0;


				for (int letter = 0; letter < a_string.size(); letter++)
				{
					if (a_string[letter] == ' ')		// && ((a_string[letter + 1] > 65 && a_string[letter + 1] <= 122) && (a_string[letter - 1] > 65 && a_string[letter - 1] <= 122)))
					{
						number_of_space++;
					}
				}

				if (number_of_space == a_string.length())
				{
					number_of_word = 0;
					std::cout << "there is no word" << std::endl;
				}

				else
				{
					number_of_word = number_of_space + 1;
					std::cout << "there is " << number_of_word << " word(s)" << std::endl;
				}
				*/



				// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOO



			/*
				//Write a C++ program to check whether two characters present equally in a given string.

				std::cout << "Write something.. \n";

				std::string stringus;

				std::getline(std::cin, stringus);

				bool repeat = false;

				//chaque lettre parcours tout le mot pour savoir si elle a un doublon
				for (int letter = 0; letter< stringus.length(); letter++)
				{
					for (int letter_ = 0; letter_ < stringus.length(); letter_++)
					{
						if (letter_ != letter)
						{
							std::cout << "on compare " << stringus[letter] << " et " << stringus[letter_] << std::endl;
							if (stringus[letter] == stringus[letter_])
							{
								repeat = true;
								std::cout << stringus[letter] << " = " << stringus[letter_] << std::endl;
								std::cout << "+1";
								std::cout << "\n\n";
							}
							else
							{
								std::cout << stringus[letter] << " =/= " << stringus[letter_] << std::endl;
								std::cout << "+0";
								std::cout << "\n\n";
							}

						}

					}
				}


				if (repeat)
				{
					std::cout << "EQUALITY!!!";
				}

				else
				{
					std::cout << "NO EQUALITY";
				}
				*/



				// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOO

			// Write a C++ program to check if a given string is a Palindrome or not. Go to the editor
				/*
				std::cout << "Write something..\n";

				std::string stringus;
				std::string reverse_string;
				std::string stringus_without_space;

				bool palindrom_detection = false;

				std::getline(std::cin, stringus);

				for (int letter = 0; letter < stringus.length(); letter++)
				{
					if (stringus[letter] != ' ')
					{
						stringus_without_space += stringus[letter];
					}
				}


				std::cout << stringus_without_space << std::endl;


				for (int letter = stringus_without_space.length() - 1; letter >= 0 ; letter--)
				{
					reverse_string += stringus_without_space[letter];
				}

				std::cout << reverse_string << std::endl;

				if (stringus_without_space == reverse_string)
				{
					palindrom_detection = true;
				}

				if (palindrom_detection)
				{
					std::cout << "cool";
				}

				*/



				// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOO


			//Write a C++ program to find a word in a given string which has the highest number of repeated letters.
			/*
			bool canTouch(char value_to_test, std::string forbidden_tab)
			{
				for (int letter = 0; letter < forbidden_tab.length() ; letter++)
				{
					if (value_to_test == forbidden_tab[letter])
					{
						return false;
					}
				}

				return true;
			}


			int main()
			{


				std::cout << "Write something.. \n";

				std::string stringus;

				std::getline(std::cin, stringus);


				int the_highest_number_of_repeated_letter = 0;

				int number_of_repeated_letter = 0;

				int index_of_first_letter_of_word_with_highest_number_of_repeated_letter = 0;

				int index_of_first_letter_of_current_word = 0;

				int buffer = 0;

				std::string i_dont_want_to_touch_you;

				bool repeated = false;

				for (int letter = 0; letter < stringus.length(); letter++)
				{
					buffer++;

					// CE BLOC INTERVIENT A CHAQUE FOIS QU IL Y A UN NOUVEAU MOT
					// CE BLOC INTERVIENT A CHAQUE FOIS QU IL Y A UN NOUVEAU MOT
					// CE BLOC INTERVIENT A CHAQUE FOIS QU IL Y A UN NOUVEAU MOT
					if (stringus[letter] == ' ')
					{
						index_of_first_letter_of_current_word = letter + 1;

						if (number_of_repeated_letter > the_highest_number_of_repeated_letter)
						{
							the_highest_number_of_repeated_letter = number_of_repeated_letter;
							index_of_first_letter_of_word_with_highest_number_of_repeated_letter = letter - buffer + 1;
						}

						number_of_repeated_letter = 0;
						buffer = 0;
					}
					// CE BLOC INTERVIENT A CHAQUE FOIS QU IL Y A UN NOUVEAU MOT
					// CE BLOC INTERVIENT A CHAQUE FOIS QU IL Y A UN NOUVEAU MOT
					// CE BLOC INTERVIENT A CHAQUE FOIS QU IL Y A UN NOUVEAU MOT







					// CE BLOC COMPTE LE NOMBRE DE LETTRES AYANT UN DOUBLON DANS LE MOT COURANT
					// CE BLOC COMPTE LE NOMBRE DE LETTRES AYANT UN DOUBLON DANS LE MOT COURANT
					// CE BLOC COMPTE LE NOMBRE DE LETTRES AYANT UN DOUBLON DANS LE MOT COURANT
					if (stringus[letter] != ' ')
					{

						if (letter == 0)
						{
							index_of_first_letter_of_current_word = letter;
						}


						if (canTouch(stringus[letter], i_dont_want_to_touch_you))
						{
							for (int letter_ = index_of_first_letter_of_current_word; stringus[letter_] != ' '; letter_++)
							{
								if (letter_ != letter && canTouch(stringus[letter_], i_dont_want_to_touch_you))
								{
									if (stringus[letter] == stringus[letter_])
									{
										i_dont_want_to_touch_you += stringus[letter];
										repeated = true;
									}
								}
							}

							if (repeated)
							{
								number_of_repeated_letter++;
							}

							repeated = false;
						}
					}
					// CE BLOC COMPTE LE NOMBRE DE LETTRES AYANT UN DOUBLON DANS LE MOT COURANT
					// CE BLOC COMPTE LE NOMBRE DE LETTRES AYANT UN DOUBLON DANS LE MOT COURANT
					// CE BLOC COMPTE LE NOMBRE DE LETTRES AYANT UN DOUBLON DANS LE MOT COURANT




					// CE BLOC INTERVIENT QUAND ON ATTEINT LA FIN DU STRING
					// CE BLOC INTERVIENT QUAND ON ATTEINT LA FIN DU STRING
					// CE BLOC INTERVIENT QUAND ON ATTEINT LA FIN DU STRING
					if (letter + 1 == stringus.length())
					{
						if (number_of_repeated_letter > the_highest_number_of_repeated_letter)
						{
							the_highest_number_of_repeated_letter = number_of_repeated_letter;
							index_of_first_letter_of_word_with_highest_number_of_repeated_letter = letter - buffer + 1;
						}
					}
					// CE BLOC INTERVIENT QUAND ON ATTEINT LA FIN DU STRING
					// CE BLOC INTERVIENT QUAND ON ATTEINT LA FIN DU STRING
					// CE BLOC INTERVIENT QUAND ON ATTEINT LA FIN DU STRING



				}

				std::cout << the_highest_number_of_repeated_letter << std::endl;
				*/






				// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
					// OOOOOOOOOOOOOOOOOOOOOOOO




				//Write a C++ program to insert a dash character (-) between two odd(impair) numbers in a given string of numbers.
					//Example:
					//Sample Input : 1345789
					//Sample Output : Result-> 1 - 345 - 789
					/*
					
		///////////////////////////		FONCTION		//////////////////////////
					/*
					int ToInt(char char_to_convert)
					{
						char c;

						c = char_to_convert;

						if (c == '0')
							return 0;

						if (c == '1')
							return 1;

						if (c == '2')
							return 2;

						if (c == '3')
							return 3;

						if (c == '4')
							return 4;

						if (c == '5')
							return 5;

						if (c == '6')
							return 6;

						if (c == '7')
							return 7;

						if (c == '8')
							return 8;

						if (c == '9')
							return 9;

						return 10;
					}
					*/
					///////////////////////////		FONCTION		//////////////////////////
/*





					std::cout << "Write \n";

					std::string stringos;

					std::getline(std::cin, stringos);

					for (int index_letter = 0; index_letter < stringos.length(); index_letter++)
					{
						if(ToInt(stringos[index_letter]) % 2 != 0 && ToInt(stringos[index_letter+1]) % 2 != 0)
						{
							stringos.resize(stringos.size() + 1, '+');


							for (int idx = stringos.size() - 1; idx >= index_letter + 1; idx--)
							{
								stringos[idx] = stringos[idx - 1];
							}

							stringos[index_letter + 1] = '-';

						}
					}

					std::cout << stringos;
					*/




					// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
						// OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
						// OOOOOOOOOOOOOOOOOOOOOOOO



					//Write a C++ program to change the case (lower to upper and upper to lower cases) of each character of a given string.
					//Example:
					//Sample Input : Python
					//Sample Output : pYTHON
					/*
					std::cout << "WRItE! \n";

					std::string stringas;

					std::getline(std::cin, stringas);

					for (int indx = 0; indx < stringas.length(); indx++)
					{
						if (std::isupper(stringas[indx]))
						{
							stringas[indx] = tolower(stringas[indx]);
						}

						else if(std::islower(stringas[indx]))
						{
							stringas[indx] = toupper(stringas[indx]);
						}
					}

					std::cout << stringas;
					*/










//OOOOOOOOOOOOOOOOOOOOOO
//OOOOOOOOOOOOOOOOOOO
//OOOOOOOOOOOOO
//OOOOOOOOOOOOOO



//Write a C++ program to find the numbers in a given string and calculate the sum of all numbers.
	//Example:
	//Sample Input: w3resource from 2008
	//Sample Output: Sum of the numbers: 2011

	//constexpr int TAB_SIZE = 10;

	/*
	std::cout << "Dis-moi, si j'dois partir ou pas \n";

	std::string dms;

	std::getline(std::cin, dms);

	//std::string tab_numbers_in_string[TAB_SIZE] = { "Salut", "ça" };

	std::string number_in_strings;

	int number_of_digits = 0;

	int buffer = 0;

	int sum = 0;


	for (int idx_letter = 0; idx_letter < dms.length(); idx_letter++)
	{
		//INSTRUCTIONS A AFFECTUER TANT QU'IL N'Y PAS D'ESPACE ET QU'ON EST PAS EN FIN DE MOT
		if (dms[idx_letter] != ' ' && idx_letter + 1 != dms.length())
		{
			buffer++;

			if (std::isdigit(dms[idx_letter]))
			{
				number_of_digits++;
				number_in_strings += dms[idx_letter];
			}
		}


		//FIN DU STRING
		if (idx_letter + 1 == dms.length())
		{
			buffer++;

			if (std::isdigit(dms[idx_letter]))
			{
				number_of_digits++;
				number_in_strings += dms[idx_letter];
			}

			//SOIT LE MOT EST UN NOMBRE
			//SOIT LE MOT CONTIENT UN CHIFFRE
			if (number_of_digits == buffer || number_of_digits == 1)
			{
				//tab_numbers_in_string->append(number_in_strings);
				sum += std::stoi(number_in_strings);
			}

			*/
			//SOIT LE MOT CONTIENT:
			/*
			ou PLUSIEURS CHIFFRES EPARPILLES
			ou PLUSIEURS NOMBRES EPARPILLES
			ou UN NOMBRE
			*/

			/*
					else if(number_of_digits > 1)
					{
						// A FAIRE
					}



				}


				//ENTRE DEUX MOTS ON FAIT LE POINT SUR LES DONNEES DU MOT PRECEDENT
				if (dms[idx_letter] == ' ')
				{
					if (number_of_digits == buffer || number_of_digits == 1)
					{
						//tab_numbers_in_string->append(number_in_strings);
						sum += std::stoi(number_in_strings);
					}

					buffer = 0;
					number_of_digits = 0;
					number_in_strings.clear();

				}


			}

			std::cout << sum << std::endl;
			*/



		//OOOOOOOOOOOOOOOOOOOOOOO
		//OOOOOOOOOOOOOOOOOOOOOO
		//OOOOOOOOOOOOOOOOOOOOO
		//OOOOOOOOOOOOOOOOOOOO



	// Find a way to replace a whole string in another (use find, substr, replace)
	//Example :
	//Input: Hi, [Title][Name] !How do you do ?
	//Output : Hi Mr Albert !How do you do ?

	/*
	std::string model_sentence = "I want to [action] on [day]";

	std::cout << model_sentence;

	std::cout << "\n\n";

	std::cout << "Rewrite the whole sentence with an action and a day of your choice \n\n";

	std::string new_sentence; std::getline(std::cin, new_sentence);

	std::cout << std::endl << std::endl;

	std::cout << "-------------------------------\n\n";

	int number_of_space = 0;

	int buffer = 0;

	std::string action_, day_;

	std::string lost_string;

	for (int indx_letter = 0; indx_letter < new_sentence.length(); indx_letter++)
	{

		if (new_sentence[indx_letter] != ' ')
		{
			buffer++;
		}


		if (new_sentence[indx_letter] == ' ')
		{
			number_of_space++;

			if (number_of_space == 4)
			{
				action_ = new_sentence.substr(indx_letter - buffer, buffer);

				//SI LE NOUVEAU MOT EST PLUS PETIT QUE L'ESPACE ALLOUE PAR "[action]"
				if (action_.length() < 8) //8 c'est le nombre de caracteres de "[action]" crochets inclus
				{
					//ON REMPLACE LES CARACTERES EN TROP DE "[action]" PAR DES ESPACES
					model_sentence.replace(model_sentence.find("[action]"), action_.length(), action_);

					int number_of_additional_space_in_model_sentence = 8 - action_.length();

					for (int indx_letter = model_sentence.find(action_, 8) + 8 - number_of_additional_space_in_model_sentence; indx_letter < model_sentence.find(action_, 8) + 8; indx_letter++)
					{
						model_sentence[indx_letter] = ' ';
					}

				}

				//SI LE NOUVEAU MOT A LA MEME TAILLE QUE L'ESPACE ALLOUE par "[action]"
				if (action_.length() == 8)
				{
					// BASIQUE
					model_sentence.replace(model_sentence.find("[action]"), action_.length(), action_);
				}


				//SI LE NOUVEAU MOT EST PLUS GRAND QUE L'ESPACE ALLOUE PAR "[action]"
				if (action_.length() > 8)
				{

						//A FAIRE
						//A FAIRE
				}
			}



			buffer = 0;
		}

		if (indx_letter + 1 == new_sentence.length())
		{
			day_ = new_sentence.substr(indx_letter - buffer + 1, buffer);

			model_sentence.replace(model_sentence.find("[day]"), day_.length(), day_);

			buffer = 0;
		}

	}



	std::cout << model_sentence << std::endl;
	*/

		//OOOOOOOOOOOOOOOOOO
		//OOOOOOOOOOOOOOOOOO
		//OOOOOOOOOOOOOOOOOOOOO
		//OOOOOOOOOOOOOOOOOOO
		//OOOOOOOOOOOOOOOOOO


	struct Student
	{
		std::string nom;
		std::string prenom;
		float note_ds;
		float coef_ds;
		float note_ex;
		float coef_ex;
		float moyenne;
	};

	int main()
	{

		//Écrire un programme permettant de saisir les informations concernant N élèves sachant que :

		/*10 < N < 30
		La structure contenant les informations de chaque élève doit comporter les champs suivants :
		nom : chaine[10]
		prenom : chaine[10]
		note_ds : réel
		coef_ds : entier
		note_ex : réel
		moyenne : réel
		on peut ranger ces structures d'informations dans un tableau.
		on doit afficher le nom,le prénom et la moyenne de chaque élève sachant que :
		moyenne=((note_ds*coef_ds+note_ex*coef_ex)/(coef_ds+coef_ex)).
		*/


		Student students[12];

		for (int indx_student = 0; indx_student < 12; indx_student++)
		{

			/* ON ENTRE LES INFOS DE L'ELEVE */
			/* NOM */
			std::cout << "nom: ";
			std::string nom_;
			std::cin >> nom_;

			/* PRENOM */
			std::cout << "prenom: ";
			std::string prenom_;
			std::cin >> prenom_;

			/* NOTE DS */
			std::cout << "note ds: ";
			float note_ds;
			std::cin >> note_ds;

			/* COEF DS */
			std::cout << "coef ds: ";
			int coef_ds;
			std::cin >> coef_ds;

			/* NOTE EX */
			std::cout << "note ex: ";
			float note_ex;
			std::cin >> note_ex;

			/* COEF EX */
			std::cout << "coef ex: ";
			float coef_ex;
			std::cin >> coef_ex;

			std::cout << "\n\n";


			/* ON STOCK LES INFOS DANS UN DOSSIER (struct) */
			// MOYENNE (moyenne=((note_ds*coef_ds+note_ex*coef_ex)/(coef_ds+coef_ex)).
			float moyenne;
			moyenne = ((note_ds * coef_ds + note_ex * coef_ex) / (coef_ds + coef_ex));
			Student student{ nom_, prenom_, note_ds, coef_ds, note_ex, coef_ex, moyenne };


			/* ON AJOUTE LE DOSSIER DE L'ELEVE AU DOSSIER CONTENANT LES DOSSIERS DES ELEVES (tableau de struct*/
			students[indx_student] = student;


		}

		/* ON PARCOURT LE DOSSIER DES ELEVES, ET ON AFFICHE LEURS DATAS */
		for (int indx_agent = 0; indx_agent < 12; indx_agent++)
		{
			std::cout << "\n--------AGENT SPECIAL CAMOUFLE N" << indx_agent << "------------\n";
			std::cout << "nom: " << students[indx_agent].nom << '\n';
			std::cout << "note ds: " << students[indx_agent].note_ds << '\n';
			std::cout << "coef ds: " << students[indx_agent].coef_ds << '\n';
			std::cout << "note ex: " << students[indx_agent].note_ex << '\n';
			std::cout << "coef ex: " << students[indx_agent].coef_ex << '\n';
			std::cout << "moyenne: " << students[indx_agent].moyenne << '\n';
		}


		std::cout << std::endl;

		return EXIT_SUCCESS;
	}


	//OOOOOO
	//OOOO
	//OOOO
	//OOOOO
	///OOO
	//OOO
	//OOOOOOOOOOOOOOOOOOOO

	//EXERCICE 2
	//On veut gérer des produits dans un entrepôt. Un produit est défini par 
	//: • Un code(entier) • Une désignation(chaine de caractère) • Prix de vente(réel) • Quantité(entier)
	//Il faut gérer une liste de produits en veillant à ce qu'il n'y ait pas deux produits avec le même code produit.
	//Bien sûr la quantité en stock ne peut pas être négative.L’entrepôt comportera au maximum 100 produits.
	//Sous forme d’un menu, programmer les fonctionnalités suivantes : 
	//1. Ajouter un produit(on tape le code produit et l'intitulé, la quantité est initialisée à 0). 
	//2. Afficher la liste de produits. 
	//3. Afficher les produits en rupture de stock. 
	//4. Rechercher un produit en tapant le code produit. 
	//5. Acheter un produit en tapant le code produit et la quantité achetée. 
	//6. Vendre un produit en tapant le code produit et la quantité vendue et générer le montant à payer 
	//7. Trier les produits par quantité. 
	//8. Quitter

	struct Produit
	{
		int codeProduit = 0;
		std::string nom = "null";
		float prix_de_vente = 0;
		int quantite = 0;
	};

	int main()
	{
		int choix;
		std::vector<Produit> entrepot;

		do
		{


			/* MENU PRINCIPAL */
			std::cout << "-1- Ajouter un produit" << std::endl;
			std::cout << "-2- Afficher la liste de produits" << std::endl;
			std::cout << "-3- Afficher les produits en rupture de stock" << std::endl;
			std::cout << "-4- Rechercher un produit en tapant le code produit" << std::endl;
			std::cout << "-5- Acheter un produit en tapant le code produit et la quantité achetée" << std::endl;
			std::cout << "-6- Vendre un produit en tapant le code produit et la quantité vendue et générer le montant à payer" << std::endl;
			std::cout << "-7- Trier les produits par quantité" << std::endl;
			std::cout << "-8- Quitter" << std::endl;
			std::cout << "Fais ton choix: " << std::endl;


			std::cin >> choix;

			if (choix == 1)
			{
				std::cout << std::endl;
				std::cout << "code produit: ";

				int codeProduit;
				std::cin >> codeProduit;

				std::cout << "nom: ";
				std::string nom;
				std::cin >> nom;

				std::cout << "prix: ";
				float prix;
				std::cin >> prix;

				std::cout << "quantite: ";
				int quantite;
				std::cin >> quantite;

				Produit nouveau_produit;
				nouveau_produit = { codeProduit, nom, prix, quantite };

				entrepot.push_back(nouveau_produit);
			}

			if (choix == 2)
			{
				for (Produit p : entrepot)
				{
					std::cout << "--POKEMON N" << p.codeProduit << "--" << std::endl;
					std::cout << "il s'appelle " << p.nom << std::endl;
					std::cout << "tu peux l'avoir pour " << p.prix_de_vente << "bitcoins" << std::endl;
					std::cout << "il n'en reste plus que " << p.quantite << "!" << std::endl << std::endl;

				}

				std::cout << std::endl << std::endl;
			}

			if (choix == 3)
			{
				for (Produit p : entrepot)
				{
					if (p.quantite == 0)
					{
						std::cout << "Le pokemon " << p.nom << " n'est plus disponible ): " << std::endl;
						std::cout << "Repassez plus tard" << std::endl << std::endl;
					}
				}

				std::cout << std::endl << std::endl;
			}

			if (choix == 4)
			{
				std::cout << "code produit: ";
				int codeProduit;
				std::cin >> codeProduit;

				for (Produit p : entrepot)
				{
					if (p.codeProduit == codeProduit)
					{
						std::cout << "--POKEMON N" << p.codeProduit << "--" << std::endl;
						std::cout << "il s'appelle " << p.nom << std::endl;
						std::cout << "tu peux l'avoir pour " << p.prix_de_vente << " bitcoins" << std::endl;
						std::cout << "il n'en reste plus que " << p.quantite << "!" << std::endl;
						std::cout << std::endl << std::endl;
					}

					else
					{
						std::cout << "Ce pokemon n'existe pas ):" << std::endl << std::endl;
					}
				}

				std::cout << std::endl << std::endl;
			}

			if (choix == 5)
			{
				std::cout << "code produit: ";
				int codeProduit;
				std::cin >> codeProduit;

				std::cout << "quantite: ";
				int quantite;
				std::cin >> quantite;

				for (Produit p : entrepot)
				{
					if (p.codeProduit == codeProduit)
					{

						std::cout << "Felicitations! Tu viens d'adopter " << p.quantite << " " << p.nom << "!" << std::endl;
						std::cout << "Tu as perdu " << p.quantite * p.prix_de_vente << " bitcoins" << std::endl << std::endl;

						p.quantite = p.quantite - quantite;
						if (p.quantite <= 0)
						{
							p.quantite = 0;
						}

					}

					else
					{
						std::cout << "Ce pokemon n'existe pas ):" << std::endl << std::endl;
					}
				}

				std::cout << std::endl << std::endl;
			}

			if (choix == 6)
			{
				std::cout << "code produit: ";
				int codeProduit;
				std::cin >> codeProduit;

				std::cout << "quantite: ";
				int quantite;
				std::cin >> quantite;

				for (Produit p : entrepot)
				{
					if (p.codeProduit = codeProduit)
					{
						std::cout << "Felicitations! Tu viens d'offrir un " << p.nom << "!" << std::endl;
						std::cout << "Tu as recu " << p.quantite * p.prix_de_vente << " bitcoins" << std::endl;

						p.quantite = p.quantite - quantite;

						if (p.quantite <= 0)
						{
							p.quantite = 0;
						}
					}

					else
					{
						std::cout << "Ce pokemon n'existe pas ):" << std::endl << std::endl;
					}
				}

				std::cout << std::endl << std::endl;
			}

			if (choix == 7)
			{
				for (int indx_produit = 0; indx_produit < entrepot.size(); indx_produit++)
				{
					for (int indx_ = indx_produit; indx_ < entrepot.size(); indx_++)
					{
						if (entrepot[indx_produit].quantite > entrepot[indx_].quantite)
						{
							Produit temp = entrepot[indx_produit];
							entrepot[indx_produit] = entrepot[indx_];
							entrepot[indx_] = temp;
						}
					}
				}

				for (Produit p : entrepot)
				{
					std::cout << p.nom << '\t' << p.quantite << std::endl << std::endl;
				}

				std::cout << std::endl << std::endl;
			}

			if (choix == 8)
			{
				return EXIT_SUCCESS;
			}

		} while (choix != 9);


		return EXIT_SUCCESS;
