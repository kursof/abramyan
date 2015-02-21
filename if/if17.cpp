/* Даны три переменные вещественного типа: A, B, C.
 * Если их значения упорядочены по возрастанию или убыванию, то удвоить их;
 * в противном случае заменить значение каждой переменной на противоположное.
 * Вывести новые значения переменных A, B, C.
 */

#include <iostream>

int main()
{
	float a, b, c;

	std::cout << "введите три различных числа\n";
	std::cin >> a >> b >> c;

	if ((a > b && b > c) || (a < b && a < c))
	{
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else
	{
		a *= -1;
		b *= -1;
		c *= -1;
	}

	std::cout << a << " " << b << " " << c << "\n";

	return 0;
}