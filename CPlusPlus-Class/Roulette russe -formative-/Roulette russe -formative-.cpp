#include <iostream>
#include <time.h>
#include "RouletteRusse.h"

int main()
{
    srand(time(NULL));

    RouletteRusse roulette_russe;
    roulette_russe.begin();


   
    return EXIT_SUCCESS;
}