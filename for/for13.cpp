/* Дано целое число N (> 0). Найти значение выражения 1.1 − 1.2 + 1.3 − …
 * (N слагаемых, знаки чередуются). Условный оператор не использовать.
 */

#include <iostream>
#include <cmath>

int main()
{
	int n;
	float sum = 0;

	std::cout << "введите n\n", std::cin >> n;

	for (float i = 1; i <= n; ++i)
	{
		sum += pow((-1), i + 1) * (1 + (i / 10)); 
	}

	std::cout << sum << "\n";

	return 0;
} 