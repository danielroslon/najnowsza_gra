#include "human_player.h"



human_player::human_player()
{
}


human_player::~human_player()
{
}

void human_player::move(std::vector<disc>& disc_container, RenderWindow *w)
{
	for (std::vector<disc>::iterator start = disc_container.begin(); start != disc_container.end(); start++)
	{
		if (Mouse::getPosition(*w).x >= start->get_position().x - 50 && Mouse::getPosition(*w).x <= start->get_position().x + 50)
		{
			if (Mouse::getPosition(*w).y >= start->get_position().y - 50 && Mouse::getPosition(*w).y <= start->get_position().y + 50)
			{
				std::cout << "\a";
				break;			
			}
		}
		else
		{
			disc_container.push_back(disc(Color::Red, Vector2f(Mouse::getPosition(*w).x, Mouse::getPosition(*w).y)));
			break;
		}
	}
}