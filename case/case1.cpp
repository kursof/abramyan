/* Дано целое число в диапазоне 1–7.
 * Вывести строку — название дня недели, соответствующее данному числу
 * (1 — «понедельник», 2 — «вторник» и т. д.).
 */

#include <iostream>

int main()
{
	int x;

	std::cout << "введите номер дня недели\n";
	std::cin >> x;

	switch (x)
	{
		case 1:
			std::cout << "понедельник\n";
			break;
		case 2:
			std::cout << "вторник\n";
			break;
		case 3:
			std::cout << "среда\n";
			break;
		case 4:
			std::cout << "четверг\n";
			break;
		case 5:
			std::cout << "пятница\n";
			break;
		case 6:
			std::cout << "суббота\n";
			break;
		case 7:
			std::cout << "воскресенье\n";
			break;
		default:
			std::cout << "введите другое число\n";
			break;
	}
	
		

	return 0;
}