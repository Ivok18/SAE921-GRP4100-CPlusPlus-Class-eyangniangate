#include <iostream>
#include <time.h>

// fonction qui additionne deux entiers (à définir)
int somme(int valeur1, int valeur2)
{
    return valeur1 + valeur2;
}


int main()
{
    int mise = 5;
    bool continuer = true;
  
    do
    {
        srand(time(NULL));
        std::string reponse = "o";
        int scoreTemoin = 7;
        

        int de_un = 1 + (rand() % 6);
        int de_deux = 1 + (rand() % 6);


        std::cout << "Lancement du premier de... " << std::endl;
        std::cout << de_un << std::endl << std::endl;

        std::cout << "Lancement du deuxieme de... " << std::endl;
        std::cout << de_deux << std::endl << std::endl;

        int score = somme(de_un, de_deux);
        std::cout << "Score: " << score << std::endl;
        
       

        if (score <= scoreTemoin)
        {
            std::cout << "PERDU" << std::endl;
            continuer = false;
        }

        else if (score > scoreTemoin)
        {
            scoreTemoin = score;
            mise = mise * 2;
            std::cout << "Score temoin: " << scoreTemoin << std::endl;
            std::cout << "Mise: " << mise << std::endl;
            std::cout << "\n" << "\n" << "Appuie sur o pour garder ton gain" << std::endl;
            std::cout << "OU" << std::endl;
            std::cout << "Appuie sur d pour essayer de doubler ton gain" << std::endl;

            std::cin >> reponse; 
            if (reponse == "o")
            {
                std::cout << "Partie terminee. Tu gagnes " << mise << " francs" << std::endl;
                continuer = false;
            }

            else if (reponse == "d")
            {
                continuer = true;
            }

            else
            {
                // A traiter plus tard
            }
        }
    } while (continuer);

    
    return EXIT_SUCCESS;

}



