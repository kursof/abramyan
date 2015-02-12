/* Проверить истинность высказывания: 
 * «Среди трех данных целых чисел 
 * есть хотя бы одна пара совпадающих».
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "enter a, b, c\n";
	std::cin >> a >> b >> c;

	bool d = (a == b || b ==c || a == c);

	std::cout << "\n" << d << "\n";

	return 0;
}