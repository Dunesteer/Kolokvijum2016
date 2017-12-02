#pragma once
#include "Klasa.h"

class Biljojedi : public Klasa
{
public:
	Biljojedi();
	Biljojedi(Dzungla *p, int i, int j);
	Biljojedi(int i, int j) :Klasa(i, j)
	{
		c = 'i';
	}
	~Biljojedi();
	void Pojedi();
};