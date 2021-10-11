#pragma once
#include "Astrobject.h"

class Moon : public Astrobject
{
protected:
	int gravity;
	

public:
	Moon();
	Moon(std::string name_);
	~Moon();
	void Get_Datas();
};

