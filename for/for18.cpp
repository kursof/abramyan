/* Дано вещественное число A и целое число N (> 0). Используя один цикл,
 * найти значение выражения 1 − A + A2 − A3 + … + (−1)N·AN.
 * Условный оператор не использовать.
 */

#include <iostream>
#include <cmath>

int main()
{
	float a, sum = 0;
	int n;

	std::cout << "введите a\n", std::cin >> a;
	std::cout << "введите n\n", std::cin >> n;

	for (int i = 0; i <= n; ++i)
	{
		sum += pow(a, i) * pow((-1), i);
	}

	std::cout << sum << "\n";

	return 0;
} 