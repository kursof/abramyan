/* Даны три целых числа: A, B, C.
 * Проверить истинность высказывания:
 * «Число B находится между числами A и C».
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "enter a, b, c: ";
	std::cin >> a >> b >> c;

	bool d = (b > a && b < c);

	std::cout << "\n" << d << "\n";

	return 0;
}
