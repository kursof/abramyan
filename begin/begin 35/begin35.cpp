/* Скорость лодки в стоячей воде V км/ч, скорость течения реки U км/ч (U < V).
 * время движения лодки по озеру T1 ч, а по реке (против течения) Ч T2 ч.
 * ќпределить путь S, пройденный лодкой (путь = время Ј скорость).
 * ”честь, что при движении против течения скорость
 * лодки уменьшается на величину скорости течения
 */

#include <iostream>

int main()

{
	float v, u;
	float t1, t2;

	std::cout << "ukazhite skorost lodki v stoyachey vode: ";
	std::cin >> v;

	std::cout << "\nukazhite skorost techeniya: ";
	std::cin >> u;

	std::cout << "\nskolko vremeni lodka plyla po ozeru?: ";
	std::cin >> t1;

	std::cout << "\nskolko vremeni lodka plula protiv techeniya reki?: ";
	std::cin >> t2;

	std::cout << "\nlodka proshla: " << v * t1 + (v - u) * t2 << "\n";

	return 0;
}
