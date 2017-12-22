#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

using namespace sf;

class rysownik
{
private:
	RenderWindow *wsk_okienko;
	std::vector<Shape*> obiekty_do_rysowania;
public:
	rysownik(RenderWindow *_wsk_okienko);
	~rysownik();

	void dodaj_obiekt_do_rysowania(Shape*);
	void rysuj();
};

