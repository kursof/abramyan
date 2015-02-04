/* Поменять местами содержимое переменных A и B и
 * вывести новые значения A и B.
 */
 
#include <iostream>

int main ()
{
	float A,B;

	std::cout << "enter A and B\n";
	std::cin >> A >> B;

	A = A + B;
	B = A - B;
	A = A - B;
	/*
	// swap: 
	float tmp = a;
		  a = b;
		  b = tmp;
	*/

	std::cout << "A is " << A << "\n";

	std::cout << "B is " << B << "\n";

	return 0;
}
