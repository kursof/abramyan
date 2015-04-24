/* Дано вещественное число X (|X| < 1) и целое число N (> 0).
 * Найти значение выражения
 * X + 1·X3/(2·3) + 1·3·X5/(2·4·5) + … +
 * + 1·3·…·(2·N−1)·X2·N+1/(2·4·…·(2·N)·(2·N+1)).
 * Полученное число является приближенным значением функции arcsin в точке X. 
 */

#include <iostream>
#include <cmath>

int main()
{
	float x, arcsin, nf = 1, f = 1;
	int n;

	std::cout << "введите вещественное число\n", std::cin >> x;
	std::cout << "введите целое число\n", std::cin >> n;

	arcsin = x;

	for (int i = 1; i < 2 * n + 1; ++i)
	{
		f *= 2 * i - 1;
		nf *= 2 * i * (2 * i + 1);
		
		int st = 2 * i + 1;

		arcsin += f * pow(x, st) / nf;
	}

	//потести на n>=15, вылазит некий -nan - что за херня?

	std::cout << arcsin << "\n";

	return 0;
}