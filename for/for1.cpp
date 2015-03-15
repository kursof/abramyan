/* Даны целые числа K и N (N > 0). Вывести N раз число K.
 */

#include <iostream>

int main()
{
	int k, n;

	std::cout << "введите число\n", std::cin >> k;
	std::cout << "введите количество повторов\n", std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		std::cout << k << " ";
	}

	return 0;
} 