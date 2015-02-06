/* Решить линейное уравнение A·x + B = 0,
 * заданное своими коэффициентами A и B (коэффициент A не равен 0).
 */

#include <iostream>

int main()
{
	float a, b;

	std::cout << "enter a and b: ";
	std::cin >> a >> b;

	std::cout << "\nx is: " << (- b)/a;

	return 0;
}
