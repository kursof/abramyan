/* Даны три числа. Найти наименьшее из них.
 */

#include <iostream>
#include <cmath>

int main()
{
	float a, b, c, f;

	std::cout << "введите три числа\n";
	std::cin >> a >> b >> c;

	if (a < b && a < c)
	{
		f = a;
	}
	else
	{
		if (b < a && b < c)
		{
			f = b;
		}
		else
		{
			if (c < a && c < b)
			{
				f = c;
			}
		}
	}


	std::cout << f << "\n";

	return 0;
}
// Можно еще вот так решить:
// f = std::min(a, std::min(b, c));