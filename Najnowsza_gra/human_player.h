#pragma once
#include "player.h"
#include <Windows.h>
class human_player : public player
{
public:
	human_player();
	~human_player();

	void move(std::vector<disc>&, RenderWindow*);
};

