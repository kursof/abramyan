/* Дано вещественное число A и целое число N (> 0). Используя один цикл,
 * вывести все целые степени числа A от 1 до N. 
 */

#include <iostream>
#include <cmath>

int main()
{
	float a;
	int n;

	std::cout << "введите а\n", std::cin >> a;
	std::cout << "введите n\n", std::cin >> n;

	for (int i = 1; i <= n ; ++i)
	{
		std::cout << pow(a, i) << "\n"; 
	}

	return 0;
}