/* Робот может перемещаться в четырех направлениях
 * («С» — север, «З» — запад, «Ю» — юг, «В» — восток)
 * и принимать три цифровые команды: 0 — продолжать движение,
 * 1 — поворот налево, −1 — поворот направо.
 * Дан символ C — исходное направление робота
 * и целое число N — посланная ему команда.
 * Вывести направление робота после выполнения полученной команды.
 */

//первая программа на c++ такого размера

#include <iostream>
#include <cmath>

int main()
{
	int n;
	char c;

	std::cout << "введите команду\n";
	std::cin >> n;

	std::cout << "введите исходное направление\n";
	std::cin >> c;


	switch (c)
	{
	case 'n':
			if (n == 0)
			{
				c = 'n';
			}
			else
			{	
				if (n == 1)
				{
					c = 'w';
				}
				else
				{
					if (n == -1)
					{
						c = 'e';
					}
					else
					{
						std::cout << 'ошибка\n';
					}
				}
			}
			break;
	case 'w':
			if (n == 0)
			{
				c = 'w';
			}
			else
			{	
				if (n == 1)
				{
					c = 's';
				}
				else
				{
					if (n == -1)
					{
						c = 'n';
					}
					else
					{
						std::cout << 'ошибка\n';
					}
				}
			}
			break;
	case 's':
			if (n == 0)
			{
				c = 's';
			}
			else
			{	
				if (n == 1)
				{
					c = 'e';
				}
				else
				{
					if (n == -1)
					{
						c = 'w';
					}
					else
					{
						std::cout << 'ошибка\n';
					}
				}
			}
			break;
	case 'e':
			if (n == 0)
			{
				c = 'e';
			}
			else
			{	
				if (n == 1)
				{
					c = 'n';
				}
				else
				{
					if (n == -1)
					{
						c = 's';
					}
					else
					{
						std::cout << 'ошибка\n';
					}
				}
			}
			break;
	default:
			std::cout << "error\n";
			break;
	}
				
	std::cout << "\n" << c << "\n";
	
	return 0;
}