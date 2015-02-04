/* Известно, что X кг шоколадных конфет стоит A рублей,
 * а Y кг ирисок стоит B рублей.
 * Определить, сколько стоит 1 кг шоколадных конфет,
 * 1 кг ирисок, а также во сколько раз шоколадные конфеты дороже ирисок.
 */

#include <iostream>

int main()
{
	float x, y;
	float a, b;

	std::cout << "skolko kilogramov konfet vy kupili?: ";
	std::cin >> x;

	std::cout << "\nskolko stoyat konfety?: ";
	std::cin >> a;

	std::cout << "\nskolko kilogramov irisok vy kupili?: ";
	std::cin >> y;

	std::cout << "\nskolko stoyat iriski?: ";
	std::cin >> b;

	std::cin >> b; std::cout << "\n";

	std::cout << "\n1 kilogram konfet stoit: " << a/x << " rubley\n"
		<< "1 kilogram irisok stoit: " << b/y << " rubley\n";

	std::cout << "1 kilogram konfet stoit bolshe 1 kiograma irisok v: "
		<< ( a * y ) / ( b * x ) << " raz\n";

	return 0;
}
