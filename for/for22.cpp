/* Дано вещественное число X и целое число N (> 0). Найти значение выражения 
 * 1 + X + X2/(2!) + … + XN/(N!) (N! = 1·2·…·N).
 * Полученное число является приближенным значением функции exp в точке X. 
 */

#include <iostream>

int main()
{
	float x, sum = 1, nf = 1;
	int n;

	std::cout << "введите число x\n", std::cin >> x;
	std::cout << "введите число n\n", std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		sum += ((x * i) / (nf *= i));
	}

	std::cout << sum << "\n";

	return 0;
}