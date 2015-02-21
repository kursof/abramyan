/* Даны три числа. Найти среднее из них 
 * (т. е. число, расположенное между наименьшим и наибольшим).
 */

#include <iostream>

int main()
{
	float a, b, c, f;

	std::cout << "введите три числа\n";
	std::cin >> a >> b >> c;

	if ((a > b && a < c) || (a < b && a > c))
	{
		f = a;
	}
	else
	{
		if ((b > a && b < c) || (b < c && b > a))
		{
			f = b;
		}
		else
		{	
			if ((c > a && c < b) || (c < a && c > b))
			{
				f = c;
			}
		}
	}

	std::cout << f << "\n";

	return 0;
}