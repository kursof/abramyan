/* Дано вещественное число — цена 1 кг конфет.
 * Вывести стоимость 1.2, 1.4, …, 2 кг конфет. 
 */

#include <iostream>

int main()
{
	float a;

	std::cout << "введите цену 1 кг конфет\n";
	std::cin >> a;

	for (float i = 2; i <= 10; i+=2)
	{ 
		std::cout << a + (i / 10) << "\n";
	}

	return 0;
}