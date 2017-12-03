#include  "Pumpa.h"

Pumpa::Pumpa()
{
	protocnamoc = 0;
	maxbrzapisa = 0;
	niz = nullptr;
	brojupisanih = 0;
}

Pumpa::Pumpa(double pm, int mbz)
{
	protocnamoc = pm;
	maxbrzapisa = mbz;
	niz = new Zapis*[maxbrzapisa];
	for (int i = 0; i < maxbrzapisa; i++)
	{
		niz[i] = nullptr;
	}
	brojupisanih = 0;
}

Pumpa::~Pumpa()
{
	for (int i = 0; i < maxbrzapisa; i++)
	{
		delete niz[i];

	}
	delete[] niz;
}

void Pumpa::DodajZapis(Zapis* z)
{
	if (brojupisanih < maxbrzapisa)
	{
		niz[brojupisanih] = z;
		brojupisanih++;
	}
}

double Pumpa::TeoretskiMax()
{
	double max = 0;
	for(int i=0;i<brojupisanih;i++)
	{
		max += protocnamoc * niz[i]->Vreme();
	}

	double stvarno = 0;
	for (int i = 0; i<brojupisanih; i++)
	{
		stvarno += protocnamoc * niz[i]->Rad();
	}

	return max - stvarno;
}

double Pumpa::ProsecanProtok()
{
	double max = 0;
	double vreme = 0;
	for (int i = 0; i<brojupisanih; i++)
	{
		max += protocnamoc * niz[i]->Rad();
		vreme += niz[i]->Vreme();
	}
	return max / vreme;
}

