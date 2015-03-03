/* Элементы равнобедренного прямоугольного треугольника пронумерованы следующим
 * образом: 1 — катет a, 2 — гипотенуза c = a·(2)1/2, 3 — высота h,
 * опущенная на гипотенузу (h = c/2), 4 — площадь S = c·h/2.
 * Дан номер одного из этих элементов и его значение.
 * Вывести значения остальных элементов данного треугольника (в том же порядке).
 */

#include <iostream>
#include <cmath>

int main()
{
	int n;
	float num;

	std::cout << "введите номер элемента\n";
	std::cin >> n;

	std::cout << "введите значение элемента\n";
	std::cin >> num;

	switch (n)
	{
		case 1:	
			std::cout << "c = " << sqrt(2) * num << "\n";
			std::cout << "h = " << sqrt(2) * (num / 2) << "\n";
			std::cout << "s = " << sqrt(2) * (num / 4) << "\n";
			break;
		case 2:
			std::cout << "a = " << num / (sqrt(2)) << "\n";
			std::cout << "h = " << num / 2 << "\n";
			std::cout << "s = " << pow(num, 2) / 4 << "\n";
			break;
		case 3:
			std::cout << "a = " << (2 * num) / (sqrt(2)) << "\n";
			std::cout << "c = " << 2 * num << "\n";
			std::cout << "s = " << 2 * pow(num, 2) << "\n";
			break;
		case 4:
			std::cout << "a = " << sqrt(2 * num) << "\n";
			std::cout << "c = " << sqrt(2) * sqrt(2 * num) << "\n";
			std::cout << "h = " << (sqrt(2) / 2) * sqrt(2 * num) << "\n";
			break;
		default:
			std::cout << "error\n"; 
			break;
	}

	return 0;
} 