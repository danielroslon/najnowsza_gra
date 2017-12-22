#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class zdarzenia
{
private:
	RenderWindow *wsk_okienko;
public:
	zdarzenia(RenderWindow*);
	~zdarzenia();
	void sprawdzanie_zdarzen();
};

