#include "game.h"



game::game(): w(VideoMode(800,600,32), "Tutaj nie wiem co wpisac", Style::None)
{
}


game::~game()
{
}


void game::loop()
{
	while (w.isOpen())
	{
		w.clear(Color::Green);

		Event ev;
		while (w.pollEvent(ev))
		{
			if (ev.type == ev.Closed)
			{
				w.close();
			}
			if (ev.type == ev.KeyPressed && ev.key.code == Keyboard::Escape)
			{
				w.close();
			}
		}

		w.display();
	}
}