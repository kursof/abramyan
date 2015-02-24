/* Дано целое число K. Вывести строку-описание оценки, соответствующей числу K
 * (1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно»,
 * 4 — «хорошо», 5 — «отлично»).
 * Если K не лежит в диапазоне 1–5, то вывести строку «ошибка».
 */

#include <iostream>

int main()
{
	int K;

	std::cout << "введите оценку\n";
	std::cin >> K;

	switch (K)
	{
		case 1:
				std::cout << "плохо\n";
				break;
		case 2:
				std::cout << "неудовлетворительно\n";
				break;
		case 3:
				std::cout << "удовлетворительно\n";
				break;
		case 4:
				std::cout << "хорошо\n";
				break;
		case 5:
				std::cout << "отлично\n";
				break;
		default:
				std::cout << "ошибка\n";
				break;
	}


	return 0;
} 