/* Даны три точки A, B, C на числовой оси.
 * Точка C расположена между точками A и B.
 * Найти произведение длин отрезков AC и BC
 */

#include <iostream>
#include <cmath>

int main ()
{
    float x1, x2, x3;

    std::cout << "enter the coordinates of the dots\n" 
    		<< "third dot is between first and second\n";
    std::cin >> x1 >> x2 >> x3;

    std::cout << "pr of the length is " << fabs(x2 - x3) * fabs(x1 - x3) << "\n";

    return 0;
}
