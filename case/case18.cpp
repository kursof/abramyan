/* Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа,
 * например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».
 */

#include <iostream>

int main()
{
	int a;

	std::cout << "введите трехзначное число\n";
	std::cin >> a;

	switch (a / 100)
	{
		case 1:
			std::cout << "сто ";
			break;
		case 2:
			std::cout << "двести ";
			break;
		case 3:
			std::cout << "триста ";
			break;
		case 4:
			std::cout << "четыреста ";
			break;
		case 5:
			std::cout << "пятьсот ";
			break;
		case 6:
			std::cout << "шестьсот ";
			break;
		case 7:
			std::cout << "семьсот ";
			break;
		case 8:
			std::cout << "восемьсот ";
			break;
		case 9:
			std::cout << "девятьсот ";
			break;
		default:
			std::cout << "error\n";
	}

	if ((a / 10) % 10 == 1)
	{
		switch (a % 10)
		{
			case 0:
				std::cout << "десять\n";
				break;
			case 1:
				std::cout << "одиннадцать\n";
				break;
			case 2:
				std::cout << "двенадцать\n";
				break;
			case 3:
				std::cout << "тринадцать\n";
				break;
			case 4:
				std::cout << "четырнадцать\n";
				break;
			case 5:
				std::cout << "пятнадцать\n";
				break;
			case 6:
				std::cout << "шестнадцать\n";
				break;
			case 7:
				std::cout << "семнадцать\n";
				break;
			case 8:
				std::cout << "восемнадцать\n";
				break;
			case 9:
				std::cout << "девятнадцать\n";
				break;
			default:
				std::cout << "error\n";
				break;
		}
	}
	else
	{
		switch ((a / 10) % 10)
		{
			case 0:
				std::cout << " ";
				break;
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
			case 7:
				std::cout << "семьдесят ";
				break;
			case 8:
				std::cout << "восемьдесят ";
				break;
			case 9:
				std::cout << "девяносто ";
				break;
			default:
				std::cout << "error\n";
				break;
		}

		switch (a % 10)
		{
			case 0:
				std::cout << " ";
				break;
			case 1:
				std::cout << "один\n";
				break;
			case 2:
				std::cout << "два\n";
				break;
			case 3:
				std::cout << "три\n";
				break;
			case 4:
				std::cout << "четыре\n";
				break;
			case 5:
				std::cout << "пять\n";
				break;
			case 6:
				std::cout << "шесть\n";
				break;
			case 7:
				std::cout << "семь\n";
				break;
			case 8:
				std::cout << "восемь\n";
				break;
			case 9:
				std::cout << "девять\n";
				break;
			default:
				std::cout << "error\n";
		}
	}
	
	return 0;
}