/* Даны два целых числа: D (день) и M (месяц),
 * определяющие правильную дату невисокосного года.
 * Вывести значения D и M для даты, предшествующей указанной.
 */

#include <iostream>

int main()
{
	int d, m;

	std::cout << "введите дату и месяц\n";
	std::cin >> d >> m;

	if (!(--d))
	{
		switch (m)
		{
			case 1:
				d = 31, m = 12;
				break;
			case 2:
			case 4:
			case 6:
			case 8:
			case 9:
			case 11:
				d = 31, --m;
				break;
			case 3:
				d = 28, --m;
				break;
			case 5:
			case 7:
			case 10:
			case 12:
				d = 30, --m;
				break;
			default:
				std::cout << "error\n";
				break;		
		}
	}

	std::cout << d << " " << m << "\n";
	
	return 0;
} 

// Подобый вариант болле оптимален по записи.
// Запись "(!(--d))" равноценна "(--d == 0)"