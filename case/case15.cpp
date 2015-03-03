/* Мастям игральных карт присвоены порядковые номера: 1 — пики, 2 — трефы,
 * 3 — бубны, 4 — червы. Достоинству карт, старших десятки, присвоены номера:
 * 11 — валет, 12 — дама, 13 — король, 14 — туз.
 * Даны два целых числа: N — достоинство (6 ≤ N ≤ 14)
 * и M — масть карты (1 ≤ M ≤ 4).
 * Вывести название соответствующей карты вида
 * «шестерка бубен», «дама червей», «туз треф» и т. п. 
 */

#include <iostream>

int main()
{
	int k, m, n;

	std::cout << "введите масть карты\n";
	std::cin >> m;

	std::cout << "введите достоинство карты\n";
	std::cin >> k;

	switch (k)
	{
		case 6:
			if (m == 1)
			{
				std::cout << "шестерка пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "шестерка треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "шестерка бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "шестерка червей\n";
						}
					}
				}
			}
			break;
		case 7:
			if (m == 1)
			{
				std::cout << "семерка пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "семерка треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "семерка бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "семерка червей\n";
						}
					}
				}
			}
			break;
		case 8:
			if (m == 1)
			{
				std::cout << "восьмерка пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "восьмерка треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "восьмерка бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "восьмерка червей\n";
						}
					}
				}
			}
			break;
		case 9:
			if (m == 1)
			{
				std::cout << "девятка пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "девятка треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "девятка бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "девятка червей\n";
						}
					}
				}
			}
			break;
		case 10:
			if (m == 1)
			{
				std::cout << "десятка пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "десятка треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "десятка бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "десятка червей\n";
						}
					}
				}
			}
			break;
		case 11:
			if (m == 1)
			{
				std::cout << "валет пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "валет треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "валет бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "валет червей\n";
						}
					}
				}
			}
			break;
		case 12:
			if (m == 1)
			{
				std::cout << "дама пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "дама треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "дама бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "дама червей\n";
						}
					}
				}
			}
			break;
		case 13:
			if (m == 1)
			{
				std::cout << "король пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "король треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "король бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "король червей\n";
						}
					}
				}
			}
			break;
		case 14:
			if (m == 1)
			{
				std::cout << "туз пик\n";
			}
			else
			{
				if (m == 2)
				{
					std::cout << "туз треф\n";
				}
				else
				{
					if (m == 3)
					{
						std::cout << "туз бубен\n";
					}
					else
					{
						if (m == 4)
						{
							std::cout << "туз червей\n";
						}
					}
				}
			}
			break;
		default:
			std::cout << "error\n";
			break;
	}

	return 0;
}