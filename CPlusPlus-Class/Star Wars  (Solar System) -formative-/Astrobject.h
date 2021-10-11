#pragma once
#include <string>
#include <vector>
class Astrobject
{
protected:
	std::string name;
	std::string diameter;
	std::string mass;
	std::string distance_from_sun;
	std::vector<std::string> atmosphere_composition;
public:
	Astrobject();
	Astrobject(std::string name_, std::string diameter_km_, std::string mass_t_, std::string distance_from_sun_, std::vector<std::string> atmosphere_composition_);
	~Astrobject();
	virtual void Get_Datas() = 0;
	
};

