#include <iostream>

#include "GameLoop.h"

int main(int argc, char** argv) {
	
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cerr << "Failed to initalize SDL!" << std::endl;
		std::cout << "Press enter to continue.." << std::endl;
		std::cin.get();
		return EXIT_FAILURE;
	}

	Window window("This is the title of the window", 900, 600);
	GameLoop game(window);

	game.run();

	return EXIT_SUCCESS;
}