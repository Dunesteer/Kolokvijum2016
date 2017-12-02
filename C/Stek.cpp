#include "Stek.h"
#include "Memorija.h"



Stek::Stek(int element) :Memorija(element)
{
}


Stek::~Stek()
{
}

int Stek::Pop()
{
	if (brUpisanih > 0)
	{
		int pom = niz[brUpisanih - 1];
		brUpisanih--;
		return pom;
	}
	return 0;
}

void Stek::Push(int x)
{
	if (niz == nullptr) return;
	niz[brUpisanih++] = x;
}
