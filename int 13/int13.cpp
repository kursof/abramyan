/* ���� ����������� �����.
 * � ��� ���������� ������ ����� ����� � ��������� �� ������.
 * ������� ���������� �����.
 */

#include <iostream>

int main()
{
	int a, n;

	std::cout << "enter a: ";
	std::cin >> a;

	n = a % 100 * 10 + (a / 100);

	std::cout << "\nnew number is: " << n;

	return 0;
}
