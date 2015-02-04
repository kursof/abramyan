/* Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2
 * при данном значении x
 */
#include <iostream>
#include <cmath>

int main ()
{
	float x, y;

	std::cout << "enter x\n";

	std::cin >> x;

	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;

	std::cout << "y is " << y;

	return 0;
}