#include "zdarzenia.h"



zdarzenia::zdarzenia(RenderWindow* _wsk_okienko): wsk_okienko(_wsk_okienko)
{
}


zdarzenia::~zdarzenia()
{
}

void zdarzenia::sprawdzanie_zdarzen()
{
	Event zdarzenie;
	while (wsk_okienko->pollEvent(zdarzenie))
	{
		if (zdarzenie.type == zdarzenie.Closed)
		{
			wsk_okienko->close();
		}
		if (zdarzenie.type == zdarzenie.KeyPressed && zdarzenie.key.code == Keyboard::Escape)
		{
			wsk_okienko->close();
		}
	}
}
