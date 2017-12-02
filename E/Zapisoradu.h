#pragma once
#include "Zapis.h"
class Zapisoradu:public Zapis
{
private:
	float procenat;
public:
	Zapisoradu(double vreme, short t,float p);
	~Zapisoradu();
	double Rad();
};

