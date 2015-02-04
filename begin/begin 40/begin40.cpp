/* Найти решение системы линейных уравнений вида
 * A1·x + B1·y = C1,
 * A2·x + B2·y = C2,
 * заданной своими коэффициентами A1, B1, C1, A2, B2, C2,
 * если известно, что данная система имеет единственное решение.
 * Воспользоваться формулами
 * x = (C1·B2 − C2·B1)/D,        y = (A1·C2 − A2·C1)/D,
 * где D = A1·B2 − A2·B1.
 */

#include <iostream>

int main()
{
	float a1, b1, c1;
	float a2, b2, c2;

	std::cout << "enter a1, b1, c1: ";
	std::cin >> a1 >> b1 >> c1;

	std::cout << "\nenter a2, b2, c2: ";
	std::cin >> a2 >> b2 >> c2;

	std::cout << "root is: ( " << (c1 * b2 - c2* b1) / (a1 * b2 - a2 * b1)
		<< ", " << (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1) << " )";

	return 0;
}
