/* ���� ����� ������������� ����� A � B (A > B).
 * �� ������� ����� A ��������� ����������� ���������
 * ���������� �������� ����� B (��� ���������).
 * ��������� �������� ������� ������, ����� ���������� �������� B,
 * ����������� �� ������� A.
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "length of the a is: ";
	std::cin >> a;

	std::cout << "\nlength of the b is: ";
	std::cin >> b;

	std::cout << "\nyou can have " << a/b << " parts\n";

	return 0;
}
