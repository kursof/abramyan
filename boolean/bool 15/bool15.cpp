/* Даны три целых числа: A, B, C. 
 * Проверить истинность высказывания: 
 * «Ровно два из чисел A, B, C являются положительными».
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "enter a, b, c\n";
	std::cin >> a >> b >> c;

	bool d = ( (a > 0 && b > 0 && c <= 0) ||
			   (a > 0 && b <= 0 && c > 0) || 
			   (a <= 0 && b > 0 && c > 0)
			 );

	std::cout << "\n" << d << "\n";

	return 0; 
}