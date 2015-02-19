/* Даны три числа. Найти наименьшее из них. 
 */

#include <iostream>

int main()
{
	float a, b, c;

	std::cout << "введите три числа\n";
	std::cin >> a >> b >> c;

	if (a > b && a > c)
	{
		std::cout << a << "\n";
	}
	else
	{
		if (c > b && c > a)
		{
			std::cout << c << "\n";
		}
		else
		{
			if (b > a && b > c)
			{
				std::cout << b << "\n";
			}
			else
			{
				std::cout << "введите разные числа\n";
			}
		}
	}

	return 0;
}

// Сократить до одного std::cout