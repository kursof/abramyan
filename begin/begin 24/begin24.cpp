/* ƒаны переменные A, B, C. »зменить их значени€,
 * переместив содержимое A в C, C Ч в B, B Ч в A,
 * и вывести новые значени€ переменных A, B, C
 */

#include <iostream>

int main()
{
	int A, B, C;

	std::cout << "enter A, B, C\n";
	std::cin >> A >> B >> C;

	B = A + B + C;
	C = B - A - C;
	A = B - A - C;
	B = B - A - C;

	std::cout << "A is: " << A << "\n"
		<<"B is: " << B << "\n"
		<< "C is: " << C << "\n";


	return 0;
}
