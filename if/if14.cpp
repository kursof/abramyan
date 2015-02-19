/* Даны три числа. Вывести вначале наименьшее, 
 * а затем наибольшее из данных чисел.
 */

#include <iostream>

int main()
{
	float a, b, c;

	std::cout << "введите три различных числа\n";
	std::cin >> a >> b >> c;

	if (a < b && a < c)
	{
		std::cout << a << "\n";
	}
	else
		if (c < b && c < a)
		{
			std::cout << c << "\n";
		}
		else
			if (b < a && b < c)
			{
				std::cout << b << "\n";
			}
			else
			{
				std::cout << "введите разные числа\n";
			}


	if (a > b && a > c)
	{
		std::cout << a << "\n";
	}
	else
		if (c > b && c > a)
		{
			std::cout << c << "\n";
		}
		else
			if (b > a && b > c)
			{
				std::cout << b << "\n";
			}
			else
			{
				std::cout << "введите разные числа\n";
			}
	
	return 0;
} 

// Поставить скобки
// Сократить до одного std::cout