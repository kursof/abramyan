/* Даны два числа. Вывести вначале большее, а затем меньшее из них. 
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "введите два числа\n";
	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << a << '\n' << b << "\n";
	}
	else
	{
		std::cout << b << "\n" << a << "\n";
	}

	return 0;
}