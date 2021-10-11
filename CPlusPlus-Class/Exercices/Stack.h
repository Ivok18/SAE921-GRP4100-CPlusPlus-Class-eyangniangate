#pragma once
#include <array>
#include <iostream>

class Stack
{
	
public:	
	Stack();
	Stack(std::string name);
	~Stack();
	void pushOne(int value);
	void pushTwo(int value1, int value2);
	void pop();
	bool empty();
	int top();
	void display_stack();
	int indx();
	int calculate_size();
	bool fill_array();
	bool get_fill_check();
	std::array<int, 10> get_array();
	std::string get_name();
	void set_name(std::string name_);
	int size_;
	int size();
	

	
	//bool operator < (const Stack& other) const;
	//bool operator != (const Stack& other) const;
	
	
private:
	std::string name;
	std::array<int, 10> array_;
	bool fill_check = false;
	int top__;
	static int indx_;

	
	
};




