/* Даны два целых числа A и B (A < B).
 * Найти произведение всех целых чисел от A до B включительно.
 */

#include <iostream>

int main()
{
	int a, b;
	int pr = 1;

	std::cout << "введите два целых числа\n", std::cin >> a >> b;

	for (int i = a; i <= b; ++i)
	{
		pr *= i;
	}

	std::cout << pr << "\n";

	return 0;
} 