/* Для данного вещественного x найти значение следующей функции f,
 * принимающей вещественные значения:
 * −x, если x ≤ 0, f(x) = x2, если 0 < x < 2, 4, если x ≥ 2.
 */

#include <iostream>

int main()
{
	float x, f;

	std::cout << "введите x\n";
	std::cin >> x;

	if (x <= 0)
	{
		f = -x;
	}  
	else
		if (x >= 2)
		{
			f = 4;
		}
		else
		{
			f = x * x;
		}

	std::cout << f << "\n";

	return 0;
}