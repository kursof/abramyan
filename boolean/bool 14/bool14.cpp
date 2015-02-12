/* Даны три целых числа: A, B, C. 
 * Проверить истинность высказывания: 
 * «Ровно одно из чисел A, B, C положительное».
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "enter a, b, c\n";
	std::cin >> a >> b >> c;

	bool d = ( (a > 0 && b <= 0 && c <= 0) ||
			   (a <= 0 && b > 0 && c <= 0) ||
			   (a <= 0 && b <= 0 && c > 0)
			 );

	std::cout << "\n" << d << "\n";

	return 0;
}