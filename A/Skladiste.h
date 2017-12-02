#pragma once
#include "Praskaste.h"
#include "Tecne.h"

class Skladiste
{
private:
	char* naziv;
	int kapacitet;
	int zauzeto;
	Paket ** niz;
	bool UNizu(int i);
public:
	Skladiste();
	Skladiste(int velicina, char* naz);
	~Skladiste();
	void addPaket(Paket* p);
	Paket * getP(int i);
	int getKapacitet();
};

