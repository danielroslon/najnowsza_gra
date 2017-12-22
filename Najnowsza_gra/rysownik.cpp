#include "rysownik.h"


rysownik::~rysownik()
{
	
}

rysownik::rysownik(RenderWindow *_wsk_okienko): wsk_okienko(_wsk_okienko)
{

}

void rysownik::dodaj_obiekt_do_rysowania(Shape *s)
{
	obiekty_do_rysowania.push_back(s);
}

void rysownik::rysuj()
{
	wsk_okienko->clear(Color::White);
	for (std::vector<Shape*>::iterator start = obiekty_do_rysowania.begin(); start != obiekty_do_rysowania.end(); start++)
	{
		wsk_okienko->draw(**start);
	}
	wsk_okienko->display();
}