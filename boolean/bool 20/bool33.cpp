/* Даны целые числа a, b, c. Проверить истинность высказывания: 
 * «Существует треугольник со сторонами a, b, c».
 */

#include <iostream>
#include <cmath>

int main()
{
	float a, b, c;
	float cs;

	std::cout << "введите стороны треугольника\n";
	std::cin >> a >> b >> c;

	cs = (c * c - a * a - b * b) / ((-2) * a * b); //поиск косинуса

	bool d = (fabs(cs) <= 1); //теорема косинусов

	std::cout << d << "\n";

	return 0;
}