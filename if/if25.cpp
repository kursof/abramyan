/* Для данного целого x найти значение следующей функции f,
 * принимающей значения целого типа:
 * f(x) = 2·x, если x < −2 или x > 2, −3·x в противном случае.
 */

#include <iostream>

int main()
{
	int x;

	std::cout << "введите x\n";
	std::cin >> x;

	if (x < -2 && x > 2)
	{
		std::cout << 2 * x << "\n";
	}
	else
	{
		std::cout << (-3) * x << "\n";
	}

	return 0;
}

// Сократить до одного std::cout