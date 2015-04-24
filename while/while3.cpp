/* Даны целые положительные числа N и K. Используя только операции сложения
 * и вычитания, найти частное от деления нацело N на K,
 * а также остаток от этого деления.
 */

#include <iostream>

int main()
{
	int n, k;
	int i = 0;

	std::cout << "n: ", std::cin >> n;
	std::cout << "k: ", std::cin >> k;

	while((n - k) >= 0)
	{
		n -= k;
		++i;
	}

	std::cout << n << "\n" << i << "\n";

 	return 0;
}