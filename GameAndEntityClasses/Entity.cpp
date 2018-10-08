#include "Entity.h"
#include <iostream>


Entity::Entity()
{
}


Entity::~Entity()
{
}

void Entity::update() {
	std::cout << "Entity updated\n";
}
