/* Дано целое число N (> 1). Найти наибольшее целое число K,
 * при котором выполняется неравенство 3K < N.
 */

#include <iostream>
#include <cmath>

int main()
{
	int n;

	std::cout << "n: ", std::cin >> n;

	int k = 0;

	while (pow(3, k) < n)
	{
		++k;
	}
	
	// while (pow(3, k++) < n);

	std::cout << k - 1 << "\n";

	return 0;
}