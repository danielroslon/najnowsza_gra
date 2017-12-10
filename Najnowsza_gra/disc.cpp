#include "disc.h"



disc::disc(Color _color): color(_color), shape(20, 100)
{
	shape.setFillColor(color);
	shape.setOrigin(shape.getRadius(), shape.getRadius());
}
disc::disc(Color _color, Vector2f v) : color(_color), shape(20, 100)
{
	shape.setFillColor(color);
	shape.setOrigin(shape.getRadius(), shape.getRadius());
	shape.setPosition(v);
}


disc::~disc()
{
}

void disc::set_color(Color _color)
{
	shape.setFillColor(_color);
}
void disc::set_position(Vector2f _position)
{
	shape.setPosition(_position);
}
Color disc::get_color()
{
	return color;
}
Vector2f disc::get_position()
{
	return shape.getPosition();
}
float disc::get_radius()
{
	return shape.getRadius();
}