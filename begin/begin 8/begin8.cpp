/* Даны два числа a и b.
 * Найти их среднее арифметическое: (a + b)/2
 */

#include <iostream>

int main ()
{
	float a,b;

	std::cout << "enter a,b\n";
	std::cin >> a >> b;

	std::cout << "result is " << (a+b)/2;

	std::cin;

	return 0;
}
