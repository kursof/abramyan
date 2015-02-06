/* Дано расстояние L в сантиметрах.
 * Используя операцию деления нацело,
 * Найти количество полных метров в нем (1 метр = 100 см).
 */

#include <iostream>

int main()
{
	int x;

	std::cout << "enter length in sm: ";
	std::cin >> x;

	std::cout << "\nlength in meters is: " << x/100;

	return 0;
}
