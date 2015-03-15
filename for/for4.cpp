/* Дано вещественное число — цена 1 кг конфет.
 * Вывести стоимость 1, 2, …, 10 кг конфет.
 */

#include <iostream>

int main()
{
	float a;

	std::cout << "введите стоимость килограмма конфет\n";
	std::cin >> a;

	for (int i = 1; i <= 10; ++i)
	{
		std::cout << a * i << " ";
	}

	std::cout << '\n';

	return 0;
} 