/* Дано целое число N (> 0). Найти сумму  1 + 1/2 + 1/3 + … + 1/N
 * (вещественное число).
 */

#include <iostream>

int main()
{
	int n;
	float sum = 0;

	std::cout << "введите целое число\n", std::cin >> n;

	for (float i = 1; i <= n; ++i)
	{
		sum += 1 / i;
	}	

	std::cout << sum << "\n";

	return 0;
} 