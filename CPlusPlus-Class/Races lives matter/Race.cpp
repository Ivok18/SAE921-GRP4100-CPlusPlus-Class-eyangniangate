#include "Race.h"
#include <iostream>

Race::Race()
{
    hp = 100;
    atk = 10;
}

Race::Race(int hp_, int atk_)
{
    hp = hp_;
    atk = atk_;
}

Race::~Race()
{
}

int Race::Hp()
{
    return hp;
}

int Race::Atk()
{
    return atk;
}

void Race::See_Stats()
{
    /*
    std::cout << "it seems you are worthy to see stats now, hmm:" << std::endl;
    std::cout <<  this->atk << " ATK " << "|| " <<  this->Hp() << " HP" << std::endl;
    */
}

void Race::Natural_Attack()
{
    std::cout << "Natural Attack" << std::endl << std::endl;
}

void Race::Natural_Defense()
{
    std::cout << "Natural Defense" << std::endl << std::endl;
}

void Race::Natural_Heal()
{
    std::cout << "Natural Heal" << std::endl << std::endl;
}

void Race::Natural_Power_Up()
{
    std::cout << "Natural Power Up" << std::endl << std::endl;
}
