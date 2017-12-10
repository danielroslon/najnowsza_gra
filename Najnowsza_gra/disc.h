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
	Color get_color();
	Vector2f get_position();
	float get_radius();

	friend class drawing_engine;
};

