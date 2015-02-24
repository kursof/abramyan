/* Дан номер месяца — целое число в диапазоне 1–12
 * (1 — январь, 2 — февраль и т. д.).
 * Определить количество дней в этом месяце для невисокосного года.
 */
#include <iostream>

int main()
{
	int m;

	std::cout << "введите номер месяца\n";
	std::cin >> m;

	switch (m)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
				std::cout << 31 << " дней в месяце\n";
				break;
		case 2:
				std::cout << 28 << " дней в месяце\n";
				break;
		case 4: 
		case 6: 
		case 9: 
		case 11:
				std::cout << 30 << " дней в месяце\n";
				break;
	}

	return 0;
}