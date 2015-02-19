/* Для данного вещественного x найти значение следующей функции f,
 * принимающей вещественные значения:
 * f(x)	 = 	2·sin(x),	если x > 0, 6 − x, если x ≤ 0
 */
 
#include <iostream>
#include <cmath>

int main()
{
	float x, f;

	std::cout << "введите x\n";
	std::cin >> x;

	if (x > 0)
	{
		f = 2 * sin(x);
	}
	else
	{
		f = 6 - x;
	}

	std::cout << f << "\n";

	return 0;
}