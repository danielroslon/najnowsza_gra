#include "gra.h"



gra::gra(): okienko(VideoMode(800,600,32), "Aplikacja", Style::None), r(&okienko), z(&okienko)
{
}


gra::~gra()
{
}


void gra::loop()
{
	while (okienko.isOpen())
	{
		z.sprawdzanie_zdarzen();
		r.rysuj();
	}
}
