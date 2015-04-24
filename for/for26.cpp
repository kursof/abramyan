/* Дано вещественное число X (|X| < 1) и целое число N (> 0).
 * Найти значение выражения X − X3/3 + X5/5 − … + (−1)N·X2·N+1/(2·N+1).
 * Полученное число является приближенным значением функции arctg в точке X.
 */

#include <iostream>
#include <cmath>

int main()
{
	float x;
	int n;

	std::cout << "введите вещественное число\n", std::cin >> x;
	std::cout << "введите целое число\n", std::cin >> n;

	float sum = x;

	for (int i = 1; i < 2 * n + 1; ++i)
	{
		float st = 2 * i + 1;

		float ed = pow((-1), i);

		sum += ed * pow(x, st) / (2 * i + 1);
	}

	std::cout << sum << "\n";

	return 0;
} 