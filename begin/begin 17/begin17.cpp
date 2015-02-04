/* Даны три точки A, B, C на числовой оси.
 * Найти длины отрезков AC и BC и их сумму
 */
 
#include <iostream>
#include <cmath>

int main ()
{
	float x1,x2,x3;

	std:: cout << "enter three coordinates\n";
	std:: cin >> x1 >> x2 >> x3;

	std:: cout << "length between x1 and x3 is " << fabs(x3 - x1) << "\n";
	std:: cout << "length between x2 and x3 is " << fabs(x3 - x2) << "\n";

	return 0;
}
