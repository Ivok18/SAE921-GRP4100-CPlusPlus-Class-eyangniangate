#include "Point.h"

Point::Point()
{
	coord_x = 0;
	coord_y = 0;
}

Point::Point(int coord_x, int coord_y)
{
	this->coord_x = coord_x;
	this->coord_y = coord_y;
}

Point::~Point(){}

void Point::move(double move_x, double move_y)
{
	this->coord_x += move_x;
	this->coord_y += move_y;
}

void Point::where_is_it()
{
	std::cout << "x:" << this->coord_x << "  y:" << this->coord_y << std::endl;
}

double Point::calculate_distance_with(Point other)
{
	return std::sqrt( std::pow(other.coord_y - this->coord_y, 2.0) + std::pow(other.coord_x - this->coord_x,2.0)  );
}

Point Point::coords_middle_with(Point other)
{
	Point point;
	
	point.coord_x = (this->coord_x + other.coord_x) / 2.0;
	point.coord_y = (this->coord_y + other.coord_y) / 2.0;

	return point;
}

double Point::x()
{
	return coord_x;
}

double Point::y()
{
	return coord_y;
}

Point Point::operator+(Point other) 
{
	return this->coords_middle_with(other);
}

bool Point::operator>(Point other)
{
	return this->calculate_distance_with(Point::Point(0, 0)) > other.calculate_distance_with(Point::Point(0, 0));
}

bool Point::operator<(Point other)
{
	return this->calculate_distance_with(Point::Point(0, 0)) < other.calculate_distance_with(Point::Point(0, 0));
}
