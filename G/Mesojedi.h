#pragma once
#include "Klasa.h"

class Mesojedi : public Klasa
{
public:
	Mesojedi();
	Mesojedi(Dzungla *p, int i, int j);
	Mesojedi(int i, int j) :Klasa(i, j)
	{
		c = ' m';
	}
	~Mesojedi();
	void Pojedi();
};