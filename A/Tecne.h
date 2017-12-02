#pragma once
#include "Paket.h"
class Tecne : public Paket
{
public:
	Tecne();
	Tecne(char * naziv, double masa, Datum* d);
	~Tecne();
};

