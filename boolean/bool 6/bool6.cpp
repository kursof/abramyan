/* Даны три целых числа: A, B, C.
 * Проверить истинность высказывания:
 * «Справедливо двойное неравенство A < B < C»
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "enter a, b, c: ";
	std::cin >> a >> b >> c;

	bool d = (a < b && b < c);

	std::cout << "\n" << d << "\n";

	return 0;
}
