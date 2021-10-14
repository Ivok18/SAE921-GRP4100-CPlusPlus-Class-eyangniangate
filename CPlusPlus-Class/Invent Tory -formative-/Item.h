#pragma once
#include <string>
#include <iostream>
class Item
{
protected:
	std::string name;

public:
	Item();
	Item(std::string name_);
	~Item();
	
	virtual void Use() = 0;
	virtual void Print_Name() = 0;
	

};

