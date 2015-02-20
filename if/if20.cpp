/* На числовой оси расположены три точки: A, B, C. Определить,
 * какая из двух последних точек (B или C) расположена ближе к A,
 * и вывести эту точку и ее расстояние от точки A.
 */

#include <iostream>
#include <cmath>

int main()
{
	float a, b, c, f;

	std::cout << "введите три точки\n";
	std::cin >> a >> b >> c;

	if (b > a && c > a && b > c)
	{
		f = fabs(c - a);
	}
	else
	{
		if (b > a && c > a && b < c)
		{
			f = fabs(b - a);
		}
		else
		{
			if (((b > a && c < a) || (b < a && c > a)) && fabs(c) > fabs(b))
			{
				f = fabs(b - a);
			}
			else
			{
				if (((b > a && c < a) || (b < a && c > a)) && fabs(c) < fabs(b))
				{
					f = fabs(c - a);
				}
				else
				{
					if (b < a && c < a && b < c)
					{
						f = fabs(c - a);
					}
					else
					{
							f = fabs(b - a);
					}
				}		
			}					
		}
	}
	
	std::cout << f << "\n";						

	return 0;
}

// Поставить скобки 
// Сократить до одного std::cout