/* Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3).
 * Найти его периметр и площадь, используя формулу для
 * расстояния между двумя точками на плоскости (см. задание Begin20).
 * Для нахождения площади треугольника со сторонами a, b, c
 * использовать формулу Герона:
 * S = (p·(p − a)·(p − b)·(p − c))1/2,
 * где p = (a + b + c)/2 — полупериметр.
 */

#include <iostream>
#include <cmath>

int main ()
{
	float x1, y1, x2, y2, x3, y3;
	float p, s12, s23, s13, S;

	std::cout << "enter coordinates of the first dot\n";
	std::cin >> x1 >> y1;

	std::cout << "enter coordinates of the second dot\n";
	std::cin >> x2 >> y2;

	std::cout << "enter coordinates of the third dot\n";
	std::cin >> x3 >>y3;

	//подсчет сторон треугольника по формуле из задачи 20
	s12 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	s23 = sqrt(pow((y2 - y3), 2) + pow((x2 - x3), 2));
	s13 = sqrt(pow((y1 - y3), 2) + pow((x1 - x3), 2));

	p = (s12 + s23 + s13)/2;

	//подсчет площади по формуле герона
	S = sqrt(p * (p - s12) * (p - s13) * (p - s23));

	std::cout << "half of the perimeter of the triangle is " << p << "\n";
	
	std::cout << "square of the triangle is " << S << "\n";

	return 0;
}
