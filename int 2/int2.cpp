/*���� ����� M � �����������. ��������� �������� ������� ������,
*����� ���������� ������ ���� � ��� (1 ����� = 1000 ��)
*/

#include <iostream>

int main()
{
	int x;

	std::cout << "enter mass in kilogram: ";
	std::cin >> x;

	std::cout << "\nmass in tons is: " << x/1000;

	return 0;
}
