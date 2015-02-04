/* Даны переменные A, B, C.
 * Изменить их значения,
 * переместив содержимое A в B, B — в C, C — в A,
 * и вывести новые значения переменных A, B, C
*/

#include <iostream>
#include <cmath>

int main ()
{
	float A , B, C;

	std::cout << "enter A\n";
	std::cin >> A;
	std::cout << "enter B\n";
	std::cin >> B;
	std::cout << "enter C\n";
	std::cin >> C;

	B = A + B + C;
	A = B - A - C;
	C = B - A - C;
	B = B - A - C;


	std::cout << "A is " << A << "\n";
	std::cout << "B is " << B << "\n";
	std::cout << "C is " << C << "\n";


	return 0;
}
