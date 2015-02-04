/* Дан размер файла в байтах.
 * Используя операцию деления нацело,
 * найти количество полных килобайтов,
 * которые занимает данный файл (1 килобайт = 1024 байта)
 */

#include <iostream>

int main()
{
	int x;

	std::cout << "enter number of bytes: ";
	std::cin >> x;

	std::cout << "\nyou have " << x/1024 << " kilobytes\n";
	
	return 0;
}
