/* Найти длину окружности L и площадь круга S заданного радиуса R:
 * L = 2·π·R, S = π·R2.
 * В качестве значения π использовать 3.14.
 */
#include <iostream>

int main ()
{
    const float pi = 3.14;
    float r, L, S;

    std::cout << "enter radius\n";
    std::cin >> r;

    L = 2 * pi * r;
    S = pi * r * r;

    std::cout << "length is " << L << " and square is " << S << "\n";
    
    return 0;
}
