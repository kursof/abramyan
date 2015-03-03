/* Элементы окружности пронумерованы следующим образом:
 * 1 — радиус R, 2 — диаметр D = 2·R, 3 — длина L = 2·π·R,
 * 4 — площадь круга S = π·R2.
 * Дан номер одного из этих элементов и его значение.
 * Вывести значения остальных элементов данной окружности (в том же порядке).
 * В качестве значения π использовать 3.14.
 */

#include <iostream>
#include <cmath>

int main()
{
	const float pi = 3.14;
	int n;
	float num;

	std::cout << "введите номер элемента\n";
	std::cin >> n;

	std::cout << "введите значение элемента\n";
	std::cin >> num;

	switch (n)
	{
		case 1:
			std::cout << "d = " << 2 * num << "\n";
			std::cout << "l = " << 2 * pi * num << "\n";
			std::cout << "s = " << 2 * num * num << "\n";
			break;
		case 2:
			std::cout << "r = " << num / 2 << "\n";
			std::cout << "l = " << pi * num << "\n";
			std::cout << "s = " << (num / 2) * (num / 2) * pi << "\n";
			break;
		case 3:
			std::cout << "r = " << num / (2 * pi) << "\n";
			std::cout << "d = " << num / pi << "\n";
			std::cout << "s = " << (num * num) / (4 * pi) << "\n";
			break;
		case 4:
			std::cout << "r = " << sqrt(num / 2) << "\n";
			std::cout << "d = " << 2 * sqrt(num / 2) << "\n";
			std::cout << "l = " << 2 * pi * sqrt(num / 2) << "\n";
			break;
		default:
			std::cout << "error\n";
			break;
	}

	return 0;
} 