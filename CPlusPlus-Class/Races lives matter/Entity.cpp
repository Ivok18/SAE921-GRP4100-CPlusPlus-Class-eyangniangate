#include "Entity.h"
#include <iostream>

Entity::Entity(Race* race_, Class* class__)
{
	race = race_;
	class_ = class__;

	
}

Entity::Entity()
{
	race = nullptr;
	class_ = nullptr;
}

Entity::~Entity()
{
}

void Entity::See_Soul()
{
	std::cout << "Entering the soul.." << std::endl;
	std::cout << "stats:" << std::endl;

	if(race != nullptr)
	{ 
		race->See_Stats();
	}

	else
	{
		std::cout << "no race" << std::endl << std::endl;
	}
	

	std::cout << std::endl;

	std::cout << "perks:" << std::endl;
	if (class_ != nullptr)
	{
		class_->See_Perks();
	}
	else
	{
		std::cout << "no class" << std::endl << std::endl;
	}
	
}

void Entity::Natural_Attack()
{
	if(race != nullptr)
	{ 
		this->race->Natural_Attack();
	}

	else
	{
		std::cout << "no race" << std::endl;
	}
	
}

void Entity::Trained_Attack()
{
	if(this->class_!=nullptr)
	{
		this->class_->Trained_Attack();
	}

	else
	{
		std::cout << "no class" << std::endl << std::endl;
	}
	
}

void Entity::Trained_Defense()
{
	if (class_ != nullptr)
	{
		this->class_->Trained_Defense();
	}

	else
	{
		std::cout << "no class" << std::endl << std::endl;
	}
	
}

void Entity::Trained_Heal()
{
	if (class_ != nullptr)
	{
		this->class_->Trained_Heal();
	}
	else
	{
		std::cout << "no class" << std::endl << std::endl;
	}
}

void Entity::Natural_Defense()
{
	if(race != nullptr)
	{ 
		this->race->Natural_Defense();
	}
	else
	{
		std::cout << "no race" << std::endl << std::endl;
	}
	
}

void Entity::Natural_Heal()
{
	if (race != nullptr)
	{ 
		this->race->Natural_Heal();
	}
	else
	{
		std::cout << "no race" << std::endl << std::endl;
	}
	
}

void Entity::Natural_Power_Up()
{
	if (race != nullptr)
	{
		this->race->Natural_Power_Up();
	}
	
	else
	{
		std::cout << "no race" << std::endl << std::endl;
	}
}

void Entity::Breakthrough_Power_Up()
{
	if(this->class_!= nullptr)
	{
		this->class_->Breakthrough_Power_Up();
	}
	
	else
	{
		std::cout << "no class" << std::endl << std::endl;
	}
}



