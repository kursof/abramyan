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

	std::cout << (x > 0 ? 2 * sin(x):6 - x) << "\n";

	return 0;
}