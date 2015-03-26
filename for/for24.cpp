/* Дано вещественное число X и целое число N (> 0). Найти значение выражения
 * 1 − X2/(2!) + X4/(4!) − … + (−1)N·X2·N/((2·N)!) (N! = 1·2·…·N). 
 * Полученное число является приближенным значением функции cos в точке X.
 */

#include <iostream>
#include <cmath>

int main()
{
	float x, nf = 1, sum;
	int n;

	std::cout << "введите вещественное число\n", std::cin >> x;
	std::cout << "введите целое число\n", std::cin >> n;

	sum = 1;

	for (int i = 1; i < n; ++i)
	{
		float one = pow((-1), i);

		float st = 2 * i;

		nf *= (2 * i * (2 * i - 1));

		sum += one * pow(x, st) / nf;
	}

	std::cout << sum << "\n";

	return 0;
}
