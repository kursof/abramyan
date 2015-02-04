#include <iostream>

int main ()
{
    const float pi = 3.14;
    float r, L;

    std::cout << "enter radius\n";
    std::cin >> r;

    L = 2 * pi * r;

    std::cout << "length of the round is " << L << "\n";

    return 0;
}
