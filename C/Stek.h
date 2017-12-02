#pragma once
#include "Memorija.h"
class Stek:public Memorija
{
public:
	Stek(int);
	~Stek();
	int Pop();
	void Push(int x);
};

