#include "Biljojedi.h"
#include "Dzungla.h"


Biljojedi::Biljojedi()
{
}
Biljojedi::Biljojedi(Dzungla * p, int i, int j) :Klasa(p, i, j)
{
	c = 'i';

}

Biljojedi::~Biljojedi()
{
}

void Biljojedi::Pojedi()
{
	p->PojediBiljke(red);
}
