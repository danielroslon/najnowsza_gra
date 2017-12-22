#pragma once
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <SFML\Graphics.hpp>


#include "rysownik.h"
#include "zdarzenia.h"

using namespace sf;


class gra
{
private:
	RenderWindow okienko;
	rysownik r;
	zdarzenia z;
public:
	gra();
	~gra();

	void loop();

};

