#include <iostream>

int main()
{
	int d;

	std::cout << "Enter d: ", std::cin >> d;

	switch (d)
	{
	case 1:
		std::cout << "Monday\n";
		break;
	case 2:
		std::cout << "Tuesday\n";
		break;
	case 3:
		std::cout << "Wednesday\n";
		break;
	case 4:
		std::cout << "Thursday\n";
		break;
	case 5:
		std::cout << "Friday\n";
		break;
	case 6:
		std::cout << "Saturday\n";
		break;
	case 7:
	case 8:
	case 9:
		std::cout << "Sunday\n";
		break;
	default:
		std::cout << "What?oO"
	}

	return 0;
}