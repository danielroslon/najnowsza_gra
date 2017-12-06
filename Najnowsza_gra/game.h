#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;

class game
{
private:
	RenderWindow w;
public:
	game();
	~game();

	void loop();

};

