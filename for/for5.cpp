/* Дано вещественное число — цена 1 кг конфет.
 * Вывести стоимость 0.1, 0.2, …, 1 кг конфет
 */

#include <iostream>

int main()
{
	float a;

	std::cout << "введите стоимость одного килограмма конфет\n";
	std::cin >> a;

	for (float i = 10; i >= 1; --i)
	{
		std::cout << a * (i / 10) << ' ';	
	}

	std::cout << '\n';

	return 0;
}