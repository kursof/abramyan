/* Дано двузначное число. Найти сумму и произведение его цифр.
 */

#include <iostream>

int main()
{
	int a;

	std::cout << "enter the number: ";
	std::cin >> a;

	std::cout << "\nthe sum of the figures is: " << a / 10 + a % 10;
	std::cout << "\nthe pr of the figures is: " << (a / 10) * (a % 10);

	return 0;
}
