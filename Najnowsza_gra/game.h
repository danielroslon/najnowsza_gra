#pragma once
#include <SFML\Graphics.hpp>

#include "board.h"
#include "disc.h"
#include "drawing_engine.h"
#include "player.h"
#include "human_player.h"

#include <vector>

using namespace sf;

class game
{
private:
	bool player1_turn;
	RenderWindow window;
	drawing_engine d_engine;

	board b;
	std::vector<disc> disc_container;

	human_player p1;

public:
	game();
	game(int,int);
	~game();

	void loop();

};

