/* Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · …
 * (N сомножителей).
 */

#include <iostream>

int main()
{
	int n;
	float pr = 1;

	std::cout << "введите n\n", std::cin >> n;

	for (float i = 1; i <= n; ++i)
	{
		pr *= 1 + (i / 10);
	}

	std::cout << pr << "\n";

	return 0;
}