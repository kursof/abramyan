/* Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых чисел
 * от A до B включительно.
 */

#include <iostream>

int main()
{
	int a, b;
	int sumk = 0;

	std::cout << "введите два целых числа\n";
	std::cin >> a >> b;

	for (int i = a; i <= b ; ++i)
	{
		sumk += i * i;
	}

	std::cout << sumk << "\n";

	return 0;
}

