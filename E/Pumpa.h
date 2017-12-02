#pragma once
#include "Zapis.h"
class Pumpa
{
protected:
	float maxpm;
	Zapis **niz;
	int brZapisa;
	int maxBrZapisa;
public:
	Pumpa(int n,float max);
	~Pumpa();
	double IspumpanaVoda();
	double ProsecniProtok();
	void Add(Zapis *z);
};

