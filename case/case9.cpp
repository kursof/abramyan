/* Даны два целых числа: D (день) и M (месяц),
 * определяющие правильную дату невисокосного года.
 * Вывести значения D и M для даты, следующей за указанной.
 */

#include <iostream>

int main()
{
	int d, m;

	std::cout << "введите число и месяц\n";
	std::cin >> d >> m;

	switch (m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if (d == 31)
			{
				d = 1;
				++m;
			}
			else
			{
				++d;
			}
			break;
		case 12:
			if (d == 31)
			{
				m = d = 1;
			}
			else
			{
				++d;
			}
			break;
		case 2:
			if (d == 28)
			{
				d = 1;
				++m;
			}
			else
			{
				++d;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (d == 30)
			{
				d = 1;
				++m;
			}
			else
			{
				++d;
			}
			break;
		default:
			std::cout << "error\n";
			break;
	}

	std::cout << d << " " << m << "\n";

	return 0;
} 