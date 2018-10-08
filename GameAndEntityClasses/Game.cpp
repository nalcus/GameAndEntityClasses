#include "Game.h"
#include <iostream>

void Game::run() {
	std::cout << "Game::run has been called!\n";
	if (!active) {
		std::cout << "Game object has not been properly initialized!\n";
		return;
	}
	// while loop that iterates while game is running
	entityManager.update();
	
}

void Game::init() {
	std::cout << "Game::init has been called!\n";
	entityManager.init();
	active = true;
}

void Game::shutdown() {
	std::cout << "Game::shutdown has been called!\n";
	entityManager.shutdown();
	active = false;
}