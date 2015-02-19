/* Даны два числа. Вывести большее из них. 
 */
 #include <iostream>

int main()
{
	int a, b;

	std::cout << "введите два числа\n";
	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << a << "\n";
	}
	else
	{
		std::cout << b << "\n";
	}

	return 0;
}