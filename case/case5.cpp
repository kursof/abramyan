/* Арифметические действия над числами пронумерованы следующим образом:
 * 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.
 * Дан номер действия N (целое число в диапазоне 1–4)
 * и вещественные числа A и B (B не равно 0).
 * Выполнить над числами указанное действие и вывести результат. 
 */

#include <iostream>

int main()
{
	int sign;
	float a, b, c;

	std::cout << "введите числа\n";
	std::cin >> a >> b;

	std::cout << "введите арифметическое действие\n";
	std::cin >> sign;

	switch (sign)
	{
		case 1:
				c = a + b;
				break;
		case 2:
				c = a - b;
				break;
		case 3:
				c = a * b;
				break;
		case 4:
				c = a / b;
				break;
		default:
				std::cout << "ошибка\n";
				break;
	}

	std::cout << c << "\n";

	return 0;
}