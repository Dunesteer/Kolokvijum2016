#pragma once
#include "Memorija.h"
class Niz:public Memorija
{
	bool Pripada(int i);
public:
	
	Niz(int );
	~Niz();
	bool Add(int x);
	bool Add(int i,int x);
	int Get(int i);
};

