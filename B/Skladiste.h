#pragma once
#include"Paket.h"
class Skladiste
{
protected:
	char* naziv;
	int kapacitet;
	int nizZauzeto;
	Paket** niz;

public:
	Skladiste();
	Skladiste(char* n, int k);
	~Skladiste();
	bool Add(Paket* p);
	char* GetNaziv();
	int GetnizZauzeto();
	void Print(int);
};

