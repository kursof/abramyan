/* ��� ������ ����� � ������.
 * ��������� �������� ������� ������,
 * ����� ���������� ������ ����������,
 * ������� �������� ������ ���� (1 �������� = 1024 �����)
 */

#include <iostream>

int main()
{
	int x;

	std::cout << "enter number of bytes: ";
	std::cin >> x;

	std::cout << "\nyou have " << x/1024 << " kilobytes\n";
	
	return 0;
}
