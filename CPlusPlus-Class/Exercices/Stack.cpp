#include "Stack.h"

Stack::Stack()
{	
	array_.fill(-1);
	bool i_fill_goof = fill_array();
	int a_size = calculate_size();
	Stack::top__ = 0;
	Stack::size_ = 0;
}

Stack::Stack(std::string name_)
{
	array_.fill(-1);
	bool i_fill_goof = fill_array();
	int a_size = calculate_size();
	name = name_;
	
}

Stack::~Stack()
{
}

//Public
void Stack::pushOne(int value)
{
	if (empty())
	{
		array_[0] = value;
		top__ = array_[0];
		indx_++;
	}

	else if (indx_ == 10)
	{
		std::cout << "stack full, cannot push";
	}

	else
	{
		array_[indx_] = value;
		top__ = array_[indx_];
		indx_++;
	}

}
void Stack::pushTwo(int value1, int value2)
{
	if (empty())
	{
		array_[0] = value1;
		array_[1] = value2;
		top__ = array_[1];
		indx_++;
	}

	else if (indx_ == 9)
	{
		std::cout << "cannot push the 2 values";
	}

	else
	{
		array_[indx_] = value1;
		array_[indx_ + 1] = value2;
		top__ = array_[indx_]+1;
		indx_+=2;
	}
}
void Stack::pop()
{
	if (empty())
	{
		std::cout << "Cannot pop onto an empty stack";
	}


	else
	{
		array_[indx_-1] =-1;
		indx_ -= 2;
	}
}
bool Stack::empty()
{
	if ( indx_ == 0 && array_[indx_ ] == -1)
	{
		return true;
	}

	return false;
}
int Stack::top()
{
	return top__;
}
void Stack::display_stack()
{
	if (empty())
	{
		std::cout << "sorry, stack empty..";
	}

	else
	{
		int index = 0;

		std::cout << "Values: " << std::endl;
		while (array_[index] != -1)
		{
			std::cout << array_[index];
			std::cout << std::endl;
			index++;
		}
	}

}
int Stack::indx()
{
	return indx_;
}
int Stack::calculate_size()
{
	int indx = 0;
	int size = 0;

	if(empty())
	{
		return 0;
	}

	while (array_[indx] != -1)
	{
		if (indx == array_.size() - 1)
		{
			return array_.size();
		}

		size++;
		indx++;
	}

	size_ = size;

	return size_;
}
bool Stack::fill_array()
{
	if (empty())
	{
		int random_size;

		do
		{
			random_size = 2 + (rand() % 8);

		} while (random_size < 2);

		for (int i = 0; i < random_size; i++)
		{
			int random_value;
			do
			{
				random_value = rand() % 21;
			} while (random_value < 0);

			array_[i] = random_value;
		}

		fill_check = true;
	}

	else
	{
		fill_check = false;
	}
	
	return fill_check;

	
}
bool Stack::get_fill_check()
{
	return fill_check;
}
std::array<int, 10> Stack::get_array()
{
	return array_;
}
std::string Stack::get_name()
{
	return name;
}

void Stack::set_name(std::string name_)
{
	
	name = name_;
	
}

int Stack::size()
{
	return size_;
}

/*
 bool Stack::operator<(const Stack& other) const
{
	return this->size_ < other.size_;
}

bool Stack::operator!=(const Stack& other) const
{
	return (this->size_ != other.size_) && (this->name != other.name);
}
*/



//bool Stack::operator < (const Stack& stack1) const
//{
	//return Stack::size__ < stack1.size__;
//}

int Stack::indx_ = 0;

//Private

