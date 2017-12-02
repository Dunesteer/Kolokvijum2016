#include "Paket.h"
#include <iostream>
using namespace std;
#include <string>

Paket::Paket()
{
}

Paket::Paket(char *n, double m, Datum * d)
{
	naziv = new char[strlen(n)+1];
	strcpy(naziv, n);
	masa = m;
	roktrajanja = new Datum(d->getDan(), d->getMesec(), d->getGodina());
}

Paket::~Paket()
{
	delete[] naziv;
	delete roktrajanja;
}

Datum * Paket::RokTrajanja()
{
	return roktrajanja;
}

void Paket::Stampaj()
{
	cout << "Tezina " << naziv << " paketa je: " << masa << endl;
}

void Paket::setMasa(double masa)
{
	masa = masa;
}
