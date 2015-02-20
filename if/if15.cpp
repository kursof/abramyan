/* Даны три числа. Найти сумму двух наибольших из них. 
 */

#include <iostream>

int main()
{
	float a, b, c, d1, d2;

	std::cout << "введите три разных числа\n";
	std::cin >> a >> b >> c;

	if ((a > b && a < c) || (a < b && a > c))
	{
		d1 = a;
	}
	else
	{
		if ((b > a && b < c) || (b > c && b < a))
		{
			d1 = b;
		}
		else
		{		
			d1 = c;
		}
	}

	if (a > b && a > c)
	{
		d2 = a;
	}
	else
	{
		if (c > b && c > a)
		{
			d2 = c;
		}
		else
		{
			d2 = b;
		}
	}		
	
	std::cout << d1 + d2 << "\n";

	return 0;
}

// Поставить скобки