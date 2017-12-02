#pragma once
#include "Zapis.h"
class Zapisoprekidima:public Zapis
{
private:
	char *opisprekida;
public:
	Zapisoprekidima(double vreme, short t, char* o);
	~Zapisoprekidima();
};

