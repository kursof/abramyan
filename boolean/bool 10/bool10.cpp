/* Даны два целых числа: A, B. 
 * Проверить истинность высказывания: 
 * «Ровно одно из чисел A и B нечетное».			
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "enter a and b: ";
	std::cin >> a >> b;

	bool c = (!(a % 2)|| !(b % 2));

	std::cout << "\n" << c << "\n";

	return 0;
}
