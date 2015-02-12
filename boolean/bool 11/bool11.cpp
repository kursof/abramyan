/* Даны два целых числа: A, B. 
 * Проверить истинность высказывания: 
 * «Числа A и B имеют одинаковую четность».
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "enter a and b: ";
	std::cin >> a >> b;

	bool c = (a % 2 == b % 2);

	std::cout << c;

	return 0;
}
