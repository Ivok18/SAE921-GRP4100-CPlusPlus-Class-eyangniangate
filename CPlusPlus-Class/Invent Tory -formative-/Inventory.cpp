#include "Inventory.h"

Inventory::Inventory()
{
}

Inventory::Inventory(std::vector<Item*> pointers_to_items_)
{
	pointers_to_items = pointers_to_items_;
}

Inventory::~Inventory()
{
}

std::vector<Item*> Inventory::Get_List_Of_Pointers_To_Items()
{
	return pointers_to_items;
}

void Inventory::Add(Item* pointer_to_item)
{
	pointers_to_items.emplace_back(pointer_to_item);
	std::move(pointer_to_item);
}

void Inventory::See_Items()
{
	for (Item* pointer_to_item : pointers_to_items)
	{
		pointer_to_item->Print_Name();
		std::cout << std::endl;
	}
}

 
