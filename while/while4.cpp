/* Дано целое число N (> 0). Если оно является степенью числа 3,
 * то вывести True, если не является — вывести False.
 */

#include <iostream>

int main()
{
	int n, i = 0;

	std::cout << "n: ", std::cin >> n;

	while (n - 3 >= 0)
	{
		n -= 3;
		++i;
	}

	if (i % 3 == 0)
	{
		std::cout << "true\n";
	}
	else
	{
		std::cout << "false\n";
	}
	
	return 0;
}


