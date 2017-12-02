#include "Skladiste.h"
#include <cstring>
#include <iostream>

using namespace std;
Skladiste::Skladiste()
{
}

Skladiste::Skladiste(char * n, int k)
{
	naziv = new char[strlen(n) + 1];
	strcpy(naziv, n);
	kapacitet = k;
	niz = new Paket*[k];
}


Skladiste::~Skladiste()
{
	for (int i = 0; i < nizZauzeto; i++)
		delete niz[i];
	delete[] niz;
	niz = nullptr;
}

bool Skladiste::Add(Paket * p)
{
	if (nizZauzeto >= kapacitet)
	{
		return false;
	}
	niz[nizZauzeto] = p;
	nizZauzeto++;
	return true;
}

char * Skladiste::GetNaziv()
{

	return naziv;
}

int Skladiste::GetnizZauzeto()
{
	return nizZauzeto;
}

void Skladiste::Print(int m)
{
	for (int i = 0; i < nizZauzeto; i++)
	{
		float masa = niz[i]->GetMasa();
		if (masa < m)
		{
			cout << niz[i]->GetNaziv() << " masa:" << masa << endl;
		}
	}
	cout << endl;

}
