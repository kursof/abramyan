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

	bool c = (a % 2 && b % 2);

	std::cout << "\n" << c << "\n";

	return 0;
}
