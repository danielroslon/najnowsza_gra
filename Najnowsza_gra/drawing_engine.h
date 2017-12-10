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
		for (class_with_shape::iterator start = cws.begin(); start != cws.end(); start++)
		{
			window->draw(start->shape);
		}
		
	}

	void display();
};

