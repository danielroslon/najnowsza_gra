#include "game.h"



game::game(): window(VideoMode(800,8000,32), "Gra", Style::None), d_engine(&window), b(window.getSize()), player1_turn(true){}
game::game(int x, int y) :window(VideoMode(x,y,32), "Gra", Style::None), d_engine(&window), b(window.getSize()), player1_turn(true){}

game::~game()
{
}




void game::loop()
{
	disc_container.push_back(disc(Color::Red, Vector2f(350, 350)));
	disc_container.push_back(disc(Color::Red, Vector2f(450, 450)));
	disc_container.push_back(disc(Color::Blue, Vector2f(350, 450)));
	disc_container.push_back(disc(Color::Blue, Vector2f(450, 350)));

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
			if (ev.type == ev.MouseButtonPressed)
			{
				p1.move(disc_container, &window);
			}
		}


		

		d_engine.draw(disc_container);
		d_engine.draw(b());
		d_engine.display();
	}
}