/* Даны два числа. Вывести порядковый номер меньшего из них. 
 */

#include <iostream>

int main()
{
	float a, b;

	std::cout << "введите два числа\n";
	std::cin >> a >> b;

	std::cout << (a < b ? 1:2) << "\n";

	return 0;
}