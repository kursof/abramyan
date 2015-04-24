/* Дано целое число N (> 1) и две вещественные точки на числовой оси:
 * A, B (A < B). Отрезок [A, B] разбит на N равных отрезков.
 * Вывести H — длину каждого отрезка, а также набор точек
 * A,    A + H,    A + 2·H,    A + 3·H,    …,    B,
 * образующий разбиение отрезка [A, B].
 */

#include <iostream>

int main()
{
	int n;
	float a, b;

	std::cout << "n: ", std::cin >> n;
	std::cout << "a,b: ", std::cin >> a >> b;

	float rz = a;

	std::cout << "h: " << (b - a) / n;

	for (int i = a; i <= b; i += (b - a) / n)
	{
		rz += i;

		std::cout << rz << "\n";
	}

	return 0;
}