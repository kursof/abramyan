/* Дано целое число N (> 0). Найти сумму N2 + (N + 1)2 + (N + 2)2 + … + (2·N)2
 * (целое число).
 */

#include <iostream>
#include <cmath>

int main()
{
	int n;
	int sumkv = 0;

	std::cout << "введите n\n", std::cin >> n;

	for (int i = 0; i <= n; ++i)
	{
		sumkv += pow((n + i), 2);
	}

	std::cout << sumkv << "\n";

	return 0;
} 