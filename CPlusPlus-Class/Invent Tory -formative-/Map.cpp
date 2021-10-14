#include "Map.h"

Map::Map()
{
	name = "map";
}

Map::Map(std::string name_)
{
	name = name_;
}

Map::~Map()
{
}

void Map::Use()
{
	Consult();
}

void Map::Consult()
{
	std::cout << "Consult " << name << ", user can now control gravity";
}

void Map::Print_Name()
{
	std::cout << name;
}

std::string Map::Get_Name()
{
	return name;
}
