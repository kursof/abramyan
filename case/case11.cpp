/* Локатор ориентирован на одну из сторон света («С» — север, «З» — запад,
 * «Ю» — юг, «В» — восток) и может принимать три цифровые команды поворота:
 * 1 — поворот налево, −1 — поворот направо, 2 — поворот на 180°.
 * Дан символ C — исходная ориентация локатора и целые числа
 * N1 и N2 — две посланные команды.
 * Вывести ориентацию локатора после выполнения этих команд
 */

#include <iostream>
#include <cmath>

int main()
{
	int n1, n2, n;
	char c;

	std::cout << "введите команды\n";
	std::cin >> n1 >> n2;

	std::cout << "введите исходное направление\n";
	std::cin >> c;

	n = n1 + n2;

	if (n == 3)
	{
		n = -1;//если просуммировать поворот на 180 и поворот налево, получится 3
	}

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
						if (n == 2)
						{
							c = 's';
						}
						else
						{
							std::cout << "error\n";
						}
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
						if (n == 2)
						{
							c = 'e';
						}
						else
						{
							std::cout << "error\n";
						}
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
						if (n == 2)
						{
							c = 'n';
						}
						else
						{
							std::cout << "error\n";
						}
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
						if (n == 2)
						{
							c = 'w';
						}
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