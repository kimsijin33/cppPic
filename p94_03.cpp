#include <iostream>

int main() {
	//p84
	std::cout << "Hello\nWorld!\n";

	double pi = 3.14;

	std::cout << "원주율은" << pi << std::endl;
	std::cout.width(5);
	std::cout << "*" << std::endl;
	std::cout.width(5);
	std::cout << "**" << std::endl;
	std::cout.width(5);
	std::cout << "***" << std::endl;
	std::cout.width(5);
	std::cout << "****" << std::endl;
#if 0
	std::cout.width(5);
	std::cout << "*****" << std::endl;
#endif
	return 0;
}

