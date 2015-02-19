/* На числовой оси расположены три точки: A, B, C. Определить,
 * какая из двух последних точек (B или C) расположена ближе к A,
 * и вывести эту точку и ее расстояние от точки A.
 */

#include <iostream>
#include <cmath>

int main()
{
	float a, b, c;

	std::cout << "введите три точки\n";
	std::cin >> a >> b >> c;

	if (b > a && c > a && b > c)
	{
		std::cout << fabs(c - a) << "\n";
	}
	else
		if (b > a && c > a && b < c)
		{
			std::cout << fabs(b - a) << "\n";
		}
		else
			if (((b > a && c < a) || (b < a && c > a)) && fabs(c) > fabs(b))
			{
				std::cout << fabs(b - a) << "\n";
			}
			else
				if (((b > a && c < a) || (b < a && c > a)) && fabs(c) < fabs(b))
				{
					std::cout << fabs(c - a) << "\n";
				}
				else
					if (b < a && c < a && b < c)
					{
						std::cout << fabs(c - a) << "\n";
					}
					else
						if (b < a && c < a && b > c)
						{
							std::cout << fabs(b - a) << "\n";
						}
						

	return 0;
}

