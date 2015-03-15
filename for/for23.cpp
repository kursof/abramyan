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

	for (int i = 0; i < n; i += 2)
	{
		sum += pow((-1), i) * pow(x, 2 * i + 1) / (nf *= (i + 2) * (i + 1));
	}

	std::cout << sum << "\n";

	return 0;
}