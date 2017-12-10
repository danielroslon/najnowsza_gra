#pragma once
#include <SFML\Graphics.hpp>

#include "disc.h"
#include "drawing_engine.h"

#include <vector>

using namespace sf;

class game
{
private:
	RenderWindow window;
	drawing_engine d_engine;

	std::vector<disc> disc_container;
public:
	game();
	game(int,int);
	~game();

	void loop();

};

