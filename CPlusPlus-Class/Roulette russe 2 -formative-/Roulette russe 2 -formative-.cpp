#include <iostream>
#include "RouletteRusse2.h"
#include <time.h>


//Formative variante : Roulette bielorusse
//Implémenter le jeu de la roulette russe.
//Le barillet peut contenir 10 logements, on y place 2 balles au hasard.
//Puis on fait d’abord tourner le barillet(les balles doivent garder leurs positions respectives), puis les 2 joueurs tirent un coup l’un aprés l’autre.
int main()
{
    srand(time(NULL));
    RouletteRusse2 roulette_russe;
    roulette_russe.begin();
}
