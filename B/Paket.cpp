#include "Paket.h"
#include <cstring>


Paket::Paket()
{
}

Paket::Paket(char * n, float m, Datum * r)
{
	naziv = new char[strlen(n) + 1];
	strcpy(naziv, n);
	masa = m;
	RokTrajanja = new Datum (*r);
}


Paket::~Paket()
{
}

char * Paket::GetNaziv()
{
	return naziv;
}

float Paket::GetMasa()
{
	return masa;
}
