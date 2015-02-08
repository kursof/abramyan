/* Дано двузначное число. Вывести число,
 * полученное при перестановке цифр исходного числа.
 */

#include <iostream>

int main()
{
	int a, n;

	std::cout << "enter the number: ";
	std::cin >> a;

	n = a / 10 + (a % 10) * 10;

	std::cout << "\nnew number is: " << n;

	return 0;
}
