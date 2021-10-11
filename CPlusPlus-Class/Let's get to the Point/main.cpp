
#include <iostream>
#include "Point.h"
#include <time.h>

/*En utilisant la classe point, créer des surcharges d’opérateurs
opérateur + : pointA + pointB donne le milieu du segment AB (https://fr.wikipedia.org/wiki/Milieu_d%27un_segment)
opérateur > , < : les points sont comparés selon leur distance au centre : 
. pointA est supérieur à pointB si la distance du pointA par rapport au centre est supérieure à la distance du pointB par rapport au centre.(https://en.wikipedia.org/wiki/Euclidean_distance)
*/

int main()
{
    srand(time(NULL));
    Point point1(5 + rand() % 5, 5 + rand() % 5);
    Point point2(5 + rand() % 5, 5 + rand() % 5);

    std::cout << "Point 1: ";
    point1.where_is_it();

    std::cout << "Point 2: ";
    point2.where_is_it();

    Point point3;
    point3 = point1 + point2;
    std::cout << "Point 3: ";
    point3.where_is_it();

    Point center(0, 0);

    std::cout << "distance from center:" << std::endl;
    std::cout << point1.calculate_distance_with(center) << " miles" << std::endl;
    std::cout << point2.calculate_distance_with(center) << " miles" << std::endl;
    std::cout << point3.calculate_distance_with(center) << " miles" << std::endl;

    
}
