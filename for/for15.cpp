/* Дано вещественное число A и целое число N (> 0). Найти A в степени N:
 * A^N = A·A· … ·A (числа A перемножаются N раз).
 */

#include <iostream>

int main()
{
	int n;
	float a, res = 1;

	std::cout << "введите a\n", std::cin >> a;
	std::cout << "введите n\n", std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		res *= a;
	}

	std::cout << res << "\n";

	return 0;
} 