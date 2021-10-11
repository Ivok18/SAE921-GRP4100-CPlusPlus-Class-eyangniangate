#pragma once
#include "Vehicule_Wheels.h"
 
class Motorbike : public Vehicule_Wheels
{
	using Vehicule_Wheels::see_infos;
private:
public:
	void see_infos();
};