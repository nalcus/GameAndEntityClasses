// this is the class for the main game engine. 

#pragma once
#ifndef GAME_H_
#define GAME_H_

#include "EntityManager.h"

class Game {
public:
	void run();
	void init();
	void shutdown();
private:
	bool active=false;

	EntityManager entityManager;
};

#endif
