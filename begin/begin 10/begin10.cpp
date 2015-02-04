/* Даны два ненулевых числа.
 * Найти сумму, разность, произведение и частное их квадратов.
 */
#include <iostream>

int main ()
{
    float a, b, sum, rz, ch;

    std::cout << "enter a and b\n";
    std::cin >> a >> b;

    std::cout << "sum is " << a+b << "\n";
    std::cout << "rz is " << a-b << "\n";
    std::cout << "ch is " << (a*a)/(b*b);

    std::cout << "sum is " << a+b
    		<< "\nrz is " << a-b
    		<< "\nch is " << (a*a)/(b*b);

    return 0;
}