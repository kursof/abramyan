/* Даны координаты двух противоположных вершин прямоугольника:
 * (x1, y1), (x2, y2).
 * Стороны прямоугольника параллельны осям координат.
 * Найти периметр и площадь данного прямоугольника.
 */

#include <cmath>
#include <iostream>

int main ()
{
	float x1,x2,y1,y2;

	std::cout << "enter coordinates of first dot\n";
	std::cin >> x1 >> y1;

	std::cout << "enter coordinates of opposite dot\n";
	std::cin >> x2 >> y2;

	std::cout << "square is " << fabs(x2 - x1)*fabs(y2 - y1) << "\n";
	std::cout << "perimeter " << 2 * fabs(x2 - x1) + 2 * fabs(y2 - y1) << "\n";

	return 0;
}
