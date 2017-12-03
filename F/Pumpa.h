#pragma once
#include "Zapis.h"
#include "ZapisOPrekidu.h"

class Pumpa
{
private:
	double protocnamoc;
	int maxbrzapisa;
	Zapis **niz;
	int brojupisanih;
public:
	Pumpa();
	Pumpa(double pm, int mbz);
	~Pumpa();
	void DodajZapis(Zapis* z);
	double TeoretskiMax();
	double ProsecanProtok();
};
