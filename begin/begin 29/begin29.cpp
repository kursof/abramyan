/* Дано значение угла α в градусах (0 ≤ α < 360).
 * Определить значение этого же угла в радианах,
 * учитывая, что 180° = π радианов.
 * В качестве значения π использовать 3.14.
 */

#include <iostream>
#include <cmath>

int main()
{
	const float pi = 3.14;
	float a;

	std::cout << "enter a: ";
	std::cin >> a;

	a *= pi/180;

	std::cout << "a is: " << a;

	return 0;
}
