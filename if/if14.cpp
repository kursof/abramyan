/* Даны три числа. Вывести вначале наименьшее, 
 * а затем наибольшее из данных чисел.
 */

#include <iostream>
#include <cmath>

int main()
{
	float a, b, c;
	float f, g;

	std::cout << "введите три различных числа\n";
	std::cin >> a >> b >> c;

	if (a < b && a < c)
	{
		f = a;
	}
	else
	{
		if (c < b && c < a)
		{
			f = c;
		}
		else
		{
  			if (b < a && b < c)
			{
				f = b;
			}
		}
	}


	if (a > b && a > c)
	{
		g = a;
	}
	else
	{
		if (c > b && c > a)
		{
			g = c;
		}
		else
		{
			if (b > a && b > c)
			{
				g = b;
			}
		}
	}

	std::cout << f << "\n" << g << "\n";
	
	return 0;
} 

// Можно еще вот так решить:
// f = std::min(a, std::min(b, c));
// g = std::max(a, std::max(b, c));
