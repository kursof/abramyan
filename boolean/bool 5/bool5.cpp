/* Даны два целых числа: A, B.
 * Проверить истинность высказывания:
 * «Справедливы неравенства A ≥ 0 или B < −2».
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "enter a and b: ";
	std::cin >> a >> b;

	bool c = ((a >= 0) || (b < -2));

	std::cout << "\n" << c << "\n";

	return 0;
}
