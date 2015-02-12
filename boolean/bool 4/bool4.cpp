/* Даны два целых числа: A, B.
 * Проверить истинность высказывания:
 * «Справедливы неравенства A > 2 и B ≤ 3»
 */

 #include <iostream>

 int main()
 {
 	int a, b;

 	std::cout << "enter a and b: ";
 	std::cin >> a >> b;

 	bool c = (a > 2 && b <= 3);

 	std::cout << "\n" << c << "\n";

 	return 0;
 }
