#include "drawing_engine.h"



drawing_engine::drawing_engine(RenderWindow *_window):window(_window)
{
}


drawing_engine::~drawing_engine()
{
}

void drawing_engine::display()
{
	window->display();
}
