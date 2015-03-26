/* ƒано трехзначное число.
 * »спользу€ одну операцию делени€ нацело,
 * вывести отдельно единицы, дес€тки и сотни,
 * найти сумму и произведение его цифр.
 */

#include <iostream>

int main()
{
	int a;

	std::cout << "enter the number: ";
	std::cin >> a;

	std::cout << "\nfirst figure is: " << a / 100
		<< "\nsecond figure is: " << a / 10 - (a / 100) * 10
		<< "\nthe last figure is: " << a % 10;

	std::cout << "\nsum is: " << a / 100 + a / 10 -(a / 100) * 10 + a % 10
		<< "\npr is: " << (a / 100) * ((a / 10) -(a / 100) * 10) * (a % 10);

	return 0;
