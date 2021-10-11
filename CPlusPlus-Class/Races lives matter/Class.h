#pragma once
#include <string>
class Class 
{
protected:
	int class_atk;
	int class_res;
	int class_hp;
	std::string affinity;
public:
	Class();
	Class(int class_atk_, int class_res_,  std::string affinity_);
	~Class();

	int Class_Atk();
	std::string Affinity();
	virtual void See_Perks();
	virtual void Trained_Attack();
	virtual void Trained_Defense();
	virtual void Trained_Heal();
	virtual void Breakthrough_Power_Up();
};

