#include "Errors.h"
#include <iostream>

void Errors::fatal(const char* msg) {
	std::cerr << "Fatal Error: " << msg << std::endl;
	std::cout << "Press enter to continue..." << std::endl;
	std::exit(1);
}
