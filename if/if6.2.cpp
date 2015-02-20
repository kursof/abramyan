/* Даны два числа. Вывести большее из них. 
 */

#include <iostream>

int main()
{
	float a, b;

	std::cout << "введите два числа\n";
	std::cin >> a >> b;

	std::cout << (a > b ? a:b) << "\n";

	//удобно и в одну строку

	return 0;
}