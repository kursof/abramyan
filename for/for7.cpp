/* Даны два целых числа A и B (A < B). 
 * Найти сумму всех целых чисел от A до B включительно. 
 */

#include <iostream>

int main()
{
	int a, b;
	int s = 0;

	std::cout << "введите два целых числа\n", std::cin >> a >> b;

	for (int i = a; i <= b; ++i)
	{
		s += i;
	}
	
	std::cout << s << "\n";

	return 0;
}