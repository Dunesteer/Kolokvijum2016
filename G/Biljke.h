#pragma once
#include "Klasa.h"

class Biljke : public Klasa
{
public:
	Biljke();
	Biljke(Dzungla *p, int i, int j);
	Biljke(int i, int j) :Klasa(i, j)
	{
		c = 'k';
	}
	~Biljke();
	void Pojedi();
};

