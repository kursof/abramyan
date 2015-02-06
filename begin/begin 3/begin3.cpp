#include <iostream>

int main ()
{
    int a, b, S, P;

    std::cout << "Enter a,b:\n";
    std::cin >> a >> b; // ввод двух сторон прямоугольника

    S = a * b;
    P = (a + b) * 2;

    std::cout << "Square is " << S << "\nPerimeter is " << P << std::endl;

    return 0;
}
