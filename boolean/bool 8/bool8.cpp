/* ���� ��� ����� �����: A, B.
 * ��������� ���������� ������������:
 * ������� �� ����� A � B ��������.
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "enter a, b: ";
	std::cin >> a >> b;

	bool c = (a % 2 == 1 && b % 2 == 1);

	std::cout << "\n" << c << "\n";

	return 0;
}
