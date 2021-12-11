#include <iostream>

int main() {
	std::cout << (-1 > 999U) << std::endl;

	int x = -1;
	unsigned int y = 999;
	std::cout << (x > y) << std::endl;


	return 0;
}
