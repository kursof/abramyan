
/* Дано вещественное число X и целое число N (> 0). Найти значение выражения
 * X − X3/(3!) + X5/(5!) − … + (−1)N·X2·N+1/((2·N+1)!)
 * (N! = 1·2·…·N). Полученное число является приближенным значением
 * функции sin в точке X.
 */

#include <iostream>
#include <cmath>

int main()
{
	float x, sum = 0, nf = 1;
	int n;

	std::cout << "введите x\n", std::cin >> x;
	std::cout << "введите n\n", std::cin >> n;

	sum = x;

	for (int i = 1; i < 2 * n + 1; ++i)
	{
		sum += (pow(x, 2 * i + 1) * pow((-1), i)) / (nf *= (2 * i * (2 * i + 1)));
	}

	std::cout << sum << "\n";

	return 0;
}