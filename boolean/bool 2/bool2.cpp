/* ���� ����� ����� A. ��������� ���������� ������������:
 * ������ A �������� ��������
 */

#include <iostream>

int main()
{
	int a;

	std::cout << "enter a: ";
	std::cin >> a;

	bool b = (a % 2 == 1);

	std::cout << "\n" << b << "\n";

	return 0;
}
