/* Дан номер месяца — целое число в диапазоне 1–12
 * (1 — январь, 2 — февраль и т. д.).
 * Вывести название соответствующего времени года
 * («зима», «весна», «лето», «осень»).
 */

#include <iostream>

int main()
{
	int m;

	std::cout << "введите номер месяца\n";
	std::cin >> m;

	switch (m)
	{
		case 12: case 1: case 2:
				std::cout << "зима\n";
				break;
		case 3: case 4: case 5:
				std::cout << "весна\n";
				break;
		case 6: case 7: case 8:
				std::cout << "лето\n";
				break;
		case 9: case 10: case 11:
				std::cout << "осень\n";
				break;
		default:
				std::cout << "ошибка\n";
				break;
	}

	return 0;
}