/* Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2).
 * Найти площади этих кругов S1 и S2,
 * а также площадь S3 кольца, внешний радиус которого равен R1,
 * а внутренний радиус равен R2:
 * S1 = π·(R1)2,        S2 = π·(R2)2,        S3 = S1 − S2.
 * В качестве значения π использовать 3.14.
 */

#include <iostream>
#include <cmath>

int main ()
{
    float r1, r2;
    const float pi = 3.14;

    std::cout << "enter radius 1 and radius 2\n";
    std::cin >> r1 >> r2;

    if (r1 < r2)
    {
        // на случай, если пользователь введет радиусы
        // неправильного соотношения длин
        std::cout <<"try another lengths\n";
    }
    else
    {
        std::cout << "first square is " << pi * pow(r1, 2) << "\n";
        std::cout << "second square is " << pi * pow(r2, 2) << "\n";
        std::cout << "third square is " 
            << pi * pow(r1, 2) - pi * pow(r2, 2) << "\n";
    }

    return 0;
}