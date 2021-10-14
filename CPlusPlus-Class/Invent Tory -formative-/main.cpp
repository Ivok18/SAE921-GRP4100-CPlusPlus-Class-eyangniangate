
#include <iostream>
#include "Inventory.h"
#include "Health_Potion.h"
#include "Force_Potion.h"
#include "Bow.h"
#include "Sword.h"
#include "Map.h"

int main()
{
    //INITS_
    Inventory inventory;

    Health_Potion health_potion("health potion");
    Item* pointer_to_health_potion = &health_potion;

    Force_Potion force_potion("force potion");
    Item* pointer_to_force_potion = &force_potion;

    Bow bow("bow");
    Item* pointer_to_bow = &bow;

    Sword sword("sword");
    Item* pointer_to_sword = &sword;

    Map map("map");
    Item* pointer_to_map = &map;

    //ADD ITEMS
    inventory.Add(pointer_to_health_potion);
    inventory.Add(pointer_to_force_potion);
    inventory.Add(pointer_to_sword);
    inventory.Add(pointer_to_bow);
    inventory.Add(pointer_to_map);
    //inventory.See_Items();

    //USE ITEMS
    for (auto i : inventory.Get_List_Of_Pointers_To_Items())
    {
        i->Use();
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}