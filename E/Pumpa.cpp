#include "Pumpa.h"


Pumpa::Pumpa(int n,float max)
{
	brZapisa = 0;
	maxBrZapisa = n;
	niz = new Zapis*[n];
	maxpm = max;
	for (int i = 0; i < n; i++)
		niz[i] = nullptr;
}

Pumpa::~Pumpa()
{
	for (int i = 0; i < maxBrZapisa; i++)
		if(niz[i]!=nullptr)
			delete niz[i];
	delete[] niz;
}

double Pumpa::IspumpanaVoda()
{
	if (brZapisa == 0 || niz == nullptr) return 0;
	double rez = 0;
	for (int i = 0; i < brZapisa; i++)
	{
		rez += niz[i]->Rad();
	}
	return rez*maxpm;
}

double Pumpa::ProsecniProtok()
{
	double rez = IspumpanaVoda();
	double vreme = 0;
	for (int i = 0; i < brZapisa; i++)
	{
		vreme += niz[i]->Vreme();
	}
	return rez / vreme;
}

void Pumpa::Add(Zapis * z)
{
	if (brZapisa >= maxBrZapisa || niz == nullptr)return;

	niz[brZapisa++] = z;
}
