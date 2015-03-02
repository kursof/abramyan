/* Дано целое число в диапазоне 20–69, определяющее возраст (в годах).
 * Вывести строку-описание указанного возраста, обеспечив правильное
 * согласование числа со словом «год», например: 20 — «двадцать лет»,
 * 32 — «тридцать два года», 41 — «сорок один год». 
 */

#include <iostream>

int main()
{
	int A, modA, intA;

	std::cout << "введите возраст в диапазоне 20-69\n";
	std::cin >> A;

	modA = A % 10;
	intA = A / 10;

	switch (intA)
	{
	case 2:
			std::cout << "двадцать ";
			break;
	case 3:
			std::cout << "тридцать ";
			break;
	case 4:
			std::cout << "сорок ";
			break;
	case 5:
			std::cout << "пятьдесят ";
			break;
	case 6:
			std::cout << "шестьдесят ";
			break;
	default:
			std::cout << "error\n";
			break;
	}

	switch (modA)
	{
	case 0:
			std::cout << "лет\n";
			break;
	case 1:
			std::cout << "один год\n";
			break;
	case 2:
			std::cout << "два года\n";
			break;
	case 3:f
			std::cout << "три года\n";
			break;
	case 4:
			std::cout << "четыре года\n";
			break;
	case 5:
			std::cout << "пять лет\n";
			break;
	case 6:
			std::cout << "шесть лет\n";
			break;
	case 7:
			std::cout << "семь лет\n";
			break;
	case 8:
			std::cout << "восемь лет\n";
			break;
	case 9:
			std::cout << "девять лет\n";
	default:
			std::cout << "error\n";
			break;
	}

	return 0;
}
