/* Даны три целых числа. Найти количество положительных чисел в исходном наборе.
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "введите три целых числа\n";
	std::cin >> a >> b >> c;

	//Страшно надеюсь на правильную табуляцию в ветвлении

	if (a > 0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	
	if (b > 0)
	{
		b = 1;		
	}
	else
	{
		b = 0;
	}

	if (c > 0)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	//алгоритм нормальный?

	std::cout << a + b + c << "\n";

	return 0;
} 