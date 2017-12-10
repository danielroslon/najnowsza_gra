#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include "disc.h"

using namespace sf;

class player
{
protected:
	std::string name;
public:
	player();
	~player();

	virtual void move(std::vector<disc>&, RenderWindow*) = 0;

};

