/* Даны четыре целых числа, одно из которых отлично от трех других,
 * равных между собой. 
 * Определить порядковый номер числа, отличного от остальных.
 */

// недоделано

#include <iostream>

int main()
{
	int a, b, c, d;
	int z = 1;

	std::cout << "введите четыре числа, три из которых равны друг другу\n";
	std::cin >> a >> b >> c >> d;

	if (a != b)
	{
		std::cout << z << "\n"
	}
	else
	{
		++z;

		if (a != c)
		{
			++z;

			std::cout << z << "\n";
		}
		else
		{
			std::cout << ++z << "\n";
		}
	}
	
	return 0;
}
