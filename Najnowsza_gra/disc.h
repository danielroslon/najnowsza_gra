#pragma once
#include "SFML\Graphics.hpp"

using namespace sf;

class disc
{
private:
	Color color;
	CircleShape shape;
public:
	disc(Color);
	disc(Color, Vector2f);
	~disc();

	void set_color(Color);
	void set_position(Vector2f);


	friend class drawing_engine;
};

