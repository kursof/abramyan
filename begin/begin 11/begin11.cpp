/*Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей.*/
#include <iostream>
#include <cmath>

int main ()
{
    float a, b, c;

    std::cout << "enter two numbers\n";
    std::cin >> a >> b;

    c = fabs(a) / fabs(b);

    std::cout << "sum is " << a+b << '\n';
    std::cout << "rz is " <<  a-b << '\n';
    std::cout << "pr is " << a*b << '\n';
    std::cout << "ch is " << c << '\n';

    return 0;
}
