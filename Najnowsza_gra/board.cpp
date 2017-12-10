#include "board.h"



board::board(Vector2u _size): size(_size)
{
	for (int i = 0; i < 16; i++)
	{
		line l;
		
		float distance = size.x / 8;
		l.shape.setFillColor(Color::Black);
		if (i < 8)
		{
			l.shape.setSize(Vector2f(size.x, 5));
			l.shape.setPosition(0, i * distance);
		}
		else
		{
			l.shape.setSize(Vector2f(size.x, 5));
			l.shape.setRotation(90);
			l.shape.setPosition(i%8 *distance, 0);
		}
		

		container.push_back(l);
	}
}


board::~board()
{
}
