#include "EntityManager.h"
#include <iostream>

#define NUMBER_OF_ENTITIES 100


void EntityManager::init()
{
	// TODO: allocate memory for entities!
	std::cout << "EntityManager::init has been called!\n";
	entities = new Entity[NUMBER_OF_ENTITIES];
}

void EntityManager::update()
{
	// TODO: update the position of all entities
	std::cout << "EntityManager::update has been called!\n";
	for (int i = 0; i < NUMBER_OF_ENTITIES; i++) {
		entities->update();
	}
}

void EntityManager::shutdown()
{
	// TODO: remove all entities and free their memory
	std::cout << "EntityManager::shutdown has been called!\n";
	delete[] entities;
}