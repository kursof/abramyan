/* Найти расстояние между двумя точками
 * с заданными координатами x1 и x2 на числовой оси:
 * |x2 − x1|
 */
#include <iostream>
#include <cmath>

int main ()
{
	float x1,x2;
	std::cout <<"enter coordinates\n";
	std::cin >> x1 >> x2;

	std::cout << "lenght is " << fabs(x1 - x2) << "\n";

	return 0;
 }

