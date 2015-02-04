/* Даны переменные A, B, C. Изменить их значения,
 * переместив содержимое A в C, C — в B, B — в A,
 * и вывести новые значения переменных A, B, C
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
