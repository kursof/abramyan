/* Даны три числа. Найти среднее из них 
 * (т. е. число, расположенное между наименьшим и наибольшим).
 */

#include <iostream>

int main()
{
	float a, b, c;

	std::cout << "введите три числа\n";
	std::cin >> a >> b >> c;

	if ((a > b && a < c) || (a > b && a < c))
	{
		std::cout << a << "\n";
	}
	else
	{
		if ((b > a && b < c) || (b > c && b < a))
		{
			std::cout << b << "\n";
		}
		else
			if ((c > a && c < b) || (c > a && c < b))
			{
				std::cout << c << "\n";
			}
	}

	return 0;
} 

// Поставить скобки
// Сократить до одного std::cout