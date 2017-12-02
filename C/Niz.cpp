#include "Niz.h"
#include "Memorija.h"


bool Niz::Pripada(int i)
{
	return i > 0 && i < maxbrojelemenata;
}

Niz::Niz(int element):Memorija(element)
{
}


Niz::~Niz()
{
}

bool Niz::Add(int x)
{
	return Add(brUpisanih, x);
}

bool Niz::Add(int i, int x)
{
	if (Pripada(i)) {
		niz[i] = x;
		return true;
	}
	return false;
}

int Niz::Get(int i)
{
	if(Pripada(i))
	{
		return niz[i];
	}
	return 0;
}	 
