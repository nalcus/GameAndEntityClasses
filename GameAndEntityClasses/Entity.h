#pragma once
class Entity
{
public:
	Entity();
	~Entity();
	int x, y; // not the safest way to do this but we just want guys on the screen
	void update();
};

