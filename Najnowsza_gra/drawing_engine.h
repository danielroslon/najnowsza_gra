#pragma once
#include "SFML\Graphics.hpp"

using namespace sf;

class drawing_engine
{
private:
	RenderWindow *window;
public:
	drawing_engine(RenderWindow*);
	~drawing_engine();

	template<typename class_with_shape> void draw(class_with_shape cws)
	{
		window->draw(cws.shape);
	}

	void display();
};

