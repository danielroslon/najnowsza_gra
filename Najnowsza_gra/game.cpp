#include "game.h"



game::game(): window(VideoMode(800,600,32), "Gra", Style::None), d_engine(&window){}
game::game(int x, int y) :window(VideoMode(x,y,32), "Gra", Style::None), d_engine(&window){}

game::~game()
{
}




void game::loop()
{
	disc_container.push_back(disc(Color::Red, Vector2f(200,200)));

	while (window.isOpen())
	{
		window.clear(Color::White);

		Event ev;
		while (window.pollEvent(ev))
		{
			if (ev.type == ev.Closed)
			{
				window.close();
			}
			if (ev.type == ev.KeyPressed && ev.key.code == Keyboard::Escape)
			{
				window.close();
			}
		}

		d_engine.draw(disc_container[0]);
		d_engine.display();
	}
}