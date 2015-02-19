/* Даны два числа. Вывести порядковый номер меньшего из них. 
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "введите два числа\n";
	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << 1 << "\n";
	}
	else
	{
		std::cout << 2 << "\n";
	}

	return 0;
}

// Используй тернарный  if