/* ���� ��� ����� �����: A, B, C.
 * ��������� ���������� ������������:
 * ������ B ��������� ����� ������� A � C�.
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "enter a, b, c: ";
	std::cin >> a >> b >> c;

	bool d = (b > a && b < c);

	std::cout << "\n" << d << "\n";

	return 0;
}
