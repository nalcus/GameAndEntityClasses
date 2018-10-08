#pragma once
#include "Entity.h"
class EntityManager
{
public:
	void init();
	void update();
	void shutdown();
private:
	Entity* entities;
};




