/*Дана масса M в килограммах. Используя операцию деления нацело,
*найти количество полных тонн в ней (1 тонна = 1000 кг)
*/

#include <iostream>

int main()
{
	int x;

	std::cout << "enter mass in kilogram: ";
	std::cin >> x;

	std::cout << "\nmass in tons is: " << x/1000;

	return 0;
}
