#include <iostream>

int main ()

{
    int a,P,S;

    std::cout << "enter a " << std::endl;
    std::cin >> a; //водится сторона квадрата

    P=a*4; //подсчет периметра
    S=a*a; // и площади

    std::cout << "perimeter is " << P << std::endl; // вывод периметра
    std::cout << "square is " << S << std::endl; //и площади

    return 0;
}
