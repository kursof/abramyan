/* Дано целое число в диапазоне 10–40, определяющее количество учебных заданий
 * по некоторой теме. Вывести строку-описание указанного количества заданий,
 * обеспечив правильное согласование числа со словами «учебное задание»,
 * например: 18 — «восемнадцать учебных заданий»,
 * 23 — «двадцать три учебных задания», 31 — «тридцать одно учебное задание».
 */

#include <iostream>

int main()
{
	int A, intA, modA;

	std::cout << "введите количество учебных заданий\n";
	std::cin >> A;

	intA = A / 10;
	modA = A % 10;

	if (A < 20)
	{
		switch (A)
		{
			case 11:
				std::cout << "одиннадцать ";
				break;
			case 12:
				std::cout << "двенадцать ";
				break;
			case 13:
				std::cout << "тринадцать ";
				break;
			case 14:
				std::cout << "четырнадцать ";
				break;
			case 15:
				std:: cout << "пятнадцать ";
				break;
			case 16:
				std::cout << "шестнадцать ";
				break;
			case 17:
				std::cout << "семнадцать ";
				break;
			case 18:
				std::cout << "восемнадцать ";
				break;
			case 19: 
				std::cout << "девятнадцать ";
				break;
			default:
				std::cout << "error\n";
		}
		
		std::cout << "учебных заданий\n";
		break;				
	}
	else
	{
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
			default:
				std::cout << "error\n";
				break;
		}
	

		switch (modA)
		{
			case 0:
				std::cout << "учебных заданий\n";
				break;
			case 1:
				std::cout << "одно учебное задание\n";
				break;
			case 2:
				std::cout << "два учебных задания\n";
				break;
			case 3:
				std::cout << "три учебных задания\n";
				break;
			case 4:
				std::cout << "четыре учебных задания\n";
				break;
			case 5:
				std::cout << "пять учебных заданий\n";
				break;
			case 6:
				std::cout << "шесть учебных заданий\n";
				break;
			case 7:
				std::cout << "семь учебных заданий\n";
				break;
			case 8:
				std::cout << "восемь учебных заданий\n";
				break;
			case 9:
				std::cout << "девять учебных заданий\n";
			default:
				std::cout << "error\n";
				break;
		}
	}

	return 0;
} 