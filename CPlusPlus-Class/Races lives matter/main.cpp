

#include <iostream>
#include "Race.h"
#include "Class.h"
#include "Black_Orc.h"
#include "Entity.h"
#include "Human.h"
#include "Sniper.h"


int main()
{
	//I choose Grimgor's race
	Orc race_component(100, 30, 10);
	Race* race_ptr = &race_component;

	/* I choose Grimgor's class */
	Boxer class_component(500, "punch hard", 10);
	Class* class_ptr = &class_component;
	
	/*I create Grimgor*/ 
	Entity grimgor(race_ptr, nullptr);
	grimgor.See_Soul();
	grimgor.Natural_Attack();
	grimgor.Trained_Attack();
	grimgor.Natural_Defense();
	grimgor.Natural_Heal();
	grimgor.Natural_Power_Up();
	grimgor.Trained_Attack();
	grimgor.Trained_Defense();
	grimgor.Trained_Heal();
	grimgor.Breakthrough_Power_Up();
	grimgor.See_Soul();

	

	/*I choose my race */
	Human race_component2(100);
	Race* race_ptr2 = &race_component2;

	/* I choose my class */
	Sniper sniper(10,10);
	Class* class_ptr2 = &sniper;

	/* I create my character */
	Entity muudo(nullptr, class_ptr2);
	muudo.See_Soul();
	muudo.Natural_Attack();
	muudo.Natural_Defense();
	muudo.Natural_Heal();
	muudo.Natural_Power_Up();
	muudo.Trained_Attack();
	muudo.Trained_Defense();
	muudo.Trained_Heal();
	muudo.Breakthrough_Power_Up();
	muudo.See_Soul();
	
	
	

	return EXIT_SUCCESS;

}

