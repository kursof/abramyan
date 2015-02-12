/* Проверить истинность высказывания: 
 * «Среди трех данных целых чисел есть 
 * хотя бы одна пара взаимно противоположных».
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "enter a, b, c\n";
	std::cin >> a >> b >> c;

	bool d = (a + b == 0 || b + c == 0 || a + c == 0);

	std::cout << "\n" << d << "\n";

	return 0;
}