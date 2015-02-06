/* Даны целые положительные числа A и B (A > B).
 * На отрезке длины A размещено максимально возможное
 * количество отрезков длины B (без наложений).
 * Используя операцию деления нацело, найти количество отрезков B,
 * размещенных на отрезке A.
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "length of the a is: ";
	std::cin >> a;

	std::cout << "\nlength of the b is: ";
	std::cin >> b;

	std::cout << "\nyou can have " << a/b << " parts\n";

	return 0;
}
