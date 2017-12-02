#include "Mesojedi.h"
#include "Dzungla.h"


Mesojedi::Mesojedi()
{
}

Mesojedi::Mesojedi(Dzungla * ptr, int i, int j):Klasa (ptr,i,j)
{
	c = 'm';
}


Mesojedi::~Mesojedi()
{
}

void Mesojedi::Pojedi()
{
	p->PojediBiljkojede(kolona);
}
