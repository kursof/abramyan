/* Найти расстояние между двумя точками
 * с заданными координатами (x1, y1) и (x2, y2) на плоскости.
 * Расстояние вычисляется по формуле
 * ((x2 − x1)2 + (y2 − y1)2)1/2.
 */

#include <iostream>
#include <cmath>


int main ()
{
	float x1,x2,y1,y2;

	std::cout << "enter coordinates of the first dot\n";
	std::cin >> x1 >> y1;

	std::cout << "enter coordinates of the second dot\n";
	std::cin >> x2 >> y2;

	std::cout << "length between first and second dot is "
			<< sqrt(pow((x2 - x1),2)+pow((y2 - y1),2));

	return 0;
}
