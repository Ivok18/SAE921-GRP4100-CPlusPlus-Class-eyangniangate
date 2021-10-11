#pragma once
#include "Flying_Vehicule.h"

class Plane : public Flying_Vehicule
{
	using Flying_Vehicule::see_infos;
private:
public:
	void see_infos();
};

