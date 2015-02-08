#include <iostream>

int main()
{
	//посчитать объем и площадь поверхности куба при известном ребре

	int a, S, V;

	std::cout << "enter the edge of the cube\n";
	std::cin >> a; //ввод ребра

	V = a * a * a; //подсчет площади
	S = 6 * a * a; //и объема

	std::cout << "square and volume are " << S << " and " << V << "\n";//вывод данных

	return 0;
}
