/* Даны координаты двух различных полей шахматной доски 
 * x1, y1, x2, y2 (целые числа, лежащие в диапазоне 1–8). 
 * Проверить истинность высказывания: «Данные поля имеют одинаковый цвет». 
 */

#include <iostream>

int main()
{
	int x1, y1;
	int x2, y2;

	std::cout << "введите координаты первого поля\n";
	std::cin >> x1 >> y1;

	std::cout << "введите координаты второго поля\n";
	std::cin >> x2 >> y2;

	bool a = (x1 % 2 == x2 % 2 && y1 % 2 == y2 % 2);

	std::cout << a << "\n";

	return 0;
}