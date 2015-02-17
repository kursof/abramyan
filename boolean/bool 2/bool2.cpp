/* Дано целое число A. Проверить истинность высказывания:
 * «Число A является нечетным»
 */

#include <iostream>

int main()
{
	int a;

	std::cout << "enter a: ";
	std::cin >> a;

	bool b = (a % 2);

	std::cout << "\n" << b << "\n";

	return 0;
}
