#pragma once
#include "Vehicule.h"

class Flying_Vehicule : public Vehicule
{
	using Vehicule::see_infos;
private:
public:
	Flying_Vehicule();
	~Flying_Vehicule();
	void see_infos();
};

