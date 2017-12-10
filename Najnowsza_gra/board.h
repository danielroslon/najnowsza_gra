#pragma once
#include <SFML\Graphics.hpp>
#include <vector>

using namespace sf;

struct line
{
	RectangleShape shape;
	line(){}
};

class board
{
private:
	Vector2u size;
	std::vector<line> container;
public:
	board(Vector2u);
	~board();
	std::vector<line> operator()()
	{
		return container;
	}
};

