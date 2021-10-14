#pragma once
#include <vector>
#include "Item.h"
class Inventory
{
protected:
	std::vector<Item*> pointers_to_items;

public:
	Inventory();
	Inventory(std::vector<Item*> pointers_to_items_);
	~Inventory();

	std::vector<Item*> Get_List_Of_Pointers_To_Items();
	void Add(Item* pointer_to_item);

	void See_Items();
	

};

