#pragma once
class Race
{
protected:
	int hp;
	int atk;

public:
	Race();
	Race(int hp_, int atk_);
	~Race();

	int Hp();
	int Atk();
	virtual void See_Stats();
	virtual void Natural_Attack();
	virtual void Natural_Defense();
	virtual void Natural_Heal();
	virtual void Natural_Power_Up();
	
};

