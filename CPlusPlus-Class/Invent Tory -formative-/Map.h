#pragma once
#include "Item.h"

class Map : public Item
{
protected:
	std::string name;

public:
	Map();
	Map(std::string name_);
	~Map();

	void Use();
	void Consult();
	void Print_Name();
	std::string Get_Name();


};

