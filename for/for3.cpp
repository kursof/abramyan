/* Даны два целых числа A и B (A < B). Вывести в порядке убывания все целые
 * числа, расположенные между A и B (не включая числа A и B), а также
 * количество N этих чисел.  
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "введите два числа\n", std::cin >> a >> b;

	for (int i = b; i >= a; --i)
	{
		std::cout << i << "\n";
	}

	std::cout << b - a + 1 << "\n";

	return 0;
}
