#include "Skladiste.h"
#include <string>


bool Skladiste::UNizu(int i)
{
	return i >= 0 && i < kapacitet;
}

Skladiste::Skladiste()
{
	kapacitet = 0;
	zauzeto = 0;
	naziv = nullptr;
	niz = nullptr;
}

Skladiste::Skladiste(int velicina, char * naz)
{
	naziv = new char[strlen(naz) + 1];
	strcpy(naziv, naz);
	kapacitet = velicina;
	zauzeto = 0;
	niz = new Paket*[velicina];

	for (int i = 0; i < kapacitet; i++)
		niz[i] = nullptr;
}


Skladiste::~Skladiste()
{
	delete[]naziv;
	for (int i = 0; i < kapacitet; i++)
		delete niz[i];
	delete[] niz;
}

void Skladiste::addPaket(Paket * p)
{
	if (UNizu(zauzeto)) 
	{
		niz[zauzeto++] = p;
	}
}

Paket * Skladiste::getP(int i)
{
	if (UNizu(i))
	{
		return niz[i];
	}
	return nullptr;
}

int Skladiste::getKapacitet()
{
	return kapacitet;
}
