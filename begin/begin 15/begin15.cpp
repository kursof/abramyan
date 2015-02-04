/* Дана площадь S круга.
 * Найти его диаметр D и длину L окружности,
 * ограничивающей этот круг, учитывая,
 * что L = π·D, S = π·D2/4.
 * В качестве значения π использовать 3.14.
 */

#include <iostream>
#include <cmath>

int main ()
{
    float S,D,L;
    const float pi = 3.14;

    std:: cout << "enter the square\n";
    std:: cin >> S;

    D = sqrt((4 * S) / pi); //подчсет диаметра
    L = pi * D; // подсчет длины окружности

    std:: cout << "diameter is " << D << "\n";
    std:: cout << "length is " << L << "\n";

    return 0;
}
