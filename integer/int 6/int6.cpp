/* Дано двузначное число. Вывести вначале его левую цифру (десятки),
 * а затем — его правую цифру (единицы).
 * Для нахождения десятков использовать операцию деления нацело,
 * для нахождения единиц — операцию взятия остатка от деления.
 */

#include <iostream>

int main()
{
	int a;

	std::cout << "enter the number: ";
	std::cin >> a;

	std::cout << "\nfirst figure is: " << a / 10
		<< "\nsecond figere is: " << a % 10;

	return 0;
}
