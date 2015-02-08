//зная три стороны параллелепипеда найти объем и площадь поверхности

#include <iostream>

int main ()
{
    int a, b, c, V, S;
    std::cout << "enter three edges\n"; //приглашение к вводу
    std::cin >> a >>  b >>  c; //ввод сторон

    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);

    std::cout << "square is " << S << " and " << "volume is " << V; //вывод данных

    return 0;
}
