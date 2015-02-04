/* Дано значение угла α в радианах (0 ≤ α < 2·π).
 * Определить значение этого же угла в градусах,
 * учитывая, что 180° = π радианов.
 * В качестве значения π использовать 3.14
 */

#include <iostream>
#include <cmath>

int main()
{
	const float pi = 3.14;
	float a;

	std::cout << "enter a: ";
	std::cin >> a;

	a *= 180/pi;

	std::cout << "a is: " << a;

	return 0;
}
