/*���� ����������� �����.
* � ��� ���������� ������ ������ �����
* � ��������� �� �����. ������� ���������� �����.
*/

#include <iostream>

int main()
{
	int a, n;

	std::cout << "enter the number: ";
	std::cin >> a;

	n = a % 10 * 100 + a / 10;

	std::cout << "\nthe new number is: " << n;

	return 0;
}
