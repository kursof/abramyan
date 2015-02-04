/* Найти корни квадратного уравнения A·x2 + B·x + C = 0,
 * заданного своими коэффициентами A, B, C (коэффициент A не равен 0),
 * если известно, что дискриминант уравнения положителен.
 * Вывести вначале меньший, а затем больший из найденных корней.
 * Корни квадратного уравнения находятся по формуле
 * x1, 2 = (−B ± (D)1/2)/(2·A),
 * где D — дискриминант, равный B2 − 4·A·C.
 */

#include <iostream>
#include <cmath>

int main()
{
	int a, b, c;
	float x1, x2, d;

	std::cout << "enter a, b, c: ";
	std::cin >> a >>  b >> c;
	std::cout << "\n";

	d = b * b - 4 * a * c;

	x1 = (- b + sqrt(d)) / (2 * a);
	x2 = (- b - sqrt(d)) / (2 * a);

	if (a == 0)
	{
		std::cout << "a cannot be a zero\n ";
	}
	else
	{
		if (d < 0)
		{
			std::cout << "the equation has no roots\n";
		}
		else
		{
			if (x1 > x2)
			{
				std::cout << "first root of the equation is: " << x2
					<< "\nsecond root of the equation is: " << x1;
			}
			else
			{
				if (x1 < x2)
				{
					std::cout << "first root of the equation is: " << x1
						<< "\nsecond root of the equation is: " << x2;
				}
				else
				{
					std::cout << "the equation has one root: " << x2;
				}
			}
		}
	}


	return 0;
}
