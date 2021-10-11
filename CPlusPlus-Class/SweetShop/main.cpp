#include <iostream>
#include "Candy_Bag.h"
#include "another_lib.h"
#include <set>
#include <time.h>

int main()
{
    srand(time(NULL));
    std::vector<std::string> bank = create_names_bank2();
    Candy_Bag candy_bag(generate_name_from_bank2(bank));
    candy_bag.see_infos();
    candy_bag.sell_candies(10);
    candy_bag.see_infos();
    candy_bag.fill_bag();
    candy_bag.see_infos();
}

