#pragma once
#include "Vehicule.h"

class Vehicule_Wheels : public Vehicule	
{
	using Vehicule::see_infos;

private:
public:	
	Vehicule_Wheels();
	~Vehicule_Wheels();
	void see_infos();
};

