/* известно, что X кг конфет стоит A рублей.
 * определить, сколько стоит 1 кг и Y кг этих же конфет*/

#include <iostream>

int main()
{
	float x, y, a;

	std::cout << "how many kilogramm of sweets do you have?: ";
	std::cin >> x;

	std::cout << "\nhow much is it?: ";
	std::cin >> a;

	std::cout << "\nyou can buy 1 kilogram of sweets with: " << a / x
		<< " rubles\nhow many kilograms of sweets do you want to buy: ";
	std::cin >> y;

	std::cout << "\nyou need: " << (a / x)*y << " rubles";

	return 0;
}
