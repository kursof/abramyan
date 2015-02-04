/* —корость лодки в сто€чей воде V км/ч, скорость течени€ реки U км/ч (U < V).
 * ¬рем€ движени€ лодки по озеру T1 ч, а по реке (против течени€) Ч T2 ч.
 * ќпределить путь S, пройденный лодкой (путь = врем€ Ј скорость).
 * ”честь, что при движении против течени€ скорость
 * лодки уменьшаетс€ на величину скорости течени€
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
