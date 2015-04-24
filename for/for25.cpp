/* Дано вещественное число X (|X| < 1) и целое число N (> 0).
 * Найти значение выражения X − X2/2 + X3/3 − … + (−1)N−1·XN/N.
 * Полученное число является приближенным значением функции ln в точке 1 + X.
 */

#include <iostream>
#include <cmath>

int main()
{
	float x;
	int n;

	std::cout << "введите вещественное число\n", std::cin >> x;
	std::cout << "введите целое число\n", std::cin >> n;

	float  ln = 0;

	for (int i = 1; i <= n; ++i)
	{
		float ed = pow((-1), i + 1);
		
		ln += (ed * pow(x, i)) / i;
	}

	std::cout << ln << "\n";

	return 0;
} 