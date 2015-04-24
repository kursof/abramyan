/* Даны положительные числа A и B (A > B). На отрезке длины A размещено
 * максимально возможное количество отрезков длины B (без наложений).
 * Не используя операции умножения и деления, найти длину
 * незанятой части отрезка A.
 */

#include <iostream>

int main()
{
	float a, b;

	std::cout << "a: \n", std::cin >> a;
	std::cout << "b: \n", std::cin >> b;

	float sum = a;

	while ((sum - b) >= 0)
	{
		sum -= b;
	}

	std::cout << sum << "\n";

	return 0;
}