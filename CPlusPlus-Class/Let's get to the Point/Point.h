#pragma once
#include <iostream>
class Point
{
private:
	double coord_x;
	double coord_y;

public:
	Point();
	Point(int coord_x, int coord_y);
	~Point();
	void move(double move_x, double move_y);
	void where_is_it();
	double calculate_distance_with(Point other); 
	Point coords_middle_with(Point point1);
	double x();
	double y();
	Point operator+ (Point other);
	bool operator> (Point other);
	bool operator< (Point other);
};

